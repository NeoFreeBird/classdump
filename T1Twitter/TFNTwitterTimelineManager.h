//
#ifndef TFNTwitterTimelineManager_h
#define TFNTwitterTimelineManager_h
@import Foundation;

#include "TFNTwitterHomeTimeline.h"
#include "TFNTwitterTimelineManagerProtocol-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount;

@interface TFNTwitterTimelineManager : NSObject <TFNTwitterTimelineManagerProtocol>

@property (weak, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) TFNTwitterHomeTimeline *homeTimeline;
@property (readonly, nonatomic) TFNTwitterHomeTimeline *homeLatestTimeline;
@property (readonly, nonatomic) TFNTwitterHomeTimeline *creatorSubscriptionsTimeline;
@property (readonly, nonatomic) TFNTwitterHomeTimeline *pinnedCreatorSubscriptionsTimeline;
@property (readonly, nonatomic) TFNTwitterHomeTimeline *homeRankedFollowingTimeline;
@property (readonly, nonatomic) TFNTwitterHomeTimeline *homeCountryFilteredTimeline;
@property (readonly, nonatomic) TFNTwitterHomeTimeline *homeTopicFilteredTimeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)timelineFactory;
+ (void)setTimelineFactory:(id)factory;

/* instance methods */
- (id)homeTimelineForVariant:(long long)variant;
- (id)initWithAccount:(id)account;
- (_Bool)_isDeferLoadingInactiveTimelines;
- (void)refreshHomeTimelineWithSource:(long long)source;
- (void)refreshSecondaryTimelinesWithSource:(long long)source;
- (void)refreshTimelinesWithSource:(long long)source excludingTimelines:(id)timelines;
- (void)accountDidBecomeActive;

@end

#endif /* TFNTwitterTimelineManager_h */

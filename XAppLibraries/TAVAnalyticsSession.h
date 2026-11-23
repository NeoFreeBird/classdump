//
#ifndef TAVAnalyticsSession_h
#define TAVAnalyticsSession_h
@import Foundation;

#include "TAVAnalyticsPresentationState-Protocol.h"
#include "TAVAnalyticsSessionConfiguration.h"
#include "TAVPlaybackObserver-Protocol.h"
#include "TAVWallTime.h"

@class NSArray, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

@interface TAVAnalyticsSession : NSObject <TAVPlaybackObserver>

@property (readonly, copy, nonatomic) NSArray *trackers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue;
@property (nonatomic) _Bool hasEnded;
@property (copy, nonatomic) id <TAVAnalyticsPresentationState> lastKnownPresentationState;
@property (retain, nonatomic) NSNotificationCenter *sessionNotificationCenter;
@property (copy, nonatomic) TAVAnalyticsSessionConfiguration *configuration;
@property (readonly, nonatomic) TAVWallTime *playerPreparationStartWallTime;
@property (retain, nonatomic) TAVWallTime *firstIntentToPlay;

/* class methods */
+ (id)sessionWithConfiguration:(id)configuration playerPreparationStartWallTime:(id)time;
+ (id)builtInTrackersWithFeatureConfiguration:(id)configuration;

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (id)initWithTrackers:(id)trackers playerPreparationStartWallTime:(id)time configuration:(id)configuration;
- (void)updateWithState:(id)state;
- (void)end;
- (void)dealloc;

@end

#endif /* TAVAnalyticsSession_h */

//
#ifndef TAVAnalyticsEventPlaybackLapse_h
#define TAVAnalyticsEventPlaybackLapse_h
@import Foundation;

#include "TAVAnalyticsClientEvent-Protocol.h"
#include "TAVAnalyticsEvent.h"
#include "TAVAnalyticsEventWithScribeParameters-Protocol.h"
#include "TAVAnalyticsSessionState.h"

@class NSDictionary, NSString, NSUUID;

@interface TAVAnalyticsEventPlaybackLapse : TAVAnalyticsEvent <TAVAnalyticsClientEvent, TAVAnalyticsEventWithScribeParameters>

@property (readonly, copy, nonatomic) NSUUID *playlistItemKey;
@property (readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *clientEventAction;
@property (readonly, copy, nonatomic) NSString *clientEventCategory;
@property (readonly, copy, nonatomic) NSDictionary *clientEventParameters;
@property (readonly, copy, nonatomic) NSUUID *playlistItemKey;
@property (readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double playbackLapse;

/* class methods */
+ (id)private_valueKeys;

/* instance methods */
- (void)updateScribeParameters:(id)parameters;
- (id)initWithPlaylistItemKey:(id)key analyticsSessionState:(id)state playbackLapse:(double)lapse;
- (id)initWithAnalyticsSessionState:(id)state playbackLapse:(double)lapse;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsEventPlaybackLapse_h */

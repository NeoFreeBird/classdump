//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsEventVODHeartbeat_h
#define TAVAnalyticsEventVODHeartbeat_h
@import Foundation;

#include "TAVAnalyticsClientEvent-Protocol.h"
#include "TAVAnalyticsEvent.h"
#include "TAVAnalyticsEventWithScribeParameters-Protocol.h"
#include "TAVAnalyticsSessionState.h"
#include "TVDIHeartbeatMetrics.h"

@class NSDictionary, NSString, NSUUID;

@interface TAVAnalyticsEventVODHeartbeat : TAVAnalyticsEvent <TAVAnalyticsClientEvent, TAVAnalyticsEventWithScribeParameters>

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
@property (readonly, nonatomic) long long timeSpentWaiting;
@property (readonly, nonatomic) double indicatedBitrate;
@property (readonly, nonatomic) double videoDuration;
@property (readonly, nonatomic) long long startTime;
@property (readonly, nonatomic) long long endTime;
@property (readonly, nonatomic) long long numberOfBytesTransferred;
@property (readonly, nonatomic) TVDIHeartbeatMetrics *heartbeatMetrics;
@property (readonly, nonatomic) long long audibleDuration;

/* class methods */
+ (id)private_valueKeys;

/* instance methods */
- (void)updateScribeParameters:(id)parameters;
- (id)initWithPlaylistItemKey:(id)key analyticsSessionState:(id)state timeSpentWaiting:(long long)waiting indicatedBitrate:(double)bitrate startTime:(long long)time endTime:(long long)time videoDuration:(double)duration numberOfBytesTransferred:(long long)transferred heartbeatMetrics:(id)metrics audibleDuration:(long long)duration;
- (id)initWithAnalyticsSessionState:(id)state timeSpentWaiting:(long long)waiting indicatedBitrate:(double)bitrate startTime:(long long)time endTime:(long long)time videoDuration:(double)duration numberOfBytesTransferred:(long long)transferred heartbeatMetrics:(id)metrics audibleDuration:(long long)duration;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsEventVODHeartbeat_h */

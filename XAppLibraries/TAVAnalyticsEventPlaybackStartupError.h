//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsEventPlaybackStartupError_h
#define TAVAnalyticsEventPlaybackStartupError_h
@import Foundation;

#include "TAVAnalyticsClientEvent-Protocol.h"
#include "TAVAnalyticsEvent.h"
#include "TAVAnalyticsEventWithScribeParameters-Protocol.h"
#include "TAVAnalyticsSessionState.h"

@class NSDictionary, NSError, NSNumber, NSString, NSUUID;

@interface TAVAnalyticsEventPlaybackStartupError : TAVAnalyticsEvent <TAVAnalyticsClientEvent, TAVAnalyticsEventWithScribeParameters>

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
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSNumber *latency;

/* class methods */
+ (id)private_valueKeys;

/* instance methods */
- (void)updateScribeParameters:(id)parameters;
- (id)initWithPlaylistItemKey:(id)key analyticsSessionState:(id)state error:(id)error latency:(id)latency;
- (id)initWithAnalyticsSessionState:(id)state error:(id)error latency:(id)latency;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsEventPlaybackStartupError_h */

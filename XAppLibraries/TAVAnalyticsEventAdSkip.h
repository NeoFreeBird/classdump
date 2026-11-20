//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsEventAdSkip_h
#define TAVAnalyticsEventAdSkip_h
@import Foundation;

#include "TAVAnalyticsClientEvent-Protocol.h"
#include "TAVAnalyticsEvent.h"
#include "TAVAnalyticsSessionState.h"

@class NSDictionary, NSString, NSUUID;

@interface TAVAnalyticsEventAdSkip : TAVAnalyticsEvent <TAVAnalyticsClientEvent>

@property (readonly, copy, nonatomic) NSString *clientEventAction;
@property (readonly, copy, nonatomic) NSString *clientEventCategory;
@property (readonly, copy, nonatomic) NSDictionary *clientEventParameters;
@property (readonly, copy, nonatomic) NSUUID *playlistItemKey;
@property (readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double videoAdSkipTime;

/* class methods */
+ (id)private_valueKeys;

/* instance methods */
- (id)initWithPlaylistItemKey:(id)key analyticsSessionState:(id)state videoAdSkipTime:(double)time;
- (id)initWithAnalyticsSessionState:(id)state videoAdSkipTime:(double)time;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsEventAdSkip_h */

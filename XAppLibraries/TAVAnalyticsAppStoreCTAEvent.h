//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsAppStoreCTAEvent_h
#define TAVAnalyticsAppStoreCTAEvent_h
@import Foundation;

#include "TAVAnalyticsCTAEvent.h"

@class NSString;

@interface TAVAnalyticsAppStoreCTAEvent : TAVAnalyticsCTAEvent

@property (readonly, copy, nonatomic) NSString *appStoreID;

/* class methods */
+ (id)private_valueKeys;

/* instance methods */
- (id)initWithPlaylistItemKey:(id)key analyticsSessionState:(id)state URL:(id)url appStoreID:(id)id;
- (id)initWithAnalyticsSessionState:(id)state URL:(id)url appStoreID:(id)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsAppStoreCTAEvent_h */

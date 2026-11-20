//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsClientEvent_Protocol_h
#define TAVAnalyticsClientEvent_Protocol_h
@import Foundation;

#include "TAVAnalyticsEventProtocol-Protocol.h"

@class NSDictionary, NSString;

@protocol TAVAnalyticsClientEvent <TAVAnalyticsEventProtocol>

@required

@property (readonly, copy, nonatomic) NSString *clientEventAction;

@optional

@property (readonly, copy, nonatomic) NSString *clientEventCategory;
@property (readonly, copy, nonatomic) NSDictionary *clientEventParameters;

@end

#endif /* TAVAnalyticsClientEvent_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUNetworkQualityProvider_Protocol_h
#define TNUNetworkQualityProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNUNetworkQualityProvider <NSObject>

@required

@property (nonatomic, readonly) long long APINetworkQuality;
@property (nonatomic, readonly) long long APINetworkQuality;
@property (nonatomic, readonly) long long contentNetworkQuality;

@optional

@end

#endif /* TNUNetworkQualityProvider_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetDurationProviding_Protocol_h
#define TTMAssetDurationProviding_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetDurationProviding <NSObject>

@required

@property (nonatomic, readonly) double duration;

@optional

@end

#endif /* TTMAssetDurationProviding_Protocol_h */

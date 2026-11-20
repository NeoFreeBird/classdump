//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetDurationProviding_Protocol_h
#define TTMAssetDurationProviding_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetDurationProviding <NSObject>

@required

@property (readonly, nonatomic) double duration;

@optional

@end

#endif /* TTMAssetDurationProviding_Protocol_h */

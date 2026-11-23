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

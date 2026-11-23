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

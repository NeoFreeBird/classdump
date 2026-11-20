//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMESDKPropertyProviderDelegate_Protocol_h
#define APMESDKPropertyProviderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol APMESDKPropertyProviderDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)dynamicCustomPropertiesForSDKProperty:(id)sdkproperty;

@end

#endif /* APMESDKPropertyProviderDelegate_Protocol_h */

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

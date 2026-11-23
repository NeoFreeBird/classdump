//
#ifndef GACDeviceCheckTokenGenerator_Protocol_h
#define GACDeviceCheckTokenGenerator_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACDeviceCheckTokenGenerator <NSObject>

@required

@property (readonly) _Bool supported;

/* required instance methods */
- (void)generateTokenWithCompletionHandler:(id /* block */)handler;
- (_Bool)isSupported;

@optional

@end

#endif /* GACDeviceCheckTokenGenerator_Protocol_h */

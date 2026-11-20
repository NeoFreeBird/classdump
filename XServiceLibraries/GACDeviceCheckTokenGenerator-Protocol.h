//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

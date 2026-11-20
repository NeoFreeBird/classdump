//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAuthGuestAuthAPI_Protocol_h
#define TFSAuthGuestAuthAPI_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAuthGuestAuthAPI <NSObject>

@required

/* required instance methods */
- (void)appTokenExchangeWithResponseBlock:(id /* block */)block;
- (void)guestActivateWithAppToken:(id)token responseBlock:(id /* block */)block;

@optional

@end

#endif /* TFSAuthGuestAuthAPI_Protocol_h */

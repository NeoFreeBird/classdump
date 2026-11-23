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

//
#ifndef TBCPeriscopeAuthenticator_Protocol_h
#define TBCPeriscopeAuthenticator_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TBCPeriscopeAuthenticator <NSObject>

@required

/* required instance methods */
- (void)authenticatePeriscopeAccountWithJWT:(id)jwt direct:(_Bool)direct cookieType:(id)type completion:(id /* block */)completion;

@optional

@end

#endif /* TBCPeriscopeAuthenticator_Protocol_h */

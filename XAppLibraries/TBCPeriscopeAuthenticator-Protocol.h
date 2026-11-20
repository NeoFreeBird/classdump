//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

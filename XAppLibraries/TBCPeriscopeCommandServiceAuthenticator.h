//
#ifndef TBCPeriscopeCommandServiceAuthenticator_h
#define TBCPeriscopeCommandServiceAuthenticator_h
@import Foundation;

#include "TBCPeriscopeAuthenticator-Protocol.h"
#include "TNLRequestDelegate-Protocol.h"

@class NSObject, NSString, TNLRequestOperation;

@interface TBCPeriscopeCommandServiceAuthenticator : NSObject <TNLRequestDelegate, TBCPeriscopeAuthenticator> {
    /* instance variables */
    TNLRequestOperation *_periscopeAPIOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;
- (void)authenticatePeriscopeAccountWithJWT:(id)jwt direct:(_Bool)direct cookieType:(id)type completion:(id /* block */)completion;

@end

#endif /* TBCPeriscopeCommandServiceAuthenticator_h */

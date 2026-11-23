//
#ifndef _TtC11ChatSessionP33_0710BDD3183BB4A8B52964CAE606738729ChatExtensionAPIAuthenticator_h
#define _TtC11ChatSessionP33_0710BDD3183BB4A8B52964CAE606738729ChatExtensionAPIAuthenticator_h
@import Foundation;

#include "TFSAPIAuthenticator-Protocol.h"

@class NSObject;

@interface ChatSession.(ChatExtensionAPIAuthenticator in _0710BDD3183BB4A8B52964CAE6067387) : NSObject <TFSAPIAuthenticator> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 requestAuthenticator;
}

/* instance methods */
- (void)signRequest:(id)request parameters:(id)parameters accountID:(id)id authContext:(id)context completion:(id /* block */)completion;
- (id)additionalAuthenticationHTTPHeadersForAccountID:(id)id authContext:(id)context;
- (void)retrieveCredentialForAccountID:(id)id completion:(id /* block */)completion;
- (_Bool)APIRequest:(id)apirequest isAllowedToAuthenticateByAccountID:(id)id;
- (id)handleResponse:(id)response forAccountID:(id)id;
- (id)init;

@end

#endif /* _TtC11ChatSessionP33_0710BDD3183BB4A8B52964CAE606738729ChatExtensionAPIAuthenticator_h */

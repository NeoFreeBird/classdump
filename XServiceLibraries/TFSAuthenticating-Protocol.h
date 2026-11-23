//
#ifndef TFSAuthenticating_Protocol_h
#define TFSAuthenticating_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAuthenticating <NSObject>

@required

/* required instance methods */
- (void)signRequest:(id)request parameters:(id)parameters accountID:(id)id authContext:(id)context completion:(id /* block */)completion;
- (void)signRequest:(id)request parameters:(id)parameters accountID:(id)id authContext:(id)context completion:(id /* block */)completion;
- (id)additionalAuthenticationHTTPHeadersForAccountID:(id)id authContext:(id)context;
- (id)additionalAuthenticationHTTPHeadersForAccountID:(id)id authContext:(id)context;
- (id)handleRequestResponse:(id)response;
- (id)handleRequestResponse:(id)response;
- (void)retrieveCredentialForAccountID:(id)id completion:(id /* block */)completion;
- (void)retrieveCredentialForAccountID:(id)id completion:(id /* block */)completion;
- (_Bool)responseHasRetriableAuthError:(id)error;

@optional

/* optional instance methods */
- (long long)accountAuthErrorCodeFromAPIResponse:(id)apiresponse;
- (long long)accountAuthErrorCodeFromAPIResponse:(id)apiresponse;

@end

#endif /* TFSAuthenticating_Protocol_h */

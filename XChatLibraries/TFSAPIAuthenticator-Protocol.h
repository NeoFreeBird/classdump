//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAPIAuthenticator_Protocol_h
#define TFSAPIAuthenticator_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAPIAuthenticator <NSObject>

@required

/* required instance methods */
- (void)signRequest:(id)request parameters:(id)parameters accountID:(id)id authContext:(id)context completion:(id /* block */)completion;
- (void)signRequest:(id)request parameters:(id)parameters accountID:(id)id authContext:(id)context completion:(id /* block */)completion;
- (id)additionalAuthenticationHTTPHeadersForAccountID:(id)id authContext:(id)context;
- (id)additionalAuthenticationHTTPHeadersForAccountID:(id)id authContext:(id)context;
- (void)retrieveCredentialForAccountID:(id)id completion:(id /* block */)completion;
- (void)retrieveCredentialForAccountID:(id)id completion:(id /* block */)completion;
- (_Bool)APIRequest:(id)apirequest isAllowedToAuthenticateByAccountID:(id)id;
- (_Bool)APIRequest:(id)apirequest isAllowedToAuthenticateByAccountID:(id)id;
- (id)handleResponse:(id)response forAccountID:(id)id;
- (id)handleResponse:(id)response forAccountID:(id)id;

@optional

/* optional instance methods */
- (id)authenticationRetryPolicyProviderForAPIRequest:(id)apirequest authContext:(id)context accountID:(id)id;
- (id)authenticationRetryPolicyProviderForAPIRequest:(id)apirequest authContext:(id)context accountID:(id)id;

@end

#endif /* TFSAPIAuthenticator_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAuthCredentialsManager_h
#define TFSAuthCredentialsManager_h
@import Foundation;

#include "TFSAuthAppOAuth2Helper.h"
#include "TFSAuthConfiguration.h"
#include "TFSAuthConsumerCredential.h"
#include "TFSAuthGuestAuthManager.h"
#include "TFSAuthOAuth1Helper.h"
#include "TFSAuthenticating-Protocol.h"

@class NSObject, NSString;
@protocol TFSAuthAccountAuthService, TFSAuthCredentialStateTransitionDelegate, TFSAuthGuestAuthAPI, TFSAuthKeychainSupport;

@interface TFSAuthCredentialsManager : NSObject <TFSAuthenticating>

@property (readonly, nonatomic) TFSAuthOAuth1Helper *OAuth1Helper;
@property (readonly, nonatomic) TFSAuthAppOAuth2Helper *appOAuth2Helper;
@property (readonly, nonatomic) TFSAuthGuestAuthManager *guestAuthManager;
@property (retain, nonatomic) TFSAuthConfiguration *configuration;
@property (retain, nonatomic) TFSAuthConsumerCredential *oAuthConsumerCredential;
@property (nonatomic) double oAuthClockDelta;
@property (weak, nonatomic) id <TFSAuthAccountAuthService> accountService;
@property (weak, nonatomic) id <TFSAuthGuestAuthAPI> guestAuthAPI;
@property (weak, nonatomic) id <TFSAuthKeychainSupport> keychainSupport;
@property (weak, nonatomic) id <TFSAuthCredentialStateTransitionDelegate> credentialStateTransitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)additionalAuthenticationHTTPHeadersForAccountID:(id)id authContext:(id)context;
- (void)signRequest:(id)request parameters:(id)parameters accountID:(id)id authContext:(id)context completion:(id /* block */)completion;
- (id)handleRequestResponse:(id)response;
- (_Bool)responseHasRetriableAuthError:(id)error;
- (long long)accountAuthErrorCodeFromAPIResponse:(id)apiresponse;
- (void)retrieveCredentialForAccountID:(id)id completion:(id /* block */)completion;
- (void)_signAccountRequest:(id)request parameters:(id)parameters accountID:(id)id requestingAppCredential:(id)credential completion:(id /* block */)completion;
- (void)_signGuestAuthRequest:(id)request completion:(id /* block */)completion;
- (void)_signAppOAuth1Request:(id)request parameters:(id)parameters accountID:(id)id requestingAppCredential:(id)credential callbackURLString:(id)urlstring completion:(id /* block */)completion;
- (void)_signAppOAuth2BasicAuthorizationRequest:(id)request completion:(id /* block */)completion;
- (void)_signAppOAuth2BearerTokenRequest:(id)request bearerToken:(id)token completion:(id /* block */)completion;
- (id)_handleAccountAuthRequestResponse:(id)response;

@end

#endif /* TFSAuthCredentialsManager_h */

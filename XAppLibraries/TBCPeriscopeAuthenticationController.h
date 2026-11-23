//
#ifndef TBCPeriscopeAuthenticationController_h
#define TBCPeriscopeAuthenticationController_h
@import Foundation;

#include "TBCPeriscopeAuthenticator-Protocol.h"
#include "TBCPeriscopeJWTFetcher-Protocol.h"
#include "TBCTwitterAccount-Protocol.h"

@class NSObject;

@interface TBCPeriscopeAuthenticationController : NSObject

@property (nonatomic) unsigned long long numOfTotalAttempts;
@property (nonatomic) _Bool authenticationInProgress;
@property (readonly, nonatomic) id <TBCPeriscopeJWTFetcher> JWTFetcher;
@property (readonly, nonatomic) id <TBCPeriscopeAuthenticator> authenticator;
@property (readonly, weak, nonatomic) id <TBCTwitterAccount> twitterAccount;

/* class methods */
+ (id)authenticationControllerWithTwitterAccount:(id)account;

/* instance methods */
- (id)initWithTwitterAccount:(id)account JWTFetcher:(id)jwtfetcher authenticator:(id)authenticator;
- (void)authenticateDirect:(_Bool)direct cookieType:(id)type withCompletion:(id /* block */)completion;
- (void)_tbc_attemptAuthenticateDirect:(_Bool)direct cookieType:(id)type withCompletion:(id /* block */)completion;
- (void)_tbc_didFetchPeriscopeJWTDirect:(_Bool)jwtdirect cookieType:(id)type withToken:(id)token error:(id)error completion:(id /* block */)completion;
- (void)_tbc_fetchPeriscopeAccountForJWT:(id)jwt direct:(_Bool)direct cookieType:(id)type completion:(id /* block */)completion;
- (void)_tbc_didFetchPeriscopeAccountForJWT:(id)jwt direct:(_Bool)direct cookieType:(id)type withResult:(id)result completion:(id /* block */)completion;
- (void)_tbc_authenticationCompletedWithResult:(id)result completion:(id /* block */)completion;

@end

#endif /* TBCPeriscopeAuthenticationController_h */

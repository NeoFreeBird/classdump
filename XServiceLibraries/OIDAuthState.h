//
#ifndef OIDAuthState_h
#define OIDAuthState_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "OIDAuthStateChangeDelegate-Protocol.h"
#include "OIDAuthorizationResponse.h"
#include "OIDRegistrationResponse.h"
#include "OIDTokenResponse.h"

@class NSDate, NSError, NSMutableArray, NSObject, NSString;
@protocol OIDAuthStateErrorDelegate;

@interface OIDAuthState : NSObject <NSSecureCoding> {
    /* instance variables */
    NSMutableArray *_pendingActions;
    id _pendingActionsSyncObject;
    _Bool _needsTokenRefresh;
}

@property (readonly, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) NSDate *accessTokenExpirationDate;
@property (readonly, nonatomic) NSString *idToken;
@property (readonly, nonatomic) NSString *refreshToken;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) OIDAuthorizationResponse *lastAuthorizationResponse;
@property (readonly, nonatomic) OIDTokenResponse *lastTokenResponse;
@property (readonly, nonatomic) OIDRegistrationResponse *lastRegistrationResponse;
@property (readonly, nonatomic) NSError *authorizationError;
@property (readonly, nonatomic) _Bool isAuthorized;
@property (weak, nonatomic) id <OIDAuthStateChangeDelegate> stateChangeDelegate;
@property (weak, nonatomic) id <OIDAuthStateErrorDelegate> errorDelegate;

/* class methods */
+ (id)authStateByPresentingAuthorizationRequest:(id)request presentingViewController:(id)controller callback:(id /* block */)callback;
+ (id)authStateByPresentingAuthorizationRequest:(id)request presentingViewController:(id)controller prefersEphemeralSession:(_Bool)session callback:(id /* block */)callback;
+ (id)authStateByPresentingAuthorizationRequest:(id)request callback:(id /* block */)callback;
+ (id)authStateByPresentingAuthorizationRequest:(id)request externalUserAgent:(id)agent callback:(id /* block */)callback;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithAuthorizationResponse:(id)response;
- (id)initWithAuthorizationResponse:(id)response tokenResponse:(id)response;
- (id)initWithRegistrationResponse:(id)response;
- (id)initWithAuthorizationResponse:(id)response tokenResponse:(id)response registrationResponse:(id)response;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)tokenType;
- (void)updateWithRegistrationResponse:(id)response;
- (void)updateWithAuthorizationResponse:(id)response error:(id)error;
- (void)updateWithTokenResponse:(id)response error:(id)error;
- (void)updateWithAuthorizationError:(id)error;
- (id)tokenRefreshRequest;
- (id)tokenRefreshRequestWithAdditionalParameters:(id)parameters;
- (id)tokenRefreshRequestWithAdditionalParameters:(id)parameters additionalHeaders:(id)headers;
- (id)tokenRefreshRequestWithAdditionalHeaders:(id)headers;
- (void)didChangeState;
- (void)setNeedsTokenRefresh;
- (void)performActionWithFreshTokens:(id /* block */)tokens;
- (void)performActionWithFreshTokens:(id /* block */)tokens additionalRefreshParameters:(id)parameters;
- (void)performActionWithFreshTokens:(id /* block */)tokens additionalRefreshParameters:(id)parameters dispatchQueue:(id)queue;
- (_Bool)isTokenFresh;

@end

#endif /* OIDAuthState_h */

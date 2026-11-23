//
#ifndef GIDGoogleUser_h
#define GIDGoogleUser_h
@import Foundation;

#include "GIDConfiguration.h"
#include "GIDProfileData.h"
#include "GIDToken.h"
#include "GTMAuthSessionDelegate-Protocol.h"
#include "GTMFetcherAuthorizationProtocol-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "OIDAuthState.h"
#include "OIDAuthStateChangeDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString;

@interface GIDGoogleUser : NSObject <OIDAuthStateChangeDelegate, NSSecureCoding> {
    /* instance variables */
    GIDConfiguration *_cachedConfiguration;
    NSMutableArray *_tokenRefreshHandlerQueue;
}

@property (retain, nonatomic) id <GTMAuthSessionDelegate> authSessionDelegate;
@property (retain, nonatomic) GIDToken *accessToken;
@property (retain, nonatomic) GIDToken *refreshToken;
@property (retain, nonatomic) GIDToken *idToken;
@property (readonly, nonatomic) OIDAuthState *authState;
@property (retain, nonatomic) id <GTMFetcherAuthorizationProtocol> fetcherAuthorizer;
@property (readonly, nonatomic) NSString *emmSupport;
@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) GIDProfileData *profile;
@property (readonly, nonatomic) NSArray *grantedScopes;
@property (readonly, nonatomic) GIDConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (void)refreshTokensIfNeededWithCompletion:(id /* block */)completion;
- (void)addScopes:(id)scopes presentingViewController:(id)controller completion:(id /* block */)completion;
- (id)initWithAuthState:(id)state profileData:(id)data;
- (void)updateWithTokenResponse:(id)response authorizationResponse:(id)response profileData:(id)data;
- (void)updateTokensWithAuthState:(id)state;
- (id)hostedDomain;
- (void)didChangeState:(id)state;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* GIDGoogleUser_h */

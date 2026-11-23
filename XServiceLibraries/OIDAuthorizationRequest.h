//
#ifndef OIDAuthorizationRequest_h
#define OIDAuthorizationRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "OIDExternalUserAgentRequest-Protocol.h"
#include "OIDServiceConfiguration.h"

@class NSDictionary, NSObject, NSString, NSURL;

@interface OIDAuthorizationRequest : NSObject <NSCopying, NSSecureCoding, OIDExternalUserAgentRequest>

@property (readonly, nonatomic) OIDServiceConfiguration *configuration;
@property (readonly, nonatomic) NSString *responseType;
@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *clientSecret;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) NSURL *redirectURL;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *nonce;
@property (readonly, nonatomic) NSString *codeVerifier;
@property (readonly, nonatomic) NSString *codeChallenge;
@property (readonly, nonatomic) NSString *codeChallengeMethod;
@property (readonly, nonatomic) NSDictionary *additionalParameters;

/* class methods */
+ (_Bool)isSupportedResponseType:(id)type;
+ (_Bool)supportsSecureCoding;
+ (id)generateCodeVerifier;
+ (id)generateState;
+ (id)codeChallengeS256ForVerifier:(id)verifier;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration clientId:(id)id clientSecret:(id)secret scope:(id)scope redirectURL:(id)url responseType:(id)type state:(id)state nonce:(id)nonce codeVerifier:(id)verifier codeChallenge:(id)challenge codeChallengeMethod:(id)method additionalParameters:(id)parameters;
- (id)initWithConfiguration:(id)configuration clientId:(id)id clientSecret:(id)secret scopes:(id)scopes redirectURL:(id)url responseType:(id)type additionalParameters:(id)parameters;
- (id)initWithConfiguration:(id)configuration clientId:(id)id scopes:(id)scopes redirectURL:(id)url responseType:(id)type additionalParameters:(id)parameters;
- (id)initWithConfiguration:(id)configuration clientId:(id)id scopes:(id)scopes redirectURL:(id)url responseType:(id)type nonce:(id)nonce additionalParameters:(id)parameters;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)authorizationRequestURL;
- (id)externalUserAgentRequestURL;
- (id)redirectScheme;

@end

#endif /* OIDAuthorizationRequest_h */

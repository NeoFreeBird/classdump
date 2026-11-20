//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OIDTokenRequest_h
#define OIDTokenRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "OIDServiceConfiguration.h"

@class NSDictionary, NSObject, NSString, NSURL;

@interface OIDTokenRequest : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) OIDServiceConfiguration *configuration;
@property (readonly, nonatomic) NSString *grantType;
@property (readonly, nonatomic) NSString *authorizationCode;
@property (readonly, nonatomic) NSURL *redirectURL;
@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *clientSecret;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) NSString *refreshToken;
@property (readonly, nonatomic) NSString *codeVerifier;
@property (readonly, nonatomic) NSDictionary *additionalParameters;
@property (readonly, nonatomic) NSDictionary *additionalHeaders;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration grantType:(id)type authorizationCode:(id)code redirectURL:(id)url clientID:(id)id clientSecret:(id)secret scopes:(id)scopes refreshToken:(id)token codeVerifier:(id)verifier additionalParameters:(id)parameters;
- (id)initWithConfiguration:(id)configuration grantType:(id)type authorizationCode:(id)code redirectURL:(id)url clientID:(id)id clientSecret:(id)secret scope:(id)scope refreshToken:(id)token codeVerifier:(id)verifier additionalParameters:(id)parameters;
- (id)initWithConfiguration:(id)configuration grantType:(id)type authorizationCode:(id)code redirectURL:(id)url clientID:(id)id clientSecret:(id)secret scopes:(id)scopes refreshToken:(id)token codeVerifier:(id)verifier additionalParameters:(id)parameters additionalHeaders:(id)headers;
- (id)initWithConfiguration:(id)configuration grantType:(id)type authorizationCode:(id)code redirectURL:(id)url clientID:(id)id clientSecret:(id)secret scope:(id)scope refreshToken:(id)token codeVerifier:(id)verifier additionalParameters:(id)parameters additionalHeaders:(id)headers;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)tokenRequestURL;
- (id)tokenRequestBody;
- (id)URLRequest;

@end

#endif /* OIDTokenRequest_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OIDAuthorizationResponse_h
#define OIDAuthorizationResponse_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "OIDAuthorizationRequest.h"

@class NSDate, NSDictionary, NSObject, NSString;

@interface OIDAuthorizationResponse : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) OIDAuthorizationRequest *request;
@property (readonly, nonatomic) NSString *authorizationCode;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) NSDate *accessTokenExpirationDate;
@property (readonly, nonatomic) NSString *tokenType;
@property (readonly, nonatomic) NSString *idToken;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) NSDictionary *additionalParameters;

/* class methods */
+ (id)fieldMap;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithRequest:(id)request parameters:(id)parameters;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)tokenExchangeRequest;
- (id)tokenExchangeRequestWithAdditionalParameters:(id)parameters;
- (id)tokenExchangeRequestWithAdditionalParameters:(id)parameters additionalHeaders:(id)headers;

@end

#endif /* OIDAuthorizationResponse_h */

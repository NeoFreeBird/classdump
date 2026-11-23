//
#ifndef OIDRegistrationResponse_h
#define OIDRegistrationResponse_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "OIDRegistrationRequest.h"

@class NSDate, NSDictionary, NSObject, NSString, NSURL;

@interface OIDRegistrationResponse : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) OIDRegistrationRequest *request;
@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSDate *clientIDIssuedAt;
@property (readonly, nonatomic) NSString *clientSecret;
@property (readonly, nonatomic) NSDate *clientSecretExpiresAt;
@property (readonly, nonatomic) NSString *registrationAccessToken;
@property (readonly, nonatomic) NSURL *registrationClientURI;
@property (readonly, nonatomic) NSString *tokenEndpointAuthenticationMethod;
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

@end

#endif /* OIDRegistrationResponse_h */

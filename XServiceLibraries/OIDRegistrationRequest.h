//
#ifndef OIDRegistrationRequest_h
#define OIDRegistrationRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "OIDServiceConfiguration.h"

@class NSArray, NSDictionary, NSObject, NSString;

@interface OIDRegistrationRequest : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) OIDServiceConfiguration *configuration;
@property (readonly, nonatomic) NSString *initialAccessToken;
@property (readonly, nonatomic) NSString *applicationType;
@property (readonly, nonatomic) NSArray *redirectURIs;
@property (readonly, nonatomic) NSArray *responseTypes;
@property (readonly, nonatomic) NSArray *grantTypes;
@property (readonly, nonatomic) NSString *subjectType;
@property (readonly, nonatomic) NSString *tokenEndpointAuthenticationMethod;
@property (readonly, nonatomic) NSDictionary *additionalParameters;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration redirectURIs:(id)uris responseTypes:(id)types grantTypes:(id)types subjectType:(id)type tokenEndpointAuthMethod:(id)method additionalParameters:(id)parameters;
- (id)initWithConfiguration:(id)configuration redirectURIs:(id)uris responseTypes:(id)types grantTypes:(id)types subjectType:(id)type tokenEndpointAuthMethod:(id)method initialAccessToken:(id)token additionalParameters:(id)parameters;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)URLRequest;
- (id)JSONString;

@end

#endif /* OIDRegistrationRequest_h */

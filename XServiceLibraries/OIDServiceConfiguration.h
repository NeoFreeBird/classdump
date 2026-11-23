//
#ifndef OIDServiceConfiguration_h
#define OIDServiceConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "OIDServiceDiscovery.h"

@class NSObject, NSURL;

@interface OIDServiceConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSURL *authorizationEndpoint;
@property (readonly, nonatomic) NSURL *tokenEndpoint;
@property (readonly, nonatomic) NSURL *issuer;
@property (readonly, nonatomic) NSURL *registrationEndpoint;
@property (readonly, nonatomic) NSURL *endSessionEndpoint;
@property (readonly, nonatomic) OIDServiceDiscovery *discoveryDocument;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithAuthorizationEndpoint:(id)endpoint tokenEndpoint:(id)endpoint issuer:(id)issuer registrationEndpoint:(id)endpoint endSessionEndpoint:(id)endpoint discoveryDocument:(id)document;
- (id)initWithAuthorizationEndpoint:(id)endpoint tokenEndpoint:(id)endpoint;
- (id)initWithAuthorizationEndpoint:(id)endpoint tokenEndpoint:(id)endpoint registrationEndpoint:(id)endpoint;
- (id)initWithAuthorizationEndpoint:(id)endpoint tokenEndpoint:(id)endpoint issuer:(id)issuer;
- (id)initWithAuthorizationEndpoint:(id)endpoint tokenEndpoint:(id)endpoint issuer:(id)issuer registrationEndpoint:(id)endpoint;
- (id)initWithAuthorizationEndpoint:(id)endpoint tokenEndpoint:(id)endpoint issuer:(id)issuer registrationEndpoint:(id)endpoint endSessionEndpoint:(id)endpoint;
- (id)initWithDiscoveryDocument:(id)document;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;

@end

#endif /* OIDServiceConfiguration_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OIDServiceDiscovery_h
#define OIDServiceDiscovery_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSObject, NSURL;

@interface OIDServiceDiscovery : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSDictionary *discoveryDictionary;
@property (readonly, nonatomic) NSURL *issuer;
@property (readonly, nonatomic) NSURL *authorizationEndpoint;
@property (readonly, nonatomic) NSURL *deviceAuthorizationEndpoint;
@property (readonly, nonatomic) NSURL *tokenEndpoint;
@property (readonly, nonatomic) NSURL *userinfoEndpoint;
@property (readonly, nonatomic) NSURL *jwksURL;
@property (readonly, nonatomic) NSURL *registrationEndpoint;
@property (readonly, nonatomic) NSURL *endSessionEndpoint;
@property (readonly, nonatomic) NSArray *scopesSupported;
@property (readonly, nonatomic) NSArray *responseTypesSupported;
@property (readonly, nonatomic) NSArray *responseModesSupported;
@property (readonly, nonatomic) NSArray *grantTypesSupported;
@property (readonly, nonatomic) NSArray *acrValuesSupported;
@property (readonly, nonatomic) NSArray *subjectTypesSupported;
@property (readonly, nonatomic) NSArray *IDTokenSigningAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *IDTokenEncryptionAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *IDTokenEncryptionEncodingValuesSupported;
@property (readonly, nonatomic) NSArray *userinfoSigningAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *userinfoEncryptionAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *userinfoEncryptionEncodingValuesSupported;
@property (readonly, nonatomic) NSArray *requestObjectSigningAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *requestObjectEncryptionAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *requestObjectEncryptionEncodingValuesSupported;
@property (readonly, nonatomic) NSArray *tokenEndpointAuthMethodsSupported;
@property (readonly, nonatomic) NSArray *tokenEndpointAuthSigningAlgorithmValuesSupported;
@property (readonly, nonatomic) NSArray *displayValuesSupported;
@property (readonly, nonatomic) NSArray *claimTypesSupported;
@property (readonly, nonatomic) NSArray *claimsSupported;
@property (readonly, nonatomic) NSURL *serviceDocumentation;
@property (readonly, nonatomic) NSArray *claimsLocalesSupported;
@property (readonly, nonatomic) NSArray *UILocalesSupported;
@property (readonly, nonatomic) _Bool claimsParameterSupported;
@property (readonly, nonatomic) _Bool requestParameterSupported;
@property (readonly, nonatomic) _Bool requestURIParameterSupported;
@property (readonly, nonatomic) _Bool requireRequestURIRegistration;
@property (readonly, nonatomic) NSURL *OPPolicyURI;
@property (readonly, nonatomic) NSURL *OPTosURI;

/* class methods */
+ (_Bool)dictionaryHasRequiredFields:(id)fields error:(id *)error;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithJSON:(id)json error:(id *)error;
- (id)initWithJSONData:(id)jsondata error:(id *)error;
- (id)initWithDictionary:(id)dictionary error:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* OIDServiceDiscovery_h */

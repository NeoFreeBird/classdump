//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OIDAuthorizationService_h
#define OIDAuthorizationService_h
@import Foundation;

#include "OIDServiceConfiguration.h"

@class NSObject;

@interface OIDAuthorizationService : NSObject

@property (readonly, nonatomic) OIDServiceConfiguration *configuration;

/* class methods */
+ (id)presentAuthorizationRequest:(id)request presentingViewController:(id)controller callback:(id /* block */)callback;
+ (id)presentAuthorizationRequest:(id)request presentingViewController:(id)controller prefersEphemeralSession:(_Bool)session callback:(id /* block */)callback;
+ (void)discoverServiceConfigurationForIssuer:(id)issuer completion:(id /* block */)completion;
+ (void)discoverServiceConfigurationForDiscoveryURL:(id)url completion:(id /* block */)completion;
+ (id)presentAuthorizationRequest:(id)request externalUserAgent:(id)agent callback:(id /* block */)callback;
+ (id)presentEndSessionRequest:(id)request externalUserAgent:(id)agent callback:(id /* block */)callback;
+ (void)performTokenRequest:(id)request callback:(id /* block */)callback;
+ (void)performTokenRequest:(id)request originalAuthorizationResponse:(id)response callback:(id /* block */)callback;
+ (void)performRegistrationRequest:(id)request completion:(id /* block */)completion;

/* instance methods */

@end

#endif /* OIDAuthorizationService_h */

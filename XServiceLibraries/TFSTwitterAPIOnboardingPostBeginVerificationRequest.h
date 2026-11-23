//
#ifndef TFSTwitterAPIOnboardingPostBeginVerificationRequest_h
#define TFSTwitterAPIOnboardingPostBeginVerificationRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIOnboardingPostBeginVerificationRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;

/* instance methods */
- (id)initWithFlowToken:(id)token email:(id)email displayName:(id)name phoneNumber:(id)number countryCode:(id)code castleToken:(id)token byVoice:(_Bool)voice context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIOnboardingPostBeginVerificationRequest_h */

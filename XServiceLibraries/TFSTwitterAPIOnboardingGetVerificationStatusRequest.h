//
#ifndef TFSTwitterAPIOnboardingGetVerificationStatusRequest_h
#define TFSTwitterAPIOnboardingGetVerificationStatusRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIOnboardingGetVerificationStatusRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;

/* instance methods */
- (id)initWithEmail:(id)email context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIOnboardingGetVerificationStatusRequest_h */

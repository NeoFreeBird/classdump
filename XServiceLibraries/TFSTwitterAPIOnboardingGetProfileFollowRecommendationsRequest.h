//
#ifndef TFSTwitterAPIOnboardingGetProfileFollowRecommendationsRequest_h
#define TFSTwitterAPIOnboardingGetProfileFollowRecommendationsRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIOnboardingGetProfileFollowRecommendationsRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;

/* instance methods */
- (id)initWithUserID:(id)id templateName:(id)name context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIOnboardingGetProfileFollowRecommendationsRequest_h */

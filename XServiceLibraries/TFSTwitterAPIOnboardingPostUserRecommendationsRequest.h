//
#ifndef TFSTwitterAPIOnboardingPostUserRecommendationsRequest_h
#define TFSTwitterAPIOnboardingPostUserRecommendationsRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIOnboardingPostUserRecommendationsRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;

/* instance methods */
- (id)initWithSubtaskID:(id)id flowToken:(id)token follows:(id)follows followedGroupIDs:(id)ids unfollowedGroupIDs:(id)ids location:(id)location context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIOnboardingPostUserRecommendationsRequest_h */

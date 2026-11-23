//
#ifndef TFSTwitterAPIOnboardingPostFetchTweetsRequest_h
#define TFSTwitterAPIOnboardingPostFetchTweetsRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIOnboardingPostFetchTweetsRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;

/* instance methods */
- (id)initWithSubtaskID:(id)id flowToken:(id)token userID:(id)id tweetActionResponses:(id)responses context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIOnboardingPostFetchTweetsRequest_h */

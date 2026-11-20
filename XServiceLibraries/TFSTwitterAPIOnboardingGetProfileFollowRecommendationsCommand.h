//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIOnboardingGetProfileFollowRecommendationsCommand_h
#define TFSTwitterAPIOnboardingGetProfileFollowRecommendationsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSNumber, NSString;

@interface TFSTwitterAPIOnboardingGetProfileFollowRecommendationsCommand : TFSTwitterAPICommandWithResponseModelBuilder {
    /* instance variables */
    NSNumber *_userID;
    NSString *_templateName;
}

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id userID:(id)id templateName:(id)name source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIOnboardingGetProfileFollowRecommendationsCommand_h */

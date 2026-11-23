//
#ifndef TFSTwitterAPIOnboardingPostUserRecommendationsCommand_h
#define TFSTwitterAPIOnboardingPostUserRecommendationsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSArray, NSString;

@interface TFSTwitterAPIOnboardingPostUserRecommendationsCommand : TFSTwitterAPICommandWithResponseModelBuilder {
    /* instance variables */
    NSString *_subtaskID;
    NSString *_flowToken;
    NSArray *_follows;
    NSArray *_followedGroupIDs;
    NSArray *_unfollowedGroupIDs;
    NSString *_location;
}

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id subtaskID:(id)id flowToken:(id)token follows:(id)follows followedGroupIDs:(id)ids unfollowedGroupIDs:(id)ids location:(id)location source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIOnboardingPostUserRecommendationsCommand_h */

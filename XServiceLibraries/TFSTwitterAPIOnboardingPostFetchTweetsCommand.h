//
#ifndef TFSTwitterAPIOnboardingPostFetchTweetsCommand_h
#define TFSTwitterAPIOnboardingPostFetchTweetsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSArray, NSNumber, NSString;

@interface TFSTwitterAPIOnboardingPostFetchTweetsCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (copy, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *subtaskID;
@property (copy, nonatomic) NSString *flowToken;
@property (copy, nonatomic) NSArray *tweetActionResponses;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id subtaskID:(id)id flowToken:(id)token userID:(id)id tweetActionResponses:(id)responses source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIOnboardingPostFetchTweetsCommand_h */

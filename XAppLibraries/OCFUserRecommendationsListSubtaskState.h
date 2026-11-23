//
#ifndef OCFUserRecommendationsListSubtaskState_h
#define OCFUserRecommendationsListSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSArray, NSDictionary;

@interface OCFUserRecommendationsListSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSArray *selectedUserRecommendations;
@property (copy, nonatomic) NSArray *impressions;
@property (copy, nonatomic) NSDictionary *lingerTimes;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFUserRecommendationsListSubtaskState_h */

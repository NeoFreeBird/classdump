//
#ifndef OCFUserRecommendationsURTSubtaskState_h
#define OCFUserRecommendationsURTSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSArray;

@interface OCFUserRecommendationsURTSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSArray *selectedUserRecommendations;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFUserRecommendationsURTSubtaskState_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

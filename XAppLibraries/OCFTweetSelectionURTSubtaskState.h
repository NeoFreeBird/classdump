//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFTweetSelectionURTSubtaskState_h
#define OCFTweetSelectionURTSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSArray;

@interface OCFTweetSelectionURTSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSArray *selectedTweetIds;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFTweetSelectionURTSubtaskState_h */

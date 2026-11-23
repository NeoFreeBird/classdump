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

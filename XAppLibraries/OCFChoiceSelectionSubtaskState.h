//
#ifndef OCFChoiceSelectionSubtaskState_h
#define OCFChoiceSelectionSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSArray, NSString;

@interface OCFChoiceSelectionSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSArray *selectedChoices;
@property (copy, nonatomic) NSString *primaryChoiceIdentifier;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFChoiceSelectionSubtaskState_h */

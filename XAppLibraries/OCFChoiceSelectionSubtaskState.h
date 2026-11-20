//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

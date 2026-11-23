//
#ifndef OCFWaitSpinnerSubtaskState_h
#define OCFWaitSpinnerSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@interface OCFWaitSpinnerSubtaskState : OCFSubtaskState

@property (nonatomic) long long waitTimeMs;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFWaitSpinnerSubtaskState_h */

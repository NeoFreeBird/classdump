//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

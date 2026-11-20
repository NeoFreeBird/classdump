//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFIdentityVerificationSubtaskState_h
#define OCFIdentityVerificationSubtaskState_h
@import Foundation;

#include "OCFSubtaskState.h"

@class NSString;

@interface OCFIdentityVerificationSubtaskState : OCFSubtaskState

@property (copy, nonatomic) NSString *code;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFIdentityVerificationSubtaskState_h */

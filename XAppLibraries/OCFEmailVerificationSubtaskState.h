//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFEmailVerificationSubtaskState_h
#define OCFEmailVerificationSubtaskState_h
@import Foundation;

#include "OCFIdentityVerificationSubtaskState.h"

@class NSString;

@interface OCFEmailVerificationSubtaskState : OCFIdentityVerificationSubtaskState

@property (copy, nonatomic) NSString *email;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFEmailVerificationSubtaskState_h */

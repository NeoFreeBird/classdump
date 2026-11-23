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

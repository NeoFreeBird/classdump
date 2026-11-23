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

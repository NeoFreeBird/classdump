//
#ifndef OCFPhoneVerificationSubtaskState_h
#define OCFPhoneVerificationSubtaskState_h
@import Foundation;

#include "OCFIdentityVerificationSubtaskState.h"

@class NSString;

@interface OCFPhoneVerificationSubtaskState : OCFIdentityVerificationSubtaskState

@property (copy, nonatomic) NSString *normalizedPhone;
@property (nonatomic) _Bool byVoice;

/* instance methods */
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFPhoneVerificationSubtaskState_h */

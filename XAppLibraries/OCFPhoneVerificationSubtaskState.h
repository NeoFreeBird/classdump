//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

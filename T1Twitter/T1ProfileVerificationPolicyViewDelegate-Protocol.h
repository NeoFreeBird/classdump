//
#ifndef T1ProfileVerificationPolicyViewDelegate_Protocol_h
#define T1ProfileVerificationPolicyViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ProfileVerificationPolicyViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)profileVerificationPolicyViewDidTapDescription:(id)description;
- (void)profileVerificationPolicyViewDidTapProfileCompletionViolation:(id)violation;
- (void)profileVerificationPolicyViewDidTapAccountSecurityViolation:(id)violation;
- (void)profileVerificationPolicyViewDidTapGotItButton:(id)button;

@end

#endif /* T1ProfileVerificationPolicyViewDelegate_Protocol_h */

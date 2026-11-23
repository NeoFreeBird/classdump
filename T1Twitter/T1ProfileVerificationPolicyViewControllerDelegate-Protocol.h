//
#ifndef T1ProfileVerificationPolicyViewControllerDelegate_Protocol_h
#define T1ProfileVerificationPolicyViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ProfileVerificationPolicyViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)profileVerificationPolicyViewControllerDidTapClose:(id)close;
- (void)profileVerificationPolicyViewControllerDidTapGotIt:(id)it;

@end

#endif /* T1ProfileVerificationPolicyViewControllerDelegate_Protocol_h */

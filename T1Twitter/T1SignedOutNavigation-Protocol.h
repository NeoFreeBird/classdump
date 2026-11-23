//
#ifndef T1SignedOutNavigation_Protocol_h
#define T1SignedOutNavigation_Protocol_h
@import Foundation;

#include "T1OnboardingFlowHost-Protocol.h"

@protocol T1SignedOutNavigation <T1OnboardingFlowHost>

@required

/* required instance methods */
- (void)showSignupFlowWithSource:(long long)source completion:(id /* block */)completion;
- (void)showSignupFlowWithSource:(long long)source completion:(id /* block */)completion;
- (void)showLoginFlowWithSource:(long long)source completion:(id /* block */)completion;
- (void)showLoginFlowWithSource:(long long)source completion:(id /* block */)completion;

@optional

@end

#endif /* T1SignedOutNavigation_Protocol_h */

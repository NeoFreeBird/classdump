//
#ifndef ONBIdentityVerificationViewControllerDelegate_Protocol_h
#define ONBIdentityVerificationViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBIdentityVerificationViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)identityVerificationViewController:(id)controller didTapNextWithCode:(id)code stateUpdater:(id /* block */)updater;
- (void)identityVerificationViewControllerDidTapSkip:(id)skip;
- (void)identityVerificationViewControllerViewDidAppear:(id)appear;
- (void)identityVerificationViewControllerViewDidDisappear:(id)disappear;
- (void)identityVerificationViewController:(id)controller pollWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* ONBIdentityVerificationViewControllerDelegate_Protocol_h */

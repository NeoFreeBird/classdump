//
#ifndef T1OnboardingContactsLiveSyncPromptPresenter_h
#define T1OnboardingContactsLiveSyncPromptPresenter_h
@import Foundation;

@class NSObject;

@interface T1OnboardingContactsLiveSyncPromptPresenter : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *addressBookService;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *scribePage;
}

/* instance methods */
- (id)initWithAddressBookService:(id)service account:(id)account scribePage:(id)page;
- (void)presentWithRequestPolicy:(id)policy presentBlock:(id /* block */)block regrantBlock:(id /* block */)block accessGranted:(id /* block */)granted accessDenied:(id /* block */)denied uploadInitiated:(id /* block */)initiated uploadCompleted:(id /* block */)completed promptViewControllerBlock:(id /* block */)block;
- (void)autoGrantWithRequestPolicy:(id)policy accessGranted:(id /* block */)granted accessDenied:(id /* block */)denied uploadInitiated:(id /* block */)initiated uploadCompleted:(id /* block */)completed;
- (id)init;

@end

#endif /* T1OnboardingContactsLiveSyncPromptPresenter_h */

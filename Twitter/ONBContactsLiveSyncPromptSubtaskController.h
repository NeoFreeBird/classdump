//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBContactsLiveSyncPromptSubtaskController_h
#define ONBContactsLiveSyncPromptSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFContactsLiveSyncPromptSubtask;

@interface ONBContactsLiveSyncPromptSubtaskController : ONBSubtaskController {
    /* instance variables */
    OCFContactsLiveSyncPromptSubtask *_subtask;
    id <ONBSubtaskControllerDelegate> _delegate;
    _Bool _uploadInProgress;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (id)subtaskData;
- (_Bool)canRestartForErrors;
- (_Bool)requiresAccountToStart;
- (void)private_presentOneStepSynchronizationPromptWithAccount:(id)account;
- (void)private_presentAlertSynchronizationPromptWithAccount:(id)account;
- (void)private_presentSynchronizationPromptWithAccount:(id)account promptViewControllerBlock:(id /* block */)block presentBlock:(id /* block */)block;
- (void)private_enableAddressBookSynchronizationWithAccount:(id)account completion:(id /* block */)completion;
- (id)private_oneStepPrePromptViewControllerWithAccount:(id)account forSubtask:(id)subtask action:(id /* block */)action;
- (id)private_alertPrePromptViewControllerWithAccount:(id)account forSubtask:(id)subtask action:(id /* block */)action;
- (id)private_componentsPrePromptViewControllerWithAccount:(id)account forSubtask:(id)subtask secondaryAccount:(_Bool)account action:(id /* block */)action;
- (id)private_subtitleTextForSecondaryAccount:(_Bool)account;
- (id)private_actionLabelForSecondaryAccount:(_Bool)account;

@end

#endif /* ONBContactsLiveSyncPromptSubtaskController_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBPermissionPromptSubtaskController_h
#define ONBPermissionPromptSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFPermissionPromptSubtask, UIViewController;

@interface ONBPermissionPromptSubtaskController : ONBSubtaskController {
    /* instance variables */
    OCFPermissionPromptSubtask *_subtask;
    long long _serviceType;
    id <ONBSubtaskControllerDelegate> _delegate;
    UIViewController *_presentedHalfCoverTray;
    _Bool _isHandlingPermissionChoice;
    _Bool _isActivatingHalfCoverLink;
    _Bool _didHandleHalfCoverUserDismiss;
    id /* block */ _cancelHalfCoverChoice;
    id /* block */ _settleOpenAuthorization;
}

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate serviceType:(long long)type;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (_Bool)canRestartForErrors;
- (void)logEventForAccount:(id)account subtask:(id)subtask action:(id)action;
- (void)private_requestOneStepAuthorizationWithAccount:(id)account;
- (void)private_requestAuthorizationWithStyle:(long long)style forceGrant:(_Bool)grant forceDecline:(_Bool)decline;
- (void)private_showPrepromptWithStyle:(long long)style okAction:(id /* block */)action cancelAction:(id /* block */)action;
- (void)private_showAlertPrepromptWithOkAction:(id /* block */)action cancelAction:(id /* block */)action;
- (void)private_showComponentsCoverPrepromptWithOkAction:(id /* block */)action cancelAction:(id /* block */)action;
- (void)private_showHalfCoverTrayWithOkAction:(id /* block */)action cancelAction:(id /* block */)action;
- (id)private_componentsCoverControllerWithOkAction:(id /* block */)action cancelAction:(id /* block */)action;
- (_Bool)private_halfCoverNeedsEmbeddedPrompt;
- (void)didActivateNavigationLink:(id)link listener:(id /* block */)listener;
- (void)private_halfCoverUserDismissAlreadyDismissing:(_Bool)dismissing;
- (_Bool)private_halfCoverLinkStaysOpen:(id)open;

@end

#endif /* ONBPermissionPromptSubtaskController_h */

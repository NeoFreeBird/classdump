//
#ifndef ONBAlertDialogSubtaskController_h
#define ONBAlertDialogSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFAlertDialogSubtask;

@interface ONBAlertDialogSubtaskController : ONBSubtaskController {
    /* instance variables */
    OCFAlertDialogSubtask *_subtask;
    id <ONBSubtaskControllerDelegate> _delegate;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;

@end

#endif /* ONBAlertDialogSubtaskController_h */

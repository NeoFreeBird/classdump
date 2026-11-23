//
#ifndef ONBMenuDialogSubtaskController_h
#define ONBMenuDialogSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFMenuDialogSubtask;

@interface ONBMenuDialogSubtaskController : ONBSubtaskController {
    /* instance variables */
    OCFMenuDialogSubtask *_subtask;
    id <ONBSubtaskControllerDelegate> _delegate;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;

@end

#endif /* ONBMenuDialogSubtaskController_h */

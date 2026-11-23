//
#ifndef ONBEndFlowSubtaskController_h
#define ONBEndFlowSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFEndFlowSubtask;

@interface ONBEndFlowSubtaskController : ONBSubtaskController {
    /* instance variables */
    OCFEndFlowSubtask *_subtask;
    id <ONBSubtaskControllerDelegate> _delegate;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (_Bool)canRestartForErrors;

@end

#endif /* ONBEndFlowSubtaskController_h */

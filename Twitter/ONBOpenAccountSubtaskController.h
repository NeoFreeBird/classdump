//
#ifndef ONBOpenAccountSubtaskController_h
#define ONBOpenAccountSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFOpenAccountSubtask;

@interface ONBOpenAccountSubtaskController : ONBSubtaskController {
    /* instance variables */
    OCFOpenAccountSubtask *_subtask;
    id <ONBSubtaskControllerDelegate> _delegate;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (id)private_setActiveAccount:(id)account;
- (_Bool)canRestartForErrors;

@end

#endif /* ONBOpenAccountSubtaskController_h */

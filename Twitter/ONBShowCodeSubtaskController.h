//
#ifndef ONBShowCodeSubtaskController_h
#define ONBShowCodeSubtaskController_h
@import Foundation;

#include "ONBShowCodeViewControllerDelegate-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFShowCodeSubtask;

@interface ONBShowCodeSubtaskController : ONBSubtaskController <ONBShowCodeViewControllerDelegate> {
    /* instance variables */
    OCFShowCodeSubtask *_subtask;
    id <ONBSubtaskControllerDelegate> _delegate;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (void)showCodeViewControllerDidTapNext:(id)next;
- (void)showCodeViewControllerDidTapSkip:(id)skip;

@end

#endif /* ONBShowCodeSubtaskController_h */

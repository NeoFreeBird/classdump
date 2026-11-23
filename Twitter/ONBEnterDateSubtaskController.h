//
#ifndef ONBEnterDateSubtaskController_h
#define ONBEnterDateSubtaskController_h
@import Foundation;

#include "ONBEnterDateViewControllerDelegate-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFEnterDateSubtask, OCFEnterDateSubtaskState;

@interface ONBEnterDateSubtaskController : ONBSubtaskController <ONBEnterDateViewControllerDelegate> {
    /* instance variables */
    OCFEnterDateSubtask *_subtask;
    OCFEnterDateSubtaskState *_state;
    id <ONBSubtaskControllerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (id)subtaskData;
- (void)enterDateViewController:(id)controller didTapNextWithDate:(id)date;
- (void)enterDateViewControllerDidTapSkip:(id)skip;

@end

#endif /* ONBEnterDateSubtaskController_h */

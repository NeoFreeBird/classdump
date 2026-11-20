//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBEnterPasswordSubtaskController_h
#define ONBEnterPasswordSubtaskController_h
@import Foundation;

#include "ONBEnterPasswordViewControllerDelegate-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFEnterPasswordSubtask, OCFEnterPasswordSubtaskState;

@interface ONBEnterPasswordSubtaskController : ONBSubtaskController <ONBEnterPasswordViewControllerDelegate> {
    /* instance variables */
    OCFEnterPasswordSubtask *_subtask;
    OCFEnterPasswordSubtaskState *_state;
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
- (void)enterPasswordViewControllerDidTapSkip:(id)skip;
- (void)enterPasswordViewController:(id)controller didTapNextWithInputText:(id)text;

@end

#endif /* ONBEnterPasswordSubtaskController_h */

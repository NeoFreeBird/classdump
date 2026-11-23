//
#ifndef ONBCheckLoggedInAccountSubtaskController_h
#define ONBCheckLoggedInAccountSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"

@class OCFCheckLoggedInAccountSubtask;

@interface ONBCheckLoggedInAccountSubtaskController : ONBSubtaskController {
    /* instance variables */
    OCFCheckLoggedInAccountSubtask *_subtask;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;

@end

#endif /* ONBCheckLoggedInAccountSubtaskController_h */

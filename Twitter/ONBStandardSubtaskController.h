//
#ifndef ONBStandardSubtaskController_h
#define ONBStandardSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFStandardSubtask;

@interface ONBStandardSubtaskController : ONBSubtaskController {
    /* instance variables */
    OCFStandardSubtask *_subtask;
    id <ONBSubtaskControllerDelegate> _delegate;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;

@end

#endif /* ONBStandardSubtaskController_h */

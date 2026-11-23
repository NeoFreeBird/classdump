//
#ifndef ONBInAppNotificationSubtaskController_h
#define ONBInAppNotificationSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFInAppNotificationSubtask;

@interface ONBInAppNotificationSubtaskController : ONBSubtaskController {
    /* instance variables */
    OCFInAppNotificationSubtask *_subtask;
    id <ONBSubtaskControllerDelegate> _delegate;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (_Bool)canRestartForErrors;

@end

#endif /* ONBInAppNotificationSubtaskController_h */

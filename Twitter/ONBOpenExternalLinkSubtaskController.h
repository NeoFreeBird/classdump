//
#ifndef ONBOpenExternalLinkSubtaskController_h
#define ONBOpenExternalLinkSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"

@class OCFOpenExternalLinkSubtask;

@interface ONBOpenExternalLinkSubtaskController : ONBSubtaskController {
    /* instance variables */
    _Bool _isRegisteredForNotifications;
    OCFOpenExternalLinkSubtask *_subtask;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)dealloc;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (_Bool)canRestartForErrors;
- (void)private_applicationDidBecomeActive:(id)active;
- (void)private_activateFailLinkIfAvailable;

@end

#endif /* ONBOpenExternalLinkSubtaskController_h */

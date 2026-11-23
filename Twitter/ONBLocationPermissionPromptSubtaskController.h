//
#ifndef ONBLocationPermissionPromptSubtaskController_h
#define ONBLocationPermissionPromptSubtaskController_h
@import Foundation;

#include "ONBPermissionPromptSubtaskController.h"

@interface ONBLocationPermissionPromptSubtaskController : ONBPermissionPromptSubtaskController

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;

@end

#endif /* ONBLocationPermissionPromptSubtaskController_h */

//
#ifndef ONBNotificationsPermissionPromptSubtaskController_h
#define ONBNotificationsPermissionPromptSubtaskController_h
@import Foundation;

#include "ONBPermissionPromptSubtaskController.h"

@interface ONBNotificationsPermissionPromptSubtaskController : ONBPermissionPromptSubtaskController

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)logEventForAccount:(id)account subtask:(id)subtask action:(id)action;
- (id)private_scribeElementForStyle:(long long)style;

@end

#endif /* ONBNotificationsPermissionPromptSubtaskController_h */

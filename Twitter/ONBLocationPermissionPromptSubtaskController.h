//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

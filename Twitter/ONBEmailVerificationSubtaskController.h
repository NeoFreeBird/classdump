//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBEmailVerificationSubtaskController_h
#define ONBEmailVerificationSubtaskController_h
@import Foundation;

#include "ONBEmailVerificationProvider.h"
#include "ONBIdentityVerificationSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFEmailVerificationSubtaskState;

@interface ONBEmailVerificationSubtaskController : ONBIdentityVerificationSubtaskController {
    /* instance variables */
    id <ONBSubtaskControllerDelegate> _delegate;
    OCFEmailVerificationSubtaskState *_state;
    ONBEmailVerificationProvider *_provider;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)didActivateNavigationLink:(id)link listener:(id /* block */)listener;

@end

#endif /* ONBEmailVerificationSubtaskController_h */

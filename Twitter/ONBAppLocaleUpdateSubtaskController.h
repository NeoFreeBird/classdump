//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBAppLocaleUpdateSubtaskController_h
#define ONBAppLocaleUpdateSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFAppLocaleUpdateSubtask;

@interface ONBAppLocaleUpdateSubtaskController : ONBSubtaskController {
    /* instance variables */
    OCFAppLocaleUpdateSubtask *_subtask;
    id <ONBSubtaskControllerDelegate> _delegate;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;

@end

#endif /* ONBAppLocaleUpdateSubtaskController_h */

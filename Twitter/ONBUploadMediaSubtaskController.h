//
#ifndef ONBUploadMediaSubtaskController_h
#define ONBUploadMediaSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFUploadMediaSubtask;

@interface ONBUploadMediaSubtaskController : ONBSubtaskController {
    /* instance variables */
    OCFUploadMediaSubtask *_subtask;
    NSString *_flowToken;
    id <ONBSubtaskControllerDelegate> _delegate;
}

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;

@end

#endif /* ONBUploadMediaSubtaskController_h */

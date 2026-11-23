//
#ifndef ONBDeregisterDeviceSubtaskController_h
#define ONBDeregisterDeviceSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class OCFDeregisterDeviceSubtask, OCFDeregisterDeviceSubtaskState;

@interface ONBDeregisterDeviceSubtaskController : ONBSubtaskController

@property (readonly, nonatomic) OCFDeregisterDeviceSubtask *subtask;
@property (readonly, nonatomic) OCFDeregisterDeviceSubtaskState *state;
@property (readonly, weak, nonatomic) id <ONBSubtaskControllerDelegate> delegate;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (id)subtaskData;

@end

#endif /* ONBDeregisterDeviceSubtaskController_h */

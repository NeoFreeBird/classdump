//
#ifndef ONBWaitSpinnerSubtaskController_h
#define ONBWaitSpinnerSubtaskController_h
@import Foundation;

#include "OCFWaitable-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSDate, NSString, OCFWaitSpinnerSubtask, OCFWaitSpinnerSubtaskState, TFNHUD, TFSTimer;

@interface ONBWaitSpinnerSubtaskController : ONBSubtaskController <OCFWaitable> {
    /* instance variables */
    NSDate *_startTime;
    TFNHUD *_hud;
    OCFWaitSpinnerSubtask *_subtask;
    OCFWaitSpinnerSubtaskState *_state;
    TFSTimer *_initialTimer;
    TFSTimer *_extensionTimer;
    id <ONBSubtaskControllerDelegate> _delegate;
    _Bool _shouldOverrideTimer;
    NSString *_currentMessage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (_Bool)canRestartForErrors;
- (id)_t1_spinnerMessage;
- (void)_t1_timerFired;
- (void)_t1_extensionTimerFired;
- (void)_t1_update;
- (void)_t1_showHud;
- (long long)_t1_millisecondsSinceStart;
- (_Bool)_t1_shouldExtend;
- (_Bool)canWaitWithMessage:(id)message;
- (void)waitWithMessage:(id)message;
- (void)stopWaiting;

@end

#endif /* ONBWaitSpinnerSubtaskController_h */

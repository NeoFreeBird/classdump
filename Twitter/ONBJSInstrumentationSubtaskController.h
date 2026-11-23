//
#ifndef ONBJSInstrumentationSubtaskController_h
#define ONBJSInstrumentationSubtaskController_h
@import Foundation;

#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"
#include "T1UIInstrumentationWebViewControllerDelegate-Protocol.h"

@class NSDate, NSString, OCFJSInstrumentationSubtask, OCFJSInstrumentationSubtaskState, T1UIInstrumentationWebViewController, TFNHUD, TFSTimer, UIWindow;

@interface ONBJSInstrumentationSubtaskController : ONBSubtaskController <T1UIInstrumentationWebViewControllerDelegate> {
    /* instance variables */
    NSDate *_startTime;
    TFSTimer *_timer;
    T1UIInstrumentationWebViewController *_instrumentationViewController;
    TFNHUD *_hud;
    UIWindow *_hudWindow;
    OCFJSInstrumentationSubtask *_subtask;
    OCFJSInstrumentationSubtaskState *_state;
    id <ONBSubtaskControllerDelegate> _delegate;
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
- (void)instrumentationWebViewController:(id)controller didFinishLoadingWithResult:(id)result;
- (void)private_createInstrumentationHUD;
- (void)private_stopWaiting;
- (void)private_timerFired;

@end

#endif /* ONBJSInstrumentationSubtaskController_h */

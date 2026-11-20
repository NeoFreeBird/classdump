//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNAlertWindow_h
#define TFNAlertWindow_h
@import Foundation;

#include "TFNAlertViewControllerDelegate-Protocol.h"

@class NSArray, NSString, UIView, UIWindow;
@protocol TFNDismissableView;

@interface TFNAlertWindow : UIWindow <TFNAlertViewControllerDelegate> {
    /* instance variables */
    UIView<TFNDismissableView> *_alertView;
    UIWindow *_mainWindow;
    UIWindow *_retainedSelf;
    NSString *_title;
    NSString *_message;
    NSArray *_items;
    id /* block */ _completionBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAlertView:(id)view;
- (void)show;
- (void)showWithCompletion:(id /* block */)completion;
- (void)dismiss;
- (void)_keyboardWillShow:(id)show;
- (void)alertViewControllerDidAnimateOut:(id)out;

@end

#endif /* TFNAlertWindow_h */

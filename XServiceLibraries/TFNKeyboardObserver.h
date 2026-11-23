//
#ifndef TFNKeyboardObserver_h
#define TFNKeyboardObserver_h
@import Foundation;

#include "TFNKeyboardObserverKeyboardState.h"

@class NSObject, UIResponder;

@interface TFNKeyboardObserver : NSObject

@property (nonatomic) _Bool observing;
@property (retain, nonatomic) TFNKeyboardObserverKeyboardState *dockedKeyboardState;
@property (retain, nonatomic) TFNKeyboardObserverKeyboardState *lastDockedKeyboardState;
@property (weak, nonatomic) UIResponder *lastFirstResponderOnEnterBackground;
@property (readonly, nonatomic) _Bool keyboardDocked;
@property (readonly, nonatomic) _Bool keyboardLocal;

/* class methods */
+ (id)sharedObserver;

/* instance methods */
- (void)dealloc;
- (id)description;
- (void)beginObserving;
- (_Bool)isKeyboardDocked;
- (_Bool)isKeyboardLocal;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keyboardFrameInView:(id)view;
- (double)keyboardHeightFromBottomInView:(id)view;
- (double)lastDockedKeyboardHeightFromBottomInView:(id)view;
- (void)_tfn_notification_applicationDidEnterBackground:(id)background;
- (void)_tfn_notification_applicationWillEnterForeground:(id)foreground;
- (void)_tfn_notification_keyboardWillShow:(id)show;
- (void)_tfn_notification_keyboardWillHide:(id)hide;
- (void)_tfn_notification_keyboardWillChangeFrame:(id)frame;
- (void)_tfn_notification_textInputDidEndEditing:(id)editing;
- (_Bool)isObserving;

@end

#endif /* TFNKeyboardObserver_h */

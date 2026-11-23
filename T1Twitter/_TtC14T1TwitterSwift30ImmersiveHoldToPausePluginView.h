//
#ifndef _TtC14T1TwitterSwift30ImmersiveHoldToPausePluginView_h
#define _TtC14T1TwitterSwift30ImmersiveHoldToPausePluginView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, UIView, _$sSo29TFNLongPressGestureRecognizerCSg;

@interface T1TwitterSwift.ImmersiveHoldToPausePluginView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? viewModel;
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardState ? state;
    __C.TFNLongPressGestureRecognizer? $__lazy_storage_$_longPressRecognizer;
    Swift.Bool isCancellingOtherGestures;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)handleLongPress:(id)press;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift30ImmersiveHoldToPausePluginView_h */

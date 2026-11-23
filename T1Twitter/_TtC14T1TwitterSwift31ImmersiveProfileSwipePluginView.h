//
#ifndef _TtC14T1TwitterSwift31ImmersiveProfileSwipePluginView_h
#define _TtC14T1TwitterSwift31ImmersiveProfileSwipePluginView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ImmersiveCardState, T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, UIView, _$sSo16UIViewControllerCSg, _$sSo22UIPanGestureRecognizerCSg;

@interface T1TwitterSwift.ImmersiveProfileSwipePluginView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? viewModel;
    T1TwitterSwift.ImmersiveCardState state;
    __C.UIViewController? interactiveProfileViewController;
    Swift.Bool isProfilePanActive;
    __C.UIPanGestureRecognizer? $__lazy_storage_$_panRecognizer;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)handlePan:(id)pan;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift31ImmersiveProfileSwipePluginView_h */

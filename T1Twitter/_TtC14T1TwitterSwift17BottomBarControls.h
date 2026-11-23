//
#ifndef _TtC14T1TwitterSwift17BottomBarControls_h
#define _TtC14T1TwitterSwift17BottomBarControls_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ImmersivePluginViewDelegate ?, T1TwitterSwift.VideoControlsView, UIView, _$sSo22UIPanGestureRecognizerCSg, _$sSo28UILongPressGestureRecognizerCSg, _$sSo6UIViewCSg;

@interface T1TwitterSwift.BottomBarControls : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    Swift.Bool withVideoExtensionEffect;
    T1TwitterSwift.VideoControlsView videoControls;
    __C.UIPanGestureRecognizer? $__lazy_storage_$_videoScrubPanGesture;
    __C.UILongPressGestureRecognizer? $__lazy_storage_$_videoScrubLongPressGesture;
    __C.UIView? $__lazy_storage_$_panningIndicatorLine;
    __C.UIView? $__lazy_storage_$_mainContainerView;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)videoScrubHandlerWithGestureRecognizer:(id)recognizer;

@end

#endif /* _TtC14T1TwitterSwift17BottomBarControls_h */

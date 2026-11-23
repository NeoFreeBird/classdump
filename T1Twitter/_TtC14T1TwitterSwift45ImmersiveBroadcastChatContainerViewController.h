//
#ifndef _TtC14T1TwitterSwift45ImmersiveBroadcastChatContainerViewController_h
#define _TtC14T1TwitterSwift45ImmersiveBroadcastChatContainerViewController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ImmersiveBroadcastChatContainerViewControllerDelegate ?, T1TwitterSwift.ImmersiveBroadcastChatHostViewController, TFNViewController, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSo22UIPanGestureRecognizerCSg, _$sSo22UITapGestureRecognizerCSg, __C.CGPoint ?;

@interface T1TwitterSwift.ImmersiveBroadcastChatContainerViewController : TFNViewController <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveBroadcastChatHostViewController hostViewController;
    __C.UITapGestureRecognizer? tapGesture;
    __C.UIPanGestureRecognizer? panGesture;
    __C.CGPoint ? panTranslation;
    __C.CGPoint ? panStartAnchorPoint;
    Swift.Bool stickToTop;
    T1TwitterSwift.ImmersiveBroadcastChatContainerViewControllerDelegate ? delegate;
    Swift.Bool isFullscreenEnabled;
    nominal type descriptor for CoreGraphics.CGFloat bottomInset;
    nominal type descriptor for CoreGraphics.CGFloat ? midPoint;
    nominal type descriptor for CoreGraphics.CGFloat opacity;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)handleTap:(id)tap;
- (void)handlePan:(id)pan;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift45ImmersiveBroadcastChatContainerViewController_h */

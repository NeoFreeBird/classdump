//
#ifndef _TtC9GlassDock22DockCapsuleInteraction_h
#define _TtC9GlassDock22DockCapsuleInteraction_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class GlassDock.DockCapsuleInteraction.PanAxis, GlassDock.DockCapsuleInteraction.Phase, GlassDock.DockPressFeedback ?, GlassDock.DockTapGestureRecognizer ?, NSObject, Swift.Bool, _$sSbyc, _$sSo22UIPanGestureRecognizerCSg, _$sSo28UILongPressGestureRecognizerCSg, _$sSo6UIViewCSgXw, _$syycSg;

@interface GlassDock.DockCapsuleInteraction : NSObject <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? onOpen;
    (() -> ())? onClose;
    (() -> ())? onSwipeOff;
    (() -> ())? onFeaturedRequest;
    (() -> ())? onFeaturedEnd;
    Swift.Bool isDismissEnabled;
    Swift.Bool isSwipeOffEnabled;
    Swift.Bool allowsFeaturing;
    Swift.Bool isFeaturable;
    Swift.Bool isFeaturedDock;
    GlassDock.DockCapsuleInteraction.Phase phase;
    weak __C.UIView? view;
    weak __C.UIView? slidingView;
    () -> Swift.Bool reducesMotion;
    GlassDock.DockCapsuleInteraction.PanAxis panAxis;
    GlassDock.DockPressFeedback ? feedback;
    GlassDock.DockTapGestureRecognizer ? $__lazy_storage_$_tapGesture;
    __C.UIPanGestureRecognizer? $__lazy_storage_$_panGesture;
    __C.UILongPressGestureRecognizer? $__lazy_storage_$_longPressGesture;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)handleTap;
- (void)handleLongPress:(id)press;
- (void)handlePan:(id)pan;
- (id)init;

@end

#endif /* _TtC9GlassDock22DockCapsuleInteraction_h */

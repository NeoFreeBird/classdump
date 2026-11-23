//
#ifndef _TtC13XDesignSystem29ListRowSwipeActionsController_h
#define _TtC13XDesignSystem29ListRowSwipeActionsController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, _$s12CoreGraphics7CGFloatVMn, _$sSaySo8UIButtonCG, _$sSo15UITableViewCellCXo, _$sSo22UIPanGestureRecognizerCSg, _$sSo22UIViewPropertyAnimatorCSg, _$sSo6UIViewC, _$sSo6UIViewCXo, _$syycSg;

@interface XDesignSystem.ListRowSwipeActionsController : NSObject <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? onInteractionBegan;
    unowned __C.UITableViewCell cell;
    unowned __C.UIView slidingView;
    __C.UIView rail;
    [__C.UIButton] buttons;
    nominal type descriptor for CoreGraphics.CGFloat offset;
    nominal type descriptor for CoreGraphics.CGFloat panStartOffset;
    __C.UIViewPropertyAnimator? animator;
    __C.UIPanGestureRecognizer? panIfLoaded;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)handlePan:(id)pan;
- (id)init;

@end

#endif /* _TtC13XDesignSystem29ListRowSwipeActionsController_h */

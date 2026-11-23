//
#ifndef _TtC13XDesignSystem29TooltipPresentationController_h
#define _TtC13XDesignSystem29TooltipPresentationController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, XDesignSystem.Tooltip ?, XDesignSystem.TooltipAnimator, XDesignSystem.TooltipOverlayView ?, _$s10Foundation21NSKeyValueObservationCMn ?, _$s12CoreGraphics7CGFloatVMn ?, _$sScCyyt _$ss5NeverOMn ?, _$sSo22UITapGestureRecognizerCSg, _$sSo7NSTimerCSg, __C.CGPoint, __C.CGRect;

@interface XDesignSystem.TooltipPresentationController : NSObject <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    XDesignSystem.Tooltip ? presentedTooltip;
    XDesignSystem.TooltipOverlayView ? overlayView;
    __C.NSTimer? dismissTimer;
    nominal type descriptor for Foundation.NSKeyValueObservation ? scrollObservation;
    XDesignSystem.TooltipAnimator animator;
    Swift.CheckedContinuation empty-list () nominal type descriptor for Swift.Never ? dismissContinuation;
    __C.CGPoint scrollBaseOffset;
    __C.CGRect tooltipRestingFrame;
    nominal type descriptor for CoreGraphics.CGFloat ? scrollPinTolerance;
    __C.UITapGestureRecognizer? outsideTapGesture;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)handleOutsideTap;
- (id)init;

@end

#endif /* _TtC13XDesignSystem29TooltipPresentationController_h */

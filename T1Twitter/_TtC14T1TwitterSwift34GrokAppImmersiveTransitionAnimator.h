//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift34GrokAppImmersiveTransitionAnimator_h
#define _TtC14T1TwitterSwift34GrokAppImmersiveTransitionAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSObject, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSd, _$sSo12CAShapeLayerCSgXw, _$sSo13CADisplayLinkCSg, _$sSo22UIViewPropertyAnimatorCSg, _$sSo6UIViewCSg, _$sSo6UIViewCSgXw, _$sSo6UIViewCSgyc, _$sSo7CALayerCSgXw, _$sSu, __C.CGPoint, __C.CGRect;

@interface T1TwitterSwift.GrokAppImmersiveTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> { // (Swift)
    /* instance variables */
    () -> __C.UIView? sourceViewProvider;
    weak __C.UIView? sourceView;
    nominal type descriptor for CoreGraphics.CGFloat ? hiddenSourceViewAlpha;
    Swift.Bool dismissing;
    Swift.Bool isAnimating;
    Swift.Bool isDismissingToSource;
    __C.UIViewPropertyAnimator? presentAnimator;
    __C.UIView? morphBackgroundView;
    __C.CADisplayLink? morphMaskDisplayLink;
    weak __C.CAShapeLayer? morphMaskLayer;
    weak __C.CALayer? morphMaskHostLayer;
    Swift.Double morphMaskStartTime;
    __C.CGRect morphMaskImmersiveRect;
    nominal type descriptor for CoreGraphics.CGFloat morphMaskImmersiveRadius;
    __C.CGRect morphMaskSourceRect;
    nominal type descriptor for CoreGraphics.CGFloat morphMaskSourceRadius;
    Swift.UInt morphMaskSourceCornerMask;
    nominal type descriptor for CoreGraphics.CGFloat morphMaskSourceScale;
    __C.CGPoint morphMaskSourceCenter;
    __C.CGPoint morphMaskImmersiveCenter;
    Swift.Bool morphMaskScaleKeyedRect;
}

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (void)dealloc;
- (void)stepMorphMask;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift34GrokAppImmersiveTransitionAnimator_h */

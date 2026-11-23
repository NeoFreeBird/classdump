//
#ifndef UIViewController_TFNNavigationControllerTransitionAnimator_h
#define UIViewController_TFNNavigationControllerTransitionAnimator_h
@import Foundation;

#include "TFNNavigationController.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIColor, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, UIScreenEdgePanGestureRecognizer, UIView;

@interface UIViewController (TFNNavigationControllerTransitionAnimator)

/* instance methods */
- (_Bool)tfn_supportsInteractivePops;
- (void)setTfn_supportsInteractivePops:(_Bool)pops;
- (_Bool)tfn_supportsInteractivePopsFromScreenEdgeOnly;
- (void)setTfn_supportsInteractivePopsFromScreenEdgeOnly:(_Bool)only;
- (_Bool)tfn_prefersFullSlideNavigationTransition;
- (void)setTfn_prefersFullSlideNavigationTransition:(_Bool)transition;
- (_Bool)tfn_shouldBeginInteractivePopAtLocation:(struct CGPoint { double x0; double x1; })location;

@end

#endif /* UIViewController_TFNNavigationControllerTransitionAnimator_h */

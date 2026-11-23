//
#ifndef _TtC11XNavigation23ModalTransitionAnimator_h
#define _TtC11XNavigation23ModalTransitionAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, XNavigation.ModalTransition, XNavigation.ModalTransitionAnimator.Operation, _$sSo22UIViewPropertyAnimatorCSg;

@interface XNavigation.ModalTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> { // (Swift)
    /* instance variables */
    XNavigation.ModalTransition transition;
    XNavigation.ModalTransitionAnimator.Operation operation;
    __C.UIViewPropertyAnimator? runningAnimator;
}

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (id)interruptibleAnimatorForTransition:(id)transition;
- (void)animationEnded:(_Bool)ended;
- (id)init;

@end

#endif /* _TtC11XNavigation23ModalTransitionAnimator_h */

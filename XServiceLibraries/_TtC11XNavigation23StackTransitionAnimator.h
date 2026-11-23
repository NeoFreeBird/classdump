//
#ifndef _TtC11XNavigation23StackTransitionAnimator_h
#define _TtC11XNavigation23StackTransitionAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, XNavigation.StackTransition, XNavigation.StackTransition.InteractiveDrag ?, XNavigation.StackTransition.Operation, _$sSo22UIViewPropertyAnimatorCSg;

@interface XNavigation.StackTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> { // (Swift)
    /* instance variables */
    XNavigation.StackTransition transition;
    XNavigation.StackTransition.Operation operation;
    __C.UIViewPropertyAnimator? runningAnimator;
    XNavigation.StackTransition.InteractiveDrag ? interactiveDrag;
}

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (id)interruptibleAnimatorForTransition:(id)transition;
- (void)animationEnded:(_Bool)ended;
- (id)init;

@end

#endif /* _TtC11XNavigation23StackTransitionAnimator_h */

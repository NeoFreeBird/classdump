//
#ifndef _TtC12XPhotoEditor25CollageTransitionAnimator_h
#define _TtC12XPhotoEditor25CollageTransitionAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, Swift.Bool;

@interface XPhotoEditor.CollageTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> { // (Swift)
    /* instance variables */
    Swift.Bool presenting;
}

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (id)init;

@end

#endif /* _TtC12XPhotoEditor25CollageTransitionAnimator_h */

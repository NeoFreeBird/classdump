//
#ifndef _TtC12XPhotoEditor25FramingTransitionAnimator_h
#define _TtC12XPhotoEditor25FramingTransitionAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, Swift.Bool;

@interface XPhotoEditor.FramingTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> { // (Swift)
    /* instance variables */
    Swift.Bool presenting;
}

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (id)init;

@end

#endif /* _TtC12XPhotoEditor25FramingTransitionAnimator_h */

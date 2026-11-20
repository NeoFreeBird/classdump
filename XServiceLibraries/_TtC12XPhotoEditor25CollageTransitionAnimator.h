//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

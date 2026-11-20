//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSSearchPushTransitionAnimator_h
#define TTSSearchPushTransitionAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, NSString, TFNNavigationController;

@interface TTSSearchPushTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    /* instance variables */
    TFNNavigationController *_navigationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNavigationController:(id)controller;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;

@end

#endif /* TTSSearchPushTransitionAnimator_h */

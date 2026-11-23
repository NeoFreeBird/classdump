//
#ifndef TTSSearchPopTransitionAnimator_h
#define TTSSearchPopTransitionAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, NSString;

@interface TTSSearchPopTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;

@end

#endif /* TTSSearchPopTransitionAnimator_h */

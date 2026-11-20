//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

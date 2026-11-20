//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewControllerAnimatedTransitioning_Protocol_h
#define UIViewControllerAnimatedTransitioning_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIViewControllerAnimatedTransitioning <NSObject>

@required

/* required instance methods */
- (double)transitionDuration:(id)duration;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (void)animateTransition:(id)transition;

@optional

/* optional instance methods */
- (id)interruptibleAnimatorForTransition:(id)transition;
- (id)interruptibleAnimatorForTransition:(id)transition;
- (void)animationEnded:(_Bool)ended;

@end

#endif /* UIViewControllerAnimatedTransitioning_Protocol_h */

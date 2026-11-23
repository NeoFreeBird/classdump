//
#ifndef TPXSpringAnimator_h
#define TPXSpringAnimator_h
@import Foundation;

#include "TPXAnimator.h"
#include "TPXSpringSolver.h"

@interface TPXSpringAnimator : TPXAnimator

@property (readonly, nonatomic) TPXSpringSolver *spring;

/* instance methods */
- (id)init;
- (_Bool)animationShouldComplete;
- (void)updateAnimation;

@end

#endif /* TPXSpringAnimator_h */

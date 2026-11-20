//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

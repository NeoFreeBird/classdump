//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TPXDecayAnimator_h
#define TPXDecayAnimator_h
@import Foundation;

#include "TPXAnimator.h"
#include "TPXDecaySolver.h"

@interface TPXDecayAnimator : TPXAnimator

@property (readonly, nonatomic) TPXDecaySolver *decay;

/* instance methods */
- (id)init;
- (_Bool)animationShouldComplete;
- (void)updateAnimation;

@end

#endif /* TPXDecayAnimator_h */

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

//
#ifndef TPXSpringAnimator2D_h
#define TPXSpringAnimator2D_h
@import Foundation;

#include "TPXAnimator.h"
#include "TPXSpringAnimation2DObserver-Protocol.h"
#include "TPXSpringSolver.h"

@interface TPXSpringAnimator2D : TPXAnimator

@property (readonly, nonatomic) TPXSpringSolver *springX;
@property (readonly, nonatomic) TPXSpringSolver *springY;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) struct CGPoint { double x0; double x1; } velocity;
@property (nonatomic) struct CGPoint { double x0; double x1; } springPosition;
@property (weak, nonatomic) id <TPXSpringAnimation2DObserver> delegate;

/* instance methods */
- (id)init;
- (_Bool)animationShouldComplete;
- (void)updateAnimation;
- (void)notifySpringXStabilized;
- (void)notifySpringYStabilized;

@end

#endif /* TPXSpringAnimator2D_h */

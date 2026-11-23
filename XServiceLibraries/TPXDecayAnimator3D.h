//
#ifndef TPXDecayAnimator3D_h
#define TPXDecayAnimator3D_h
@import Foundation;

#include "TPXAnimator.h"
#include "TPXDecaySolver.h"

@protocol TPXDecayAnimation3DObserver;

@interface TPXDecayAnimator3D : TPXAnimator

@property (readonly, nonatomic) TPXDecaySolver *decayX;
@property (readonly, nonatomic) TPXDecaySolver *decayY;
@property (readonly, nonatomic) TPXDecaySolver *decayZ;
@property (nonatomic) struct TPXPoint3D { double x0; double x1; double x2; } position;
@property (nonatomic) struct TPXPoint3D { double x0; double x1; double x2; } velocity;
@property (weak, nonatomic) id <TPXDecayAnimation3DObserver> delegate;

/* instance methods */
- (id)init;
- (_Bool)animationShouldComplete;
- (void)updateAnimation;
- (void)notifyDecayXStabilized;
- (void)notifyDecayYStabilized;
- (void)notifyDecayZStabilized;

@end

#endif /* TPXDecayAnimator3D_h */

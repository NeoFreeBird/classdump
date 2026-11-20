//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TPXDecayAnimator2D_h
#define TPXDecayAnimator2D_h
@import Foundation;

#include "TPXAnimator.h"
#include "TPXDecayAnimation2DObserver-Protocol.h"
#include "TPXDecaySolver.h"

@interface TPXDecayAnimator2D : TPXAnimator

@property (readonly, nonatomic) TPXDecaySolver *decayX;
@property (readonly, nonatomic) TPXDecaySolver *decayY;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) struct CGPoint { double x0; double x1; } velocity;
@property (weak, nonatomic) id <TPXDecayAnimation2DObserver> delegate;

/* instance methods */
- (id)init;
- (_Bool)animationShouldComplete;
- (void)updateAnimation;
- (void)notifyDecayXStabilized;
- (void)notifyDecayYStabilized;

@end

#endif /* TPXDecayAnimator2D_h */

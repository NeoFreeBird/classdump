//
#ifndef _TtC6Lottie18BaseAnimationLayer_h
#define _TtC6Lottie18BaseAnimationLayer_h
@import Foundation;

@class CALayer;

@interface Lottie.BaseAnimationLayer : CALayer // (Swift)

/* instance methods */
- (void)layoutSublayers;
- (id)init;
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC6Lottie18BaseAnimationLayer_h */

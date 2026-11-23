//
#ifndef TFNAnimatedPathForBoundsLayer_h
#define TFNAnimatedPathForBoundsLayer_h
@import Foundation;

@class CALayer, CAShapeLayer;

@interface TFNAnimatedPathForBoundsLayer : CALayer

@property (readonly, nonatomic) CAShapeLayer *maskShapeLayer;
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;

/* instance methods */
- (id)init;
- (id)pathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)updatePathAnimated:(_Bool)animated;
- (void)layoutSublayers;
- (void)addAnimation:(id)animation forKey:(id)key;
- (void)removeAnimationForKey:(id)key;

@end

#endif /* TFNAnimatedPathForBoundsLayer_h */

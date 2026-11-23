//
#ifndef T1LiveEventVideoLoadingView_h
#define T1LiveEventVideoLoadingView_h
@import Foundation;

#include "T1LiveEventVideoLoadingViewDelegate-Protocol.h"

@class CAAnimation, CALayer, CAShapeLayer, TFNButton, UIView;

@interface T1LiveEventVideoLoadingView : UIView

@property (retain, nonatomic) CALayer *containerLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) TFNButton *playButton;
@property (retain, nonatomic) CAAnimation *progressAnimation;
@property (nonatomic) double progress;
@property (nonatomic) _Bool showsPlayButton;
@property (weak, nonatomic) id <T1LiveEventVideoLoadingViewDelegate> delegate;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithDefaultSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSublayersOfLayer:(id)layer;
- (id)actionForLayer:(id)layer forKey:(id)key;
- (void)pauseAnimation;
- (void)resumeAnimationWithCompletionBlock:(id /* block */)block;
- (void)_t1_setupCircleLayers;
- (void)_t1_updateCirclePaths;
- (struct CGPath *)_t1_circlePath;
- (struct CGPoint { double x0; double x1; })_t1_arcCenterPoint;
- (double)_t1_radius;
- (void)_t1_updatePlayButton;
- (void)_t1_playButtonTapped:(id)tapped;
- (struct CGSize { double x0; double x1; })_t1_buttonImageSize;

@end

#endif /* T1LiveEventVideoLoadingView_h */

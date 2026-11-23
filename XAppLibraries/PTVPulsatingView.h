//
#ifndef PTVPulsatingView_h
#define PTVPulsatingView_h
@import Foundation;

@class CAShapeLayer, UIView;

@interface PTVPulsatingView : UIView {
    /* instance variables */
    _Bool _isAnimating;
    CAShapeLayer *_pulseCircle;
}

@property (nonatomic) double startingWidth;
@property (nonatomic) _Bool shouldAnimate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)removeFromSuperview;
- (void)didMoveToWindow;
- (void)updateAnimationsIfNeeded;
- (void)startAnimating;
- (void)stopAnimating;
- (void)fireAnimation;
- (void)removeAllAnimations;
- (void)addPulseAnimationsWithInitialPath:(id)path endPath:(id)path;

@end

#endif /* PTVPulsatingView_h */

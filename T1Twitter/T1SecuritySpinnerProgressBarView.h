//
#ifndef T1SecuritySpinnerProgressBarView_h
#define T1SecuritySpinnerProgressBarView_h
@import Foundation;

@class CABasicAnimation, CAShapeLayer, UIColor, UIView;

@interface T1SecuritySpinnerProgressBarView : UIView

@property (retain, nonatomic) CAShapeLayer *arcLayer;
@property (retain, nonatomic) CABasicAnimation *strokeInAnimation;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double strokeWidth;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setSpinnerProgress:(int)progress;
- (void)resetAnimeProgress;
- (void)_t1_addStrokeInAnimation;

@end

#endif /* T1SecuritySpinnerProgressBarView_h */

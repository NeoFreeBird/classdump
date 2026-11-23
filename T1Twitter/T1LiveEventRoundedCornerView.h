//
#ifndef T1LiveEventRoundedCornerView_h
#define T1LiveEventRoundedCornerView_h
@import Foundation;

@class CAShapeLayer, UIColor, UIView;

@interface T1LiveEventRoundedCornerView : UIView

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct { double x0; double x1; double x2; double x3; } cornerRadius;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)_t1_updatePath;

@end

#endif /* T1LiveEventRoundedCornerView_h */

//
#ifndef T1CurvedLine_h
#define T1CurvedLine_h
@import Foundation;

@class UIBezierPath, UIColor, UIView;

@interface T1CurvedLine : UIView

@property (retain, nonatomic) UIBezierPath *path;
@property (readonly, nonatomic) double curveRadius;
@property (readonly, nonatomic) double lineWidth;
@property (readonly, nonatomic) int lineCapStyle;
@property (readonly, nonatomic) UIColor *strokeColor;

/* instance methods */
- (id)initWithCurveRadius:(double)radius lineWidth:(double)width lineCapStyle:(int)style strokeColor:(id)color;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_t1_regeneratePath;

@end

#endif /* T1CurvedLine_h */

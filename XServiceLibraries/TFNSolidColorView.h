//
#ifndef TFNSolidColorView_h
#define TFNSolidColorView_h
@import Foundation;

@class UIColor, UIView;

@interface TFNSolidColorView : UIView

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double cornerRadius;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithColor:(id)color;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* TFNSolidColorView_h */

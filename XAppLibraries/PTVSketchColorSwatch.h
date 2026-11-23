//
#ifndef PTVSketchColorSwatch_h
#define PTVSketchColorSwatch_h
@import Foundation;

@class CALayer, NSString, UIColor, UIControl;

@interface PTVSketchColorSwatch : UIControl

@property (retain, nonatomic) CALayer *circleLayer;
@property (retain, nonatomic) CALayer *iconImageLayer;
@property (nonatomic) _Bool chosen;
@property (retain, nonatomic) UIColor *swatchColor;
@property (retain, nonatomic) NSString *iconImageName;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)commonInitializer;
- (void)didTapButton:(id)button;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

#endif /* PTVSketchColorSwatch_h */

//
#ifndef PTVRoundedButton_h
#define PTVRoundedButton_h
@import Foundation;

@class UIButton, UIColor;

@interface PTVRoundedButton : UIButton

@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double imageTitlePadding;
@property (nonatomic) double titleTopOffset;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)setBorderColor:(id)color andWidth:(double)width;
- (void)setBackgroundColor:(id)color forState:(unsigned long long)state;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForTitle;

@end

#endif /* PTVRoundedButton_h */

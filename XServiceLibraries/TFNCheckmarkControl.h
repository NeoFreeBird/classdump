//
#ifndef TFNCheckmarkControl_h
#define TFNCheckmarkControl_h
@import Foundation;

@class UIColor, UIControl, UIImageView;

@interface TFNCheckmarkControl : UIControl

@property (readonly, nonatomic) UIImageView *checkmarkView;
@property (readonly, nonatomic) _Bool squared;
@property (readonly, nonatomic) UIColor *color;
@property (nonatomic) _Bool checked;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForControl;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame configuration:(id)configuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithConfiguration:(id)configuration;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_tfn_action_didTouchUpInside:(id)inside;
- (void)toggle;
- (void)setEnabled:(_Bool)enabled;
- (void)_tfn_main_updateImage;
- (id)accessibilityValue;
- (_Bool)isChecked;
- (_Bool)isSquared;

@end

#endif /* TFNCheckmarkControl_h */

//
#ifndef TAVSlider_h
#define TAVSlider_h
@import Foundation;

@class UIColor, UISlider;

@interface TAVSlider : UISlider

@property (copy, nonatomic) UIColor *trackActiveColor;
@property (copy, nonatomic) UIColor *trackInactiveColor;

/* class methods */
+ (id)private_defaultActiveTrackColor;
+ (id)private_defaultInactiveTrackColor;
+ (id)private_thumbImageWithColor:(id)color diameter:(double)diameter shadowOffset:(struct CGSize { double x0; double x1; })offset shadowBlurRadius:(double)radius shadowColor:(id)color;
+ (id)private_trackImageWithColor:(id)color height:(double)height horizontalPadding:(double)padding;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)private_commonInit;
- (void)private_updateImages;
- (void)private_tapAction:(id)action;

@end

#endif /* TAVSlider_h */

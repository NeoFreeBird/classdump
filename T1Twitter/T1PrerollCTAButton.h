//
#ifndef T1PrerollCTAButton_h
#define T1PrerollCTAButton_h
@import Foundation;

@class UIButton, UIFont, UIImageView;

@interface T1PrerollCTAButton : UIButton

@property (readonly, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIFont *labelFont;

/* instance methods */
- (id)initWithVerticalSpacing:(double)spacing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_t1_setup;
- (void)_t1_updateIcon;
- (void)_t1_updateColors;

@end

#endif /* T1PrerollCTAButton_h */

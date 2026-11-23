//
#ifndef PTVBackgroundStackView_h
#define PTVBackgroundStackView_h
@import Foundation;

@class UIStackView, UIView;

@interface PTVBackgroundStackView : UIStackView

@property (readonly, nonatomic) UIView *backgroundView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)hideBackgroundView;
- (void)showBackgroundView;

@end

#endif /* PTVBackgroundStackView_h */

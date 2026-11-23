//
#ifndef T1LiveEventLoadingView_h
#define T1LiveEventLoadingView_h
@import Foundation;

@class UIActivityIndicatorView, UILabel, UIStackView, UITapGestureRecognizer, UIView;

@interface T1LiveEventLoadingView : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) long long loadingState;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_updateSubviews;

@end

#endif /* T1LiveEventLoadingView_h */

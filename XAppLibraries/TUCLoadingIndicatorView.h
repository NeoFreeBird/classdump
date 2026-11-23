//
#ifndef TUCLoadingIndicatorView_h
#define TUCLoadingIndicatorView_h
@import Foundation;

@class UIImageView, UIView;

@interface TUCLoadingIndicatorView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 spinner;
}

@property (nonatomic, readonly) UIImageView *imageView;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame spinnerConfiguration:(id)configuration;
- (id)initWithSpinnerConfiguration:(id)configuration;
- (void)layoutSubviews;
- (void)startAnimating;
- (void)stopAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TUCLoadingIndicatorView_h */

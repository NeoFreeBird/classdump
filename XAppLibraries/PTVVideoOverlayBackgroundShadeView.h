//
#ifndef PTVVideoOverlayBackgroundShadeView_h
#define PTVVideoOverlayBackgroundShadeView_h
@import Foundation;

#include "PTVGradientView.h"

@class NSLayoutConstraint, UILayoutGuide, UIView;

@interface PTVVideoOverlayBackgroundShadeView : UIView {
    /* instance variables */
    PTVGradientView *_gradientView;
    UIView *_shadeView;
    UIView *_keyboardBackgroundView;
    NSLayoutConstraint *_keyboardHeightConstraint;
}

@property (readonly, nonatomic) UILayoutGuide *shadeLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide;
@property (nonatomic) double keyboardHeight;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateConstraints;

@end

#endif /* PTVVideoOverlayBackgroundShadeView_h */

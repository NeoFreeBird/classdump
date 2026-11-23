//
#ifndef TFNVisibleSafeAreaLayoutGuide_h
#define TFNVisibleSafeAreaLayoutGuide_h
@import Foundation;

@class NSLayoutConstraint, UILayoutGuide;

@interface TFNVisibleSafeAreaLayoutGuide : UILayoutGuide {
    /* instance variables */
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

/* instance methods */
- (id)initWithOwningView:(id)view relativeVisibleSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)updateWithSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets relativeVisibleSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;

@end

#endif /* TFNVisibleSafeAreaLayoutGuide_h */

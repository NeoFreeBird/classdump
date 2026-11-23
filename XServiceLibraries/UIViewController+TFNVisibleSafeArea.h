//
#ifndef UIViewController_TFNVisibleSafeArea_h
#define UIViewController_TFNVisibleSafeArea_h
@import Foundation;

@interface UIViewController (TFNVisibleSafeArea)

/* instance methods */
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_relativeVisibleSafeAreaInsets;
- (void)setTfn_relativeVisibleSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;

@end

#endif /* UIViewController_TFNVisibleSafeArea_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

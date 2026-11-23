//
#ifndef UIViewController_TFNLayoutMetricsEnvironment_Swizzled_h
#define UIViewController_TFNLayoutMetricsEnvironment_Swizzled_h
@import Foundation;

@interface UIViewController (TFNLayoutMetricsEnvironment_Swizzled)

/* instance methods */
- (void)_tfn_dynamic_swizzledDidMoveToParentViewController:(id)controller;
- (void)_tfn_dynamic_swizzledViewWillLayoutSubviews;
- (void)_tfn_dynamic_swizzledWillTransitionToTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
- (void)_tfn_dynamic_swizzledViewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)_tfn_dynamic_swizzledTraitCollectionDidChange:(id)change;

@end

#endif /* UIViewController_TFNLayoutMetricsEnvironment_Swizzled_h */

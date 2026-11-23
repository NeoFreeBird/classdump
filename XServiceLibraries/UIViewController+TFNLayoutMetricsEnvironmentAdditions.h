//
#ifndef UIViewController_TFNLayoutMetricsEnvironmentAdditions_h
#define UIViewController_TFNLayoutMetricsEnvironmentAdditions_h
@import Foundation;

@interface UIViewController (TFNLayoutMetricsEnvironmentAdditions)

/* class methods */
+ (void)load;

/* instance methods */
- (id)tfn_customizeLayoutMetrics:(id)metrics forChildViewController:(id)controller;
- (void)tfn_invalidateLayoutMetrics;
- (_Bool)tfn_viewIsLayoutMetricsCanvas;
- (void)setTfn_viewIsLayoutMetricsCanvas:(_Bool)canvas;
- (void)_tfn_layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* UIViewController_TFNLayoutMetricsEnvironmentAdditions_h */

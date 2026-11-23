//
#ifndef UIViewController_TFNLayoutMetricsEnvironment_h
#define UIViewController_TFNLayoutMetricsEnvironment_h
@import Foundation;

@interface UIViewController (TFNLayoutMetricsEnvironment)

/* instance methods */
- (id)calculatedLayoutMetrics;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)setNeedsLayoutMetricsUpdate;

@end

#endif /* UIViewController_TFNLayoutMetricsEnvironment_h */

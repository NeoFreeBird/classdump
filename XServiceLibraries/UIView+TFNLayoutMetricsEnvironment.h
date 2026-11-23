//
#ifndef UIView_TFNLayoutMetricsEnvironment_h
#define UIView_TFNLayoutMetricsEnvironment_h
@import Foundation;

@interface UIView (TFNLayoutMetricsEnvironment)

/* instance methods */
- (id)calculatedLayoutMetrics;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)setNeedsLayoutMetricsUpdate;

@end

#endif /* UIView_TFNLayoutMetricsEnvironment_h */

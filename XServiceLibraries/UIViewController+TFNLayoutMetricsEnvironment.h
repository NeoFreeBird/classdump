//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewController_TFNLayoutMetricsTestSupport_h
#define UIViewController_TFNLayoutMetricsTestSupport_h
@import Foundation;

@interface UIViewController (TFNLayoutMetricsTestSupport)

/* instance methods */
- (void)tfn_setLayoutMetrics:(id)metrics;

@end

#endif /* UIViewController_TFNLayoutMetricsTestSupport_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIView_TFNLayoutMetricsEnvironmentAdditions_h
#define UIView_TFNLayoutMetricsEnvironmentAdditions_h
@import Foundation;

@interface UIView (TFNLayoutMetricsEnvironmentAdditions)

/* class methods */
+ (void)load;

/* instance methods */
- (id)tfn_layoutMetricsGuides;
- (void)tfn_setIsLayoutMetricsGuidesAnchorWithCanvasViewInsets:(id /* block */)insets;
- (id /* block */)tfn_layoutMetricsAnchorCanvasViewInsets;
- (id)tfn_calculatedLayoutMetricsForItemAtIndexPath:(id)path;
- (id)tfn_draggingLayoutMetrics;
- (void)setTfn_draggingLayoutMetrics:(id)metrics;
- (void)_tfn_inheritedLayoutMetricsDidChangeTo:(id)to;
- (void)_tfn_layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* UIView_TFNLayoutMetricsEnvironmentAdditions_h */

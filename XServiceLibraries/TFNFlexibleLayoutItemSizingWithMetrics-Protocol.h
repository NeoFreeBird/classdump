//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFlexibleLayoutItemSizingWithMetrics_Protocol_h
#define TFNFlexibleLayoutItemSizingWithMetrics_Protocol_h
@import Foundation;

@protocol TFNFlexibleLayoutItemSizingWithMetrics

@required

@optional

/* optional instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })size layoutMetrics:(id)metrics;

@end

#endif /* TFNFlexibleLayoutItemSizingWithMetrics_Protocol_h */

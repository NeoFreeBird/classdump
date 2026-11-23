//
#ifndef T1LayoutMetricsCollectionViewInvalidatonContext_h
#define T1LayoutMetricsCollectionViewInvalidatonContext_h
@import Foundation;

@class TFNLayoutMetrics, UICollectionViewLayoutInvalidationContext;

@interface T1LayoutMetricsCollectionViewInvalidatonContext : UICollectionViewLayoutInvalidationContext

@property (retain, nonatomic) TFNLayoutMetrics *layoutMetrics;

/* instance methods */

@end

#endif /* T1LayoutMetricsCollectionViewInvalidatonContext_h */

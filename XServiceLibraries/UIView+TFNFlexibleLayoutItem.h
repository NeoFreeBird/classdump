//
#ifndef UIView_TFNFlexibleLayoutItem_h
#define UIView_TFNFlexibleLayoutItem_h
@import Foundation;

#include "TFNFlexibleLayoutItem-Protocol.h"

@class NSObject, UIView;

@interface UIView (TFNFlexibleLayoutItem) <TFNFlexibleLayoutItem, TFNFlexibleLayoutItemSizingWithMetrics>

/* instance methods */
- (id /* block */)tfn_flexibleLayoutVisibilityCalculator;
- (id /* block */)tfn_flexibleLayoutSizeCalculator;
- (id /* block */)tfn_flexibleLayoutFrameListener;
- (id /* block */)tfn_flexibleLayoutVisibilityListener;

@end

#endif /* UIView_TFNFlexibleLayoutItem_h */

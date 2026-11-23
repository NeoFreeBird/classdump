//
#ifndef TFNHorizontallyInsetView_h
#define TFNHorizontallyInsetView_h
@import Foundation;

@class UIView;

@interface TFNHorizontallyInsetView : UIView

@property (readonly, nonatomic) _Bool respectsMaxWidth;

/* instance methods */
- (id)calculatedLayoutMetrics;

@end

#endif /* TFNHorizontallyInsetView_h */

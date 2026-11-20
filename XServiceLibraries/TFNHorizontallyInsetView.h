//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

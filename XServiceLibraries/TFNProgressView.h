//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNProgressView_h
#define TFNProgressView_h
@import Foundation;

@class UIProgressView;

@interface TFNProgressView : UIProgressView

@property (nonatomic) double progressBarHeight;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })origin width:(double)width;

@end

#endif /* TFNProgressView_h */

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

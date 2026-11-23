//
#ifndef PTVScrubberViewLayoutSpec_h
#define PTVScrubberViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVScrubberViewLayoutSpec : NSObject

/* class methods */
+ (double)StartingXForSuperviewSize:(struct CGSize { double x0; double x1; })size CurrentTime:(double)time TotalTime:(double)time ZoomFactor:(double)factor;
+ (double)StartIndicatorHeight;
+ (double)SpacingBetweenIndicatorAndBar;
+ (double)BarHeight;
+ (double)FullBarWidthWithSuperviewSize:(struct CGSize { double x0; double x1; })size ZoomFactor:(double)factor;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })GrayBarFrameWithSuperViewSize:(struct CGSize { double x0; double x1; })size CurrentTime:(double)time TotalTime:(double)time ZoomFactor:(double)factor TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })WhiteBarFrameWithSuperViewSize:(struct CGSize { double x0; double x1; })size CurrentTime:(double)time TotalTime:(double)time ZoomFactor:(double)factor TraitCollection:(id)collection;
+ (double)TimeBetweenTimeBarsForTotalDuration:(double)duration;
+ (unsigned long long)NumberOfTimeBarsForTotalDuration:(double)duration;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TimeBarFrameForIndex:(unsigned long long)index WithSuperViewSize:(struct CGSize { double x0; double x1; })size CurrentTime:(double)time TotalTime:(double)time ZoomFactor:(double)factor TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })StartIndicatorFrameWithSuperViewSize:(struct CGSize { double x0; double x1; })size StartTime:(double)time CurrentTime:(double)time TotalTime:(double)time ZoomFactor:(double)factor TraitCollection:(id)collection;

@end

#endif /* PTVScrubberViewLayoutSpec_h */

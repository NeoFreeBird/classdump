//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1MediaAttachmentProgressBarView_h
#define T1MediaAttachmentProgressBarView_h
@import Foundation;

@class CALayer, UIColor, UIImageView, UIView;

@interface T1MediaAttachmentProgressBarView : UIView

@property (retain, nonatomic) UIImageView *progressBarTrack;
@property (retain, nonatomic) UIImageView *progressBarFill;
@property (retain, nonatomic) CALayer *scrubPointLayer;
@property (readonly, nonatomic) double normalizedValue;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *trackColor;
@property (nonatomic) double value;
@property (nonatomic) _Bool scrubHintVisible;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setValue:(double)value withAnimationDuration:(double)duration;
- (void)setValue:(double)value withAnimationDuration:(double)duration completion:(id /* block */)completion;
- (void)setScrubHintVisible:(_Bool)visible animated:(_Bool)animated;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_progressBarFrameWithWidthPercentage:(double)percentage;

@end

#endif /* T1MediaAttachmentProgressBarView_h */

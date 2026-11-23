//
#ifndef TFNBarProgressView_h
#define TFNBarProgressView_h
@import Foundation;

@class UIColor, UIView;

@interface TFNBarProgressView : UIView {
    /* instance variables */
    UIView *_trackView;
}

@property (readonly, nonatomic) UIView *progressView;
@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *trackTintColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setProgress:(float)progress animated:(_Bool)animated completion:(id /* block */)completion;
- (void)setProgress:(float)progress animated:(_Bool)animated animationDuration:(double)duration completion:(id /* block */)completion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForProgress:(float)progress;

@end

#endif /* TFNBarProgressView_h */

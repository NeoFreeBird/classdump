//
#ifndef TFNAnimatableImageView_h
#define TFNAnimatableImageView_h
@import Foundation;

@class UIImageView;

@interface TFNAnimatableImageView : UIImageView

@property (copy, nonatomic) id /* block */ animationCompletion;
@property (nonatomic) struct CGSize { double x0; double x1; } frameSheetImageSize;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)_commonInit;
- (void)startAnimatingWithDuration:(double)duration repeatCount:(unsigned long long)count completion:(id /* block */)completion;
- (void)startAnimatingWithFrameSheet:(id)sheet duration:(double)duration repeatCount:(unsigned long long)count completion:(id /* block */)completion;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

#endif /* TFNAnimatableImageView_h */

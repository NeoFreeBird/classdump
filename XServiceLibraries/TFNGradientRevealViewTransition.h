//
#ifndef TFNGradientRevealViewTransition_h
#define TFNGradientRevealViewTransition_h
@import Foundation;

@class NSObject, UIView;

@interface TFNGradientRevealViewTransition : NSObject

@property (readonly, nonatomic) UIView *view;
@property (nonatomic) long long direction;

/* instance methods */
- (id)initWithView:(id)view;
- (id)init;
- (void)performTransition;
- (id)_tfn_gradientMaskImageWithSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* TFNGradientRevealViewTransition_h */

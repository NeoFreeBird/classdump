//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

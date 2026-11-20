//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie23LottieAnimationViewBase_h
#define _TtC6Lottie23LottieAnimationViewBase_h
@import Foundation;

@class UIView;

@interface Lottie.LottieAnimationViewBase : UIView // (Swift)

@property (nonatomic) long long contentMode;

/* instance methods */
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)animationWillMoveToBackground;
- (void)animationWillEnterForeground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC6Lottie23LottieAnimationViewBase_h */

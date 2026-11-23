//
#ifndef _TtC6Lottie19LottieAnimationView_h
#define _TtC6Lottie19LottieAnimationView_h
@import Foundation;

#include "_TtC6Lottie23LottieAnimationViewBase.h"

@class Lottie.LottieAnimationLayer, Lottie.LottieAnimationView _$s_ -> Lottie.LottieAnimation _$stcSg, Lottie.LottieBackgroundBehavior ?, Lottie.LottieLogger, NSString, Swift.Bool, _$sSSSg, __C.CGRect ?;

@interface Lottie.LottieAnimationView : Lottie.LottieAnimationViewBase { // (Swift)
    /* instance variables */
    Swift.Bool animateLayoutChangesWithCurrentCoreAnimationContext;
    Lottie.LottieBackgroundBehavior ? windowBackgroundBehavior;
    Lottie.LottieAnimationView  first-element-marker  -> Lottie.LottieAnimation _$stcSg animationLoaded;
    __C.CGRect ? viewportFrame;
    Lottie.LottieAnimationLayer lottieAnimationLayer;
    Swift.Bool waitingToPlayAnimation;
    Lottie.LottieLogger logger;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *animationName;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)animationWillMoveToBackground;
- (void)animationWillEnterForeground;

@end

#endif /* _TtC6Lottie19LottieAnimationView_h */

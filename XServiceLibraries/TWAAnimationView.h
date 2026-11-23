//
#ifndef TWAAnimationView_h
#define TWAAnimationView_h
@import Foundation;

#include "TWAAnimation.h"

@class UIView;

@interface TWAAnimationView : UIView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 lottieView;
}

@property (nonatomic) long long contentMode;
@property (nonatomic, readonly) _Bool isAnimationPlaying;
@property (nonatomic) _Bool loopAnimation;
@property (nonatomic) _Bool autoReverseAnimation;
@property (nonatomic, retain) TWAAnimation *animation;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)playWithCompletion:(id /* block */)completion;
- (void)pause;
- (void)stop;
- (void)replaceColor:(id)color withColor:(id)color inLayer:(id)layer;

@end

#endif /* TWAAnimationView_h */

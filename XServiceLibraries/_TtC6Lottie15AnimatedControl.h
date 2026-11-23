//
#ifndef _TtC6Lottie15AnimatedControl_h
#define _TtC6Lottie15AnimatedControl_h
@import Foundation;

@class Lottie.LottieAnimation ?, Lottie.LottieAnimationView, UIControl, _$sSDySuSSG;

@interface Lottie.AnimatedControl : UIControl { // (Swift)
    /* instance variables */
    Lottie.LottieAnimationView animationView;
    Lottie.LottieAnimation ? animation;
    [Swift.UInt : Swift.String] stateMap;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (_Bool)isEnabled;
- (_Bool)isSelected;
- (_Bool)isHighlighted;
- (_Bool)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (_Bool)continueTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6Lottie15AnimatedControl_h */

//
#ifndef _TtC6Lottie14AnimatedSwitch_h
#define _TtC6Lottie14AnimatedSwitch_h
@import Foundation;

#include "_TtC6Lottie15AnimatedControl.h"

@class Lottie.AnimatedSwitch.CancelBehavior, Lottie.ImpactGenerator, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$sySbcSg;

@interface Lottie.AnimatedSwitch : Lottie.AnimatedControl { // (Swift)
    /* instance variables */
    Lottie.AnimatedSwitch.CancelBehavior cancelBehavior;
    Swift.Bool animateUpdateWhenChangingAnimation;
    ((Swift.Bool) -> ())? stateUpdated;
    nominal type descriptor for CoreGraphics.CGFloat onStartProgress;
    nominal type descriptor for CoreGraphics.CGFloat onEndProgress;
    nominal type descriptor for CoreGraphics.CGFloat offStartProgress;
    nominal type descriptor for CoreGraphics.CGFloat offEndProgress;
    Lottie.ImpactGenerator hapticGenerator;
    Swift.Bool _isOn;
}

@property (nonatomic) unsigned long long accessibilityTraits;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;

@end

#endif /* _TtC6Lottie14AnimatedSwitch_h */

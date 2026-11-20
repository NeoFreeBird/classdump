//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie14AnimatedButton_h
#define _TtC6Lottie14AnimatedButton_h
@import Foundation;

#include "_TtC6Lottie15AnimatedControl.h"

@class _$sSD -> _$ss11AnyHashableVMn _$s12CoreGraphics7CGFloatVMn from_AB2tot, _$syycSg;

@interface Lottie.AnimatedButton : Lottie.AnimatedControl { // (Swift)
    /* instance variables */
    (() -> ())? performAction;
    Swift.Dictionary -> nominal type descriptor for Swift.AnyHashable nominal type descriptor for CoreGraphics.CGFloat from_AB2tot rangesForEvents;
}

@property (nonatomic) unsigned long long accessibilityTraits;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (_Bool)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;

@end

#endif /* _TtC6Lottie14AnimatedButton_h */

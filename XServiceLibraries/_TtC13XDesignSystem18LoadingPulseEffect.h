//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem18LoadingPulseEffect_h
#define _TtC13XDesignSystem18LoadingPulseEffect_h
@import Foundation;

@class NSObject, XDesignSystem.LoadingPulseEffect.State, _$s7Combine14AnyCancellableCMn ?, _$sSo6UIViewCSgXw;

@interface XDesignSystem.LoadingPulseEffect : NSObject { // (Swift)
    /* instance variables */
    weak __C.UIView? view;
    XDesignSystem.LoadingPulseEffect.State state;
    nominal type descriptor for Combine.AnyCancellable ? reduceMotionCancellable;
}

/* instance methods */
- (void)handleMotionOrActivationChange;
- (id)init;

@end

#endif /* _TtC13XDesignSystem18LoadingPulseEffect_h */

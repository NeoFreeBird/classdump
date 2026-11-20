//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie27AnimationCompletionDelegate_h
#define _TtC6Lottie27AnimationCompletionDelegate_h
@import Foundation;

#include "CAAnimationDelegate-Protocol.h"

@class Lottie.AnimationContextState, Lottie.RootAnimationLayer ?, NSObject, Swift.Bool, _$sSSSg, _$sySbcSg;

@interface Lottie.AnimationCompletionDelegate : NSObject <CAAnimationDelegate> { // (Swift)
    /* instance variables */
    Lottie.RootAnimationLayer ? animationLayer;
    Swift.String? animationKey;
    Swift.Bool ignoreDelegate;
    Lottie.AnimationContextState animationState;
    ((Swift.Bool) -> ())? completionBlock;
}

/* instance methods */
- (void)animationDidStop:(id)stop finished:(_Bool)finished;
- (id)init;

@end

#endif /* _TtC6Lottie27AnimationCompletionDelegate_h */

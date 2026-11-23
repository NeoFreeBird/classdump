//
#ifndef _TtC13GrokComposeUI17AnimationDelegate_h
#define _TtC13GrokComposeUI17AnimationDelegate_h
@import Foundation;

#include "CAAnimationDelegate-Protocol.h"

@class NSObject, Swift.Bool, _$sySo11CAAnimationC_SbtcSg, _$sySo11CAAnimationCcSg;

@interface GrokComposeUI.AnimationDelegate : NSObject <CAAnimationDelegate> { // (Swift)
    /* instance variables */
    ((__C.CAAnimation) -> ())? animationDidStart;
    ((__C.CAAnimation, Swift.Bool) -> ())? animationDidStop;
    Swift.Bool didStart;
    Swift.Bool didStop;
}

/* instance methods */
- (void)animationDidStart:(id)start;
- (void)animationDidStop:(id)stop finished:(_Bool)finished;
- (id)init;

@end

#endif /* _TtC13GrokComposeUI17AnimationDelegate_h */

//
#ifndef _TtC14T1TwitterSwift22VoiceTabSearchAnimator_h
#define _TtC14T1TwitterSwift22VoiceTabSearchAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, T1TwitterSwift.VoiceTabSearchAnimator.VoiceTabTransitionStyle;

@interface T1TwitterSwift.VoiceTabSearchAnimator : NSObject <UIViewControllerAnimatedTransitioning> { // (Swift)
    /* instance variables */
    T1TwitterSwift.VoiceTabSearchAnimator.VoiceTabTransitionStyle style;
}

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift22VoiceTabSearchAnimator_h */

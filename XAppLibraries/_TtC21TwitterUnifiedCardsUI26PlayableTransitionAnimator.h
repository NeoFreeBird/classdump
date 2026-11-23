//
#ifndef _TtC21TwitterUnifiedCardsUI26PlayableTransitionAnimator_h
#define _TtC21TwitterUnifiedCardsUI26PlayableTransitionAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, Swift.Bool, _$sSo11TUCFeatures_p, _$sSo18TUCUnifiedCardView_So6UIViewCXc, _$sSo6UIViewCSg, __C.CGRect;

@interface TwitterUnifiedCardsUI.PlayableTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> { // (Swift)
    /* instance variables */
    Swift.Bool dismissing;
    __C.TUCFeatures features;
    __C.UIView & __C.TUCUnifiedCardView unifiedCardView;
    __C.UIView? videoViewSnapshot;
    __C.CGRect videoViewStartingFrame;
}

/* instance methods */
- (id)init;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;

@end

#endif /* _TtC21TwitterUnifiedCardsUI26PlayableTransitionAnimator_h */

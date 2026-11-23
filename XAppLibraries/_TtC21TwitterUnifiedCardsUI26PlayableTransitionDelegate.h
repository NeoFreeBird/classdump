//
#ifndef _TtC21TwitterUnifiedCardsUI26PlayableTransitionDelegate_h
#define _TtC21TwitterUnifiedCardsUI26PlayableTransitionDelegate_h
@import Foundation;

#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSObject, _$sSo11TUCFeatures_p, _$sSo18TUCUnifiedCardView_So6UIViewCXc, _$sSo6UIViewCSg, __C.CGRect;

@interface TwitterUnifiedCardsUI.PlayableTransitionDelegate : NSObject <UIViewControllerTransitioningDelegate> { // (Swift)
    /* instance variables */
    __C.TUCFeatures features;
    __C.UIView & __C.TUCUnifiedCardView unifiedCardView;
    __C.UIView? videoViewSnapshot;
    __C.CGRect videoViewStartingFrame;
}

/* instance methods */
- (id)init;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;

@end

#endif /* _TtC21TwitterUnifiedCardsUI26PlayableTransitionDelegate_h */

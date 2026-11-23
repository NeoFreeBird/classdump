//
#ifndef _TtC13XDesignSystem34TrayKeyboardCoordinationTransition_h
#define _TtC13XDesignSystem34TrayKeyboardCoordinationTransition_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, Swift.Bool, _$syycSg;

@interface XDesignSystem.TrayKeyboardCoordinationTransition : NSObject <UIViewControllerAnimatedTransitioning> { // (Swift)
    /* instance variables */
    Swift.Bool isPresenting;
    (() -> ())? onInstall;
}

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (id)init;

@end

#endif /* _TtC13XDesignSystem34TrayKeyboardCoordinationTransition_h */

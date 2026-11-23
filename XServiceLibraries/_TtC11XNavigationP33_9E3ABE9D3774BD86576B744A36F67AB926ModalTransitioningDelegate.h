//
#ifndef _TtC11XNavigationP33_9E3ABE9D3774BD86576B744A36F67AB926ModalTransitioningDelegate_h
#define _TtC11XNavigationP33_9E3ABE9D3774BD86576B744A36F67AB926ModalTransitioningDelegate_h
@import Foundation;

#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSObject;

@interface XNavigation.(ModalTransitioningDelegate in _9E3ABE9D3774BD86576B744A36F67AB9) : NSObject <UIViewControllerTransitioningDelegate> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 transition;
}

/* instance methods */
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)init;

@end

#endif /* _TtC11XNavigationP33_9E3ABE9D3774BD86576B744A36F67AB926ModalTransitioningDelegate_h */

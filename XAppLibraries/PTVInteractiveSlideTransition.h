//
#ifndef PTVInteractiveSlideTransition_h
#define PTVInteractiveSlideTransition_h
@import Foundation;

#include "PTVInteractiveSlideTransitionDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UINavigationController, UIPercentDrivenInteractiveTransition, UIViewController;

@interface PTVInteractiveSlideTransition : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate> {
    /* instance variables */
    UINavigationController *_navigationController;
    _Bool _shouldComplete;
}

@property (readonly, nonatomic) _Bool transitionInProgress;
@property (weak, nonatomic) id <PTVInteractiveSlideTransitionDelegate> delegate;
@property (readonly, nonatomic) UIViewController *fromViewController;
@property (readonly, nonatomic) UIViewController *toViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)attachToViewController:(id)controller;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)gestureRecognizerDidFire:(id)fire;

@end

#endif /* PTVInteractiveSlideTransition_h */

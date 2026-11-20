//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAnimatedTransitionWithShadeCoordinator_h
#define PTVAnimatedTransitionWithShadeCoordinator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, NSString, UIView;

@interface PTVAnimatedTransitionWithShadeCoordinator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic) UIView *shadeView;
@property (nonatomic) _Bool isBeingPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (double)transitionDuration;
- (unsigned long long)animationOptions;
- (double)animatableHeightForPresentedViewController:(id)controller otherViewController:(id)controller;

@end

#endif /* PTVAnimatedTransitionWithShadeCoordinator_h */

//
#ifndef PTVBroadcastOverflowAnimatedTransitionWithShadeCoordinator_h
#define PTVBroadcastOverflowAnimatedTransitionWithShadeCoordinator_h
@import Foundation;

#include "PTVAnimatedTransitionWithShadeCoordinator.h"

@interface PTVBroadcastOverflowAnimatedTransitionWithShadeCoordinator : PTVAnimatedTransitionWithShadeCoordinator

/* instance methods */
- (void)animateTransition:(id)transition;
- (double)animatableHeightForPresentedViewController:(id)controller otherViewController:(id)controller;

@end

#endif /* PTVBroadcastOverflowAnimatedTransitionWithShadeCoordinator_h */

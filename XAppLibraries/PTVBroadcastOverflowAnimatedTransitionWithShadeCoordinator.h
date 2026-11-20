//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

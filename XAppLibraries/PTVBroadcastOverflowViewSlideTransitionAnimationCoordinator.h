//
#ifndef PTVBroadcastOverflowViewSlideTransitionAnimationCoordinator_h
#define PTVBroadcastOverflowViewSlideTransitionAnimationCoordinator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, NSString;

@interface PTVBroadcastOverflowViewSlideTransitionAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) _Bool dismissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initForPop:(_Bool)pop;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;

@end

#endif /* PTVBroadcastOverflowViewSlideTransitionAnimationCoordinator_h */

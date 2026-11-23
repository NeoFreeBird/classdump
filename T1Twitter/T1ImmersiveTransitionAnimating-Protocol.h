//
#ifndef T1ImmersiveTransitionAnimating_Protocol_h
#define T1ImmersiveTransitionAnimating_Protocol_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@protocol T1ImmersiveTransitionAnimating <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@required

@property (nonatomic, readonly) double dismissDeltaX;
@property (nonatomic, readonly) double dismissDeltaY;
@property (nonatomic, readonly) _Bool isDismissingToSource;
@property (nonatomic, readonly) _Bool isPresentMorphInFlight;

/* required instance methods */
- (void)installMorphBackdropIfNeeded;
- (void)layoutCurrentViews;
- (void)prepareToReappear;
- (void)handleDismissGesture:(id)gesture;
- (void)dismissWith:(struct CGPoint { double x0; double x1; })with velocity:(struct CGPoint { double x0; double x1; })velocity;
- (void)viewWillTransitionTo:(struct CGSize { double x0; double x1; })to with:(id)with;
- (void)willDock;

@optional

@end

#endif /* T1ImmersiveTransitionAnimating_Protocol_h */

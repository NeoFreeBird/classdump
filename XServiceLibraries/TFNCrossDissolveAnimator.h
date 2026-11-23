//
#ifndef TFNCrossDissolveAnimator_h
#define TFNCrossDissolveAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, NSString;

@interface TFNCrossDissolveAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) _Bool fadeOutFromViewController;
@property (nonatomic) _Bool dismissing;
@property (nonatomic) double animationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;

@end

#endif /* TFNCrossDissolveAnimator_h */

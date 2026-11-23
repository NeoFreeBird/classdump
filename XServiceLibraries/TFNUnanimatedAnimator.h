//
#ifndef TFNUnanimatedAnimator_h
#define TFNUnanimatedAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, NSString;

@interface TFNUnanimatedAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) _Bool dismissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;

@end

#endif /* TFNUnanimatedAnimator_h */

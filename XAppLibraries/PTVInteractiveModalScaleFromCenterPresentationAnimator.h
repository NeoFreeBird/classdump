//
#ifndef PTVInteractiveModalScaleFromCenterPresentationAnimator_h
#define PTVInteractiveModalScaleFromCenterPresentationAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, NSString;

@interface PTVInteractiveModalScaleFromCenterPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) _Bool shouldUseSpringAnimation;
@property (nonatomic) _Bool isDismissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithShouldUseSpringAnimation:(_Bool)animation isDismissing:(_Bool)dismissing;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;

@end

#endif /* PTVInteractiveModalScaleFromCenterPresentationAnimator_h */

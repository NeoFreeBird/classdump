//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

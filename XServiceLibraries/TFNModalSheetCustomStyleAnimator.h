//
#ifndef TFNModalSheetCustomStyleAnimator_h
#define TFNModalSheetCustomStyleAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, NSString;

@interface TFNModalSheetCustomStyleAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) _Bool dismissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)damping;

/* instance methods */
- (void)_tfn_animateDismissFrom:(id)from withDuration:(double)duration velocity:(double)velocity completion:(id /* block */)completion;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (void)_tfn_animateDismiss:(id)dismiss;
- (void)_tfn_animatePresent:(id)present;

@end

#endif /* TFNModalSheetCustomStyleAnimator_h */

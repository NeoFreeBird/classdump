//
#ifndef TFNNavigationControllerTransitionAnimator_h
#define TFNNavigationControllerTransitionAnimator_h
@import Foundation;

#include "TFNNavigationController.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIColor, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, UIScreenEdgePanGestureRecognizer, UIView;

@interface TFNNavigationControllerTransitionAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate> {
    /* instance variables */
    TFNNavigationController *_navigationController;
    UIView *_interactivePopResignedResponder;
    _Bool _completingInteractivePop;
    double _pushParallaxRate;
}

@property (retain, nonatomic) UIColor *backgroundViewOverlayColor;
@property (nonatomic) double maximumAlpha;
@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *interactivePopGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer *interactivePopPanGestureRecognizer;
@property (readonly, nonatomic) _Bool interactive;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long operation;
@property (nonatomic) _Bool suppressDimming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNavigationController:(id)controller;
- (void)dealloc;
- (double)transitionDuration:(id)duration;
- (void)setBackgroundViewOverlayColor:(id)color maximumAlpha:(double)alpha;
- (_Bool)_tfn_prefersFullSlideForTransition:(id)transition;
- (double)_tfn_maximumAlphaForTransition:(id)transition;
- (double)_tfn_pushParallaxRateForTransition:(id)transition;
- (void)animateTransition:(id)transition;
- (void)_animatePushTransition:(id)transition;
- (void)_animatePopTransition:(id)transition;
- (void)_tfn_crashWithException:(id)exception fromViewController:(id)controller toViewController:(id)controller containerView:(id)view isInteractive:(_Bool)interactive fromPush:(_Bool)push;
- (void)animationEnded:(_Bool)ended;
- (void)_tfn_resignKeyboardForInteractivePop;
- (void)_tfn_restoreKeyboardAfterCancelledInteractivePop;
- (void)_pan:(id)_pan;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveEvent:(id)event;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)_tfn_isTrackpadScrollOverHorizontalScroller;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)isInteractive;

@end

#endif /* TFNNavigationControllerTransitionAnimator_h */

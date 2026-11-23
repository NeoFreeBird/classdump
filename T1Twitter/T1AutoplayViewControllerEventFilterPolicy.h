//
#ifndef T1AutoplayViewControllerEventFilterPolicy_h
#define T1AutoplayViewControllerEventFilterPolicy_h
@import Foundation;

#include "TAVUIAutoplayFilterPolicy-Protocol.h"
#include "TFNViewControllerEventObserver-Protocol.h"

@class NSObject, NSString, TFNViewController;

@interface T1AutoplayViewControllerEventFilterPolicy : NSObject <TAVUIAutoplayFilterPolicy, TFNViewControllerEventObserver>

@property (weak, nonatomic) TFNViewController *observedViewController;
@property (copy, nonatomic) id /* block */ autoplayConditionsDidChangeBlock;
@property (nonatomic) _Bool isPerformingFullscreenMediaTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithObservedViewController:(id)controller;
- (void)dealloc;
- (void)transitionToFullscreenMediaPresentationDidBegin:(id)begin;
- (void)transitionFromFullScreenMediaPresentationDidEnd:(id)end;
- (void)transitionFromFullscreenMediaPresentationDidBegin:(id)begin;
- (void)transitionToFullScreenMediaPresentationDidEnd:(id)end;
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(id /* block */)block;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)autoplayable environment:(id)environment;
- (void)viewControllerViewWillFullyDisappear:(id)disappear;
- (void)viewControllerViewDidFullyAppear:(id)appear;
- (void)presentedDidDismissViewControllerNotification:(id)notification;
- (void)presentedActivityViewControllerDidDismissNotification:(id)notification;
- (void)appStoreProductViewControllerDidPresentNotification:(id)notification;
- (void)appStoreProductViewControllerDidDismissNotification:(id)notification;

@end

#endif /* T1AutoplayViewControllerEventFilterPolicy_h */

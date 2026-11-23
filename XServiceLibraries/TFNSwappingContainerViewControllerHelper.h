//
#ifndef TFNSwappingContainerViewControllerHelper_h
#define TFNSwappingContainerViewControllerHelper_h
@import Foundation;

#include "UIViewControllerTransitionCoordinator-Protocol.h"

@class NSObject, UIViewController, UIViewPropertyAnimator;
@protocol TFNSwappingContainerViewControllerHelperDelegate;

@interface TFNSwappingContainerViewControllerHelper : NSObject

@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) id <UIViewControllerTransitionCoordinator> currentTransitioningContext;
@property (retain, nonatomic) UIViewPropertyAnimator *currentTransitioningAnimator;
@property (readonly, weak, nonatomic) UIViewController<TFNSwappingContainerViewControllerHelperDelegate> *containerViewController;
@property (readonly, nonatomic) _Bool transitioning;

/* instance methods */
- (id)init;
- (id)initWithContainerViewController:(id)controller;
- (_Bool)isTransitioning;
- (void)transitionToContentViewController:(id)controller animated:(_Bool)animated;
- (void)_tfn_main_stopAndFinishCurrentTransitionAnimations;
- (void)_tfn_main_transitionFromContentViewController:(id)controller toContentViewController:(id)controller animated:(_Bool)animated;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)_t1_main_forwardBeginAppearanceTransition:(_Bool)transition animated:(_Bool)animated;
- (void)_t1_main_forwardEndAppearanceTransition;

@end

#endif /* TFNSwappingContainerViewControllerHelper_h */

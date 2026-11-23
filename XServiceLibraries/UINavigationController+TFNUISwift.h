//
#ifndef UINavigationController_TFNUISwift_h
#define UINavigationController_TFNUISwift_h
@import Foundation;

@interface UINavigationController (TFNUISwift) <TFNNavigationStack, UIGestureRecognizerDelegate>

/* instance methods */
- (_Bool)tfn_prefersTabBarPinned;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (_Bool)tfn_presentAsModal;
- (_Bool)tfn_coversPresentingViewController;
- (void)pushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)replaceTopViewController:(id)controller animated:(_Bool)animated;
- (id)replaceTopViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootAndPushViewController:(id)controller animated:(_Bool)animated;
- (id)popToRootAndPushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)_performCompletion:(id /* block */)completion animated:(_Bool)animated;
- (_Bool)xnav_scrollToTopAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)xnav_addEventObserver:(id /* block */)observer;
- (id)xnav_defaultConfiguration;
- (void)viewDidLoad;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;

@end

#endif /* UINavigationController_TFNUISwift_h */

//
#ifndef T1AppSplitViewController_h
#define T1AppSplitViewController_h
@import Foundation;

#include "T1AppSplitHostView.h"
#include "T1AppSplitViewControllerDelegate-Protocol.h"
#include "T1DashContentController.h"
#include "T1DashContentPresenterDelegate-Protocol.h"
#include "T1DashPresenter-Protocol.h"
#include "T1TabBarViewController.h"
#include "T1TabBarViewControllerContainerDelegate-Protocol.h"
#include "T1TabBottomSegmentViewController.h"
#include "T1TabBottomSegmentViewControllerLayoutDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TPXAnimationObserver-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TFNTwitterAccount, TPXSpringAnimator, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView, UIViewController, UIViewPropertyAnimator;

@interface T1AppSplitViewController : UIViewController <T1DashContentPresenterDelegate, T1TabBarViewControllerContainerDelegate, T1TabBottomSegmentViewControllerLayoutDelegate, TFNLayoutMetricsEnvironment, TPXAnimationObserver, UIGestureRecognizerDelegate, T1DashPresenter> {
    /* instance variables */
    T1AppSplitHostView *_dashHostView;
    T1AppSplitHostView *_contentHostView;
    UIView *_combinedContentBackgroundView;
    UIViewController *_transitioningToViewController;
    UIViewController *_animatingToViewController;
    UIScrollView *_disabledContentScrollView;
    double _dashContentOffsetX;
    double _dashStartingContentOffsetX;
    UITapGestureRecognizer *_dashCloseTapGestureRecognizer;
    UIScreenEdgePanGestureRecognizer *_dashScreenEdgePanGestureRecognizer;
    UIScreenEdgePanGestureRecognizer *_dashScreenSecondaryEdgePanGestureRecognizer;
    UIPanGestureRecognizer *_dashPanContentGestureRecognizer;
    long long _appSplitTransition;
    TPXSpringAnimator *_dashSpringAnimator;
    id /* block */ _dashSpringCompletion;
    _Bool _horizontalPagingEnabled;
    _Bool _revealTransitionEnabled;
    UIImpactFeedbackGenerator *_lightFeedbackGenerator;
    UIImpactFeedbackGenerator *_softFeedbackGenerator;
    _Bool _bottomSegmentAnimationInProgress;
    unsigned long long _bottomSegmentAnimationToken;
}

@property (nonatomic) _Bool visible;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (readonly, nonatomic) double dashFullWidth;
@property (retain, nonatomic) UIViewPropertyAnimator *dashContentOffsetAnimator;
@property (readonly, nonatomic) _Bool tracking;
@property (readonly, nonatomic) _Bool dragging;
@property (readonly, nonatomic) _Bool decelerating;
@property (nonatomic) double currentAbsoluteHorizontalAngle;
@property (readonly, nonatomic) UIViewController *dashViewController;
@property (readonly, nonatomic) T1DashContentController *dashContentController;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) UIViewController *contentPresentingViewController;
@property (readonly, nonatomic) T1TabBarViewController *tabBarViewController;
@property (readonly, nonatomic) T1TabBottomSegmentViewController *tabBottomSegmentViewController;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (weak, nonatomic) id <T1AppSplitViewControllerDelegate> delegate;
@property (readonly, nonatomic) double dashPanelOpenPercent;
@property (readonly, nonatomic) _Bool dashTransitioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool dashOpen;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithDashContentController:(id)controller tabBarViewController:(id)controller tabBottomSegmentViewController:(id)controller contentViewController:(id)controller account:(id)account;
- (void)dealloc;
- (id)currentDashViewController;
- (double)private_dashContentWidthForSize:(struct CGSize { double x0; double x1; })size;
- (double)private_dashFullWidthForSize:(struct CGSize { double x0; double x1; })size;
- (void)private_loadDashHostView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)bottomSegmentController;
- (void)private_layoutViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })private_bottomTabBarFrameWithContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })private_tabBottomSegmentFrameWithContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)private_updateTabBottomSegmentFrameWithContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (double)private_bottomTabBarHeight;
- (double)private_tabBottomSegmentHeight;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)container withParentContainerSize:(struct CGSize { double x0; double x1; })size;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)private_viewControllerForStatusBarAppearance;
- (void)tabBarViewController:(id)controller didChangeVisibleTabBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)tfn_customizeLayoutMetrics:(id)metrics forChildViewController:(id)controller;
- (void)presentDashFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)private_presentDashFromViewController:(id)controller withPanGesture:(id)gesture animated:(_Bool)animated completion:(id /* block */)completion;
- (void)dismissDashAnimated:(_Bool)animated completion:(id /* block */)completion;
- (_Bool)isDashOpen;
- (_Bool)isDashTransitioning;
- (_Bool)private_isDashBadgeDisplayed;
- (void)dashContentPresenterPresentContentViewController:(id)controller dismissDashBlock:(id /* block */)block;
- (void)dashContentPresenterPresentModalViewController:(id)controller dismissDashBlock:(id /* block */)block;
- (void)dashContentPresenterSwitchAccountWithBlock:(id /* block */)block dismissDashBlock:(id /* block */)block;
- (void)dashContentPresenterDismissDashAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)dashContentPresenterDismissViewControllerAnimated:(_Bool)animated;
- (void)dashContentPresenterPrepareForModalPresentation:(id /* block */)presentation;
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (id)keyCommands;
- (void)handleCloseKeyCommand;
- (_Bool)private_canHandleCloseKeyCommand;
- (void)handleEscapeKeyCommand;
- (void)handleDashKeyCommand;
- (void)handleDashPanelKeyCommand;
- (_Bool)private_canHandleDashKeyCommand;
- (void)handleSettingsKeyCommand;
- (_Bool)private_canHandleSettingsKeyCommand;
- (void)handleAccountListKeyCommand;
- (void)handlePreviousAccountKeyCommand;
- (void)handleNextAccountKeyCommand;
- (_Bool)private_canHandleAccountSwitchingCommands;
- (void)private_updateDashGestureRecognizersEnabled;
- (void)private_dashPan:(id)pan;
- (void)private_updateDashPan:(id)pan;
- (void)private_endDashPan:(id)pan finished:(_Bool)finished completion:(id /* block */)completion;
- (void)private_dashCloseTap:(id)tap;
- (void)private_dashShowContentViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (double)private_contentOffsetXForViewController:(id)controller withBoundsSize:(struct CGSize { double x0; double x1; })size;
- (double)private_contentOffsetXForViewController:(id)controller;
- (void)private_applyDashLayoutAndNotify;
- (double)private_visibleDashContentOffsetX;
- (void)private_setDashContentOffsetX:(double)x animated:(_Bool)animated completion:(id /* block */)completion;
- (void)private_scrollToViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)private_notifyDashDidSettleOpen:(_Bool)open;
- (void)private_beginActivateTransitionToViewController:(id)controller gestural:(_Bool)gestural;
- (void)private_endActivateTransitionGestural:(_Bool)gestural completed:(_Bool)completed;
- (void)private_settleActivateTransitionGestural:(_Bool)gestural completed:(_Bool)completed;
- (void)private_updateStatusBarAppearance;
- (void)private_activateViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)private_stopDashContentOffsetAnimatorIfNeeded;
- (_Bool)private_canInterruptDeceleration;
- (_Bool)private_interruptDashAnimationIfNeeded;
- (void)tpx_animationDidStart:(id)start;
- (void)tpx_animationDidUpdate:(id)update;
- (void)tpx_animationDidStop:(id)stop;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)scribe;
- (id)scribePage;
- (_Bool)accessibilityPerformEscape;
- (void)private_performOnVisibleViewControllers:(id /* block */)controllers;
- (void)private_addChildViewControllers;
- (_Bool)private_canPresentDash;
- (_Bool)private_canPresentDashPanelFromViewController:(id)controller;
- (_Bool)private_canDismissDash;
- (id)private_panelPresentingViewController;
- (void)private_updateDashHidden;
- (void)private_updateOverlayViews;
- (void)didUpdateHostedViewWithShouldAnimate:(_Bool)animate completion:(id /* block */)completion;
- (_Bool)isTracking;
- (_Bool)isDragging;
- (_Bool)isDecelerating;

@end

#endif /* T1AppSplitViewController_h */

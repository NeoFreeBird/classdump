//
#ifndef TFNModalSheetViewController_h
#define TFNModalSheetViewController_h
@import Foundation;

#include "TFNBasicTransitionCoordinator.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNModalContainerViewController-Protocol.h"
#include "TFNModalContainerViewControllerDelegate-Protocol.h"
#include "TFNModalSheetLayoutModeController-Protocol.h"
#include "TFNModalSheetTransitioningDelegate.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"
#include "TFNPopoverSourceSpecification-Protocol.h"
#include "UIAdaptivePresentationControllerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "XNAVConfigurationDelegating-Protocol.h"

@class NSString, UIBarButtonItem, UIColor, UITapGestureRecognizer, UIView, UIViewController, UIWindow;

@interface TFNModalSheetViewController : UIViewController <XNAVConfigurationDelegating, TFNLayoutMetricsEnvironment, UIAdaptivePresentationControllerDelegate, UIGestureRecognizerDelegate, TFNModalContainerViewController, TFNPopoverSourceSpecification> {
    /* instance variables */
    TFNModalSheetTransitioningDelegate *_modalSheetTransitioningDelegate;
    UIViewController *_presentingFromViewController;
    UIViewController *_dismissingFromViewController;
    UIWindow *_presentedFromWindow;
    _Bool _isTransitioningToTraitCollection;
    _Bool _notifiedDelegateOfLayoutModeTransition;
    TFNBasicTransitionCoordinator *_layoutModeTransitionCoordinator;
    double _statusBarHeightOnLayout;
    _Bool _animatingPresentationTransition;
    _Bool _presented;
    _Bool _dismissedExternal;
    _Bool _redisplaying;
    double _assignedMaximumHeightForSlideover;
    double _currentHeight;
    id <TFNModalSheetLayoutModeController> _layoutModeController;
}

@property (readonly, nonatomic) UIViewController *xnav_childForNavigationConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) _Bool animatingLayoutModeTransition;
@property (nonatomic) _Bool setupForPresentation;
@property (nonatomic) _Bool dismissFromGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapToDismissGesture;
@property (copy, nonatomic) id /* block */ expandedStateChanged;
@property (readonly, nonatomic) UIView *slideOverModalContentView;
@property (retain, nonatomic) UIViewController *modalContentViewController;
@property (nonatomic) _Bool shouldSendAppearanceTransitionsToPresentingViewController;
@property (weak, nonatomic) id <TFNModalSheetViewControllerLayoutDelegate> layoutDelegate;
@property (nonatomic) _Bool shouldUsePreferredContentSizeForPreferredHeight;
@property (nonatomic) _Bool expandable;
@property (nonatomic) _Bool fullScreenExpansionDisabled;
@property (readonly, nonatomic) _Bool expanded;
@property (nonatomic) double maximumHeightForSlideover;
@property (nonatomic) double maximumHeightForPopover;
@property (nonatomic) long long popoverWidth;
@property (nonatomic) double slideOverTopInset;
@property (nonatomic) _Bool treatsNavigationBarAsTopAttached;
@property (nonatomic) _Bool clipsModalContent;
@property (readonly, nonatomic) double preferredHeight;
@property (readonly, nonatomic) _Bool fullScreen;
@property (nonatomic) long long preferredPresentationStyle;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } modalContentViewVisibleEdgeInsets;
@property (retain, nonatomic) UIColor *chromeColor;
@property (retain, nonatomic) UIColor *slideoverHandleColor;
@property (nonatomic) _Bool slideoverContentExtendsBelowHandle;
@property (readonly, nonatomic) double slideoverContentTopOffset;
@property (nonatomic) _Bool dismissableWithGesture;
@property (nonatomic) _Bool dismissableWithPanGestureAboveModal;
@property (nonatomic) _Bool topAreaDismissGestureEnabled;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id <TFNModalContainerViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) _Bool allowCenteredPresentationWithoutSource;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithModalContentViewController:(id)controller;
- (id)_tfn_createLayoutControllerForMode:(long long)mode;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)dealloc;
- (void)_addModalContentViewControllerView;
- (_Bool)isFullScreen;
- (double)calculatePreferredHeight;
- (void)setPreferredHeight:(double)height animated:(_Bool)animated completion:(id /* block */)completion;
- (void)updatePreferredHeightAnimated:(_Bool)animated completion:(id /* block */)completion;
- (_Bool)_allowsExpansionToFullScreen;
- (void)expandFullScreenAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)expandFullScreenWithNavigationBlock:(id /* block */)block animated:(_Bool)animated completion:(id /* block */)completion;
- (_Bool)_allowsCollapseFromFullScreen;
- (void)collapseFullScreenAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)_tfn_updateLayoutModeConfiguration;
- (_Bool)isDismissableWithGesture;
- (void)contextDefiningModalContentViewControllerDidDismissCurrentContextViewController;
- (void)didStartEditingAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)didEndEditingAnimated:(_Bool)animated completion:(id /* block */)completion;
- (long long)preferredStatusBarStyle;
- (id)childViewControllerForStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)childViewControllerForStatusBarHidden;
- (void)_tfn_windowSafeAreaInsetsDidChange:(id)change;
- (void)_keyboardDidChange:(id)change;
- (void)_voiceOverStatusDidChange:(id)change;
- (void)updateModalDidPanDelegateIfNeededWithMode:(long long)mode;
- (void)setupPreferredHeightForPresentationIfNeeded;
- (_Bool)_tfn_requiresRedisplayToChangeToLayoutMode:(long long)mode;
- (void)updateModalContentFrames;
- (double)topAttachedNavigationBarExcess;
- (id)rootTraitCollection;
- (id)rootWindow;
- (long long)_calculateLayoutMode;
- (void)setLayoutModeController:(id)controller;
- (id)layoutModeMutableHeightController;
- (void)_tfn_updateModalPresentationStyle;
- (_Bool)getNavigationBarFrameHeightAdjustment:(inout double *)adjustment yOffset:(inout double *)offset;
- (long long)adaptivePresentationStyleForPresentationController:(id)controller traitCollection:(id)collection;
- (_Bool)presentationControllerShouldDismiss:(id)dismiss;
- (void)presentationControllerWillDismiss:(id)dismiss;
- (void)presentationControllerDidDismiss:(id)dismiss;
- (void)_updateLayoutMode;
- (void)_updateLayoutMode:(long long)mode callLayoutModeTransitionDelegate:(_Bool)delegate animated:(_Bool)animated completion:(id /* block */)completion;
- (void)_updateLayoutMode:(long long)mode callLayoutModeTransitionDelegate:(_Bool)delegate animated:(_Bool)animated navigationBlock:(id /* block */)block completion:(id /* block */)completion;
- (void)_animateDelegateLayoutModeTransitionSynchronouslyIfNeededWithOldLayoutMode:(long long)mode;
- (void)_beginDelegateLayoutModeTransitionTo:(long long)to fromLayoutMode:(long long)mode withDuration:(double)duration;
- (void)_animateDelegateLayoutModeTransition;
- (void)_completeDelegateLayoutModeTransition;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (_Bool)becomeFirstResponder;
- (id)keyCommands;
- (void)handleCloseKeyCommand;
- (_Bool)_canHandleCloseKeyCommand;
- (void)handleEscapeKeyCommand;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (id)tfn_modalContainerViewController;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)container withParentContainerSize:(struct CGSize { double x0; double x1; })size;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)updateModalContentSafeAreaInsets;
- (double)superviewOffsetForInCallStatusBar;
- (void)willTransitionToTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
- (void)traitCollectionDidChange:(id)change;
- (void)_updateModalContentViewControllerTraitCollection:(id)collection;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (void)dismissWithGesture;
- (void)setTapEmptyAreaToDismiss;
- (void)tapToDismiss;
- (void)expandedStateChangedTo:(_Bool)to;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)isExpanded;
- (void)tfnPresentedCustomPresentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)dismissViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (_Bool)accessibilityPerformEscape;
- (_Bool)isExpandable;
- (_Bool)isFullScreenExpansionDisabled;
- (_Bool)isAnimatingPresentationTransition;
- (void)setAnimatingPresentationTransition:(_Bool)transition;
- (_Bool)isPresented;
- (void)setPresented:(_Bool)presented;
- (_Bool)isDismissedExternal;
- (void)setDismissedExternal:(_Bool)external;
- (double)currentHeight;
- (void)setCurrentHeight:(double)height;
- (id)layoutModeController;
- (_Bool)isRedisplaying;
- (void)setRedisplaying:(_Bool)redisplaying;
- (_Bool)isSlideoverContentExtendsBelowHandle;
- (_Bool)isDismissableWithPanGestureAboveModal;
- (_Bool)isAnimatingLayoutModeTransition;
- (_Bool)isSetupForPresentation;

@end

#endif /* TFNModalSheetViewController_h */

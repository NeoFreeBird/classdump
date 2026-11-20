//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem25TrayManagerViewController_h
#define _TtC13XDesignSystem25TrayManagerViewController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"
#include "XDSPresentationSourceReceiving-Protocol.h"

@class NSArray, Swift.Bool, UIViewController, XDesignSystem.PresenterInterfaceStyleAdoption, XDesignSystem.TrayAnchorMorphTransition ?, XDesignSystem.TrayConfiguration, XDesignSystem.TrayContainerView ?, XDesignSystem.TrayContentViewController, XDesignSystem.TrayContextualTransition ?, XDesignSystem.TrayManagerView ?, XDesignSystem.TrayManagerViewController.DismissTrigger ?, XDesignSystem.TrayMorph ?, XDesignSystem.TrayNavigationViewController, _$s12CoreGraphics7CGFloatVMn, _$sSa -> __C.CGRect ?, _$sSo11UIResponderCSgXw, _$sSo12UIScrollViewCSgXw, _$sSo22UIPanGestureRecognizerCSg, _$sSo22UITapGestureRecognizerCSg, _$sSo22UIViewPropertyAnimatorCSg, _$sSo22UIViewPropertyAnimatorCSgXw, _$syycSg, __C.CGAffineTransform, __C.CGPoint ?, __C.CGRect;

@interface XDesignSystem.TrayManagerViewController : UIViewController <UIViewControllerTransitioningDelegate, XDSPresentationSourceReceiving, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    XDesignSystem.TrayConfiguration configuration;
    XDesignSystem.TrayContentViewController contentViewController;
    (() -> ())? onDismiss;
    XDesignSystem.TrayManagerViewController.DismissTrigger ? dismissTrigger;
    XDesignSystem.TrayContextualTransition ? presentTransition;
    XDesignSystem.TrayContextualTransition ? dismissTransition;
    XDesignSystem.TrayAnchorMorphTransition ? anchorMorph;
    XDesignSystem.TrayMorph ? trayMorph;
    XDesignSystem.TrayNavigationViewController navigationViewController;
    XDesignSystem.TrayManagerView ? managerView;
    XDesignSystem.TrayContainerView ? containerView;
    __C.UIPanGestureRecognizer? panGesture;
    __C.UITapGestureRecognizer? tapGesture;
    __C.UIViewPropertyAnimator? presentAnimator;
    weak __C.UIViewPropertyAnimator? retargetableSlideAnimator;
    Swift.Bool isSlideCarryingReflow;
    __C.UIViewPropertyAnimator? dismissAnimator;
    __C.UIViewPropertyAnimator? panSpringBackAnimator;
    __C.UIViewPropertyAnimator? deferredFrameAnimator;
    (() -> ())? pendingDismissCompletion;
    weak __C.UIResponder? interruptedFirstResponder;
    Swift.Bool didEarlyRestoreKeyboard;
    Swift.Bool isInterruptedKeyboardPendingHide;
    Swift.Bool hasNotifiedPresentFinished;
    Swift.Array -> __C.CGRect ? divisionFramesAtLastLayout;
    Swift.Bool hingeLayoutPending;
    Swift.Bool hingeLayoutRetryScheduled;
    __C.CGAffineTransform transformBeforeDrag;
    __C.CGRect swipeUpRestingFrame;
    nominal type descriptor for CoreGraphics.CGFloat swipeUpLiftBeforeDrag;
    Swift.Bool panIsDrivingCard;
    Swift.Bool panStartedInsideScrollRegion;
    Swift.Bool panTouchBeganOnHeaderChrome;
    weak __C.UIScrollView? panLockedScrollRegion;
    Swift.Bool swipeUpDidCommit;
    __C.CGPoint ? swipeUpCommitGestureVelocity;
    Swift.Bool hasPresented;
    XDesignSystem.PresenterInterfaceStyleAdoption presenterInterfaceStyleAdoption;
    Swift.Bool isInteractionLocked;
    Swift.Bool isKeyboardFollowInFlight;
    weak __C.UIScrollView? contractCheckedScrollRegion;
}

@property (nonatomic, readonly) _Bool prefersStatusBarHidden;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) NSArray *keyCommands;

/* instance methods */
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (void)xds_willPresentFromViewController:(id)controller;
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)traitCollectionDidChange:(id)change;
- (void)handleEscapeCommand;
- (_Bool)accessibilityPerformEscape;
- (void)handleTap:(id)tap;
- (void)handlePan:(id)pan;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC13XDesignSystem25TrayManagerViewController_h */

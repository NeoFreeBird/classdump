//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNToastViewController_h
#define TFNToastViewController_h
@import Foundation;

#include "T1ToastContainerView.h"
#include "TFNToastContentViewDelegate-Protocol.h"
#include "TFNToastContentViewable-Protocol.h"
#include "TFNToastViewControllerDelegate-Protocol.h"
#include "TFNToastViewModel-Protocol.h"
#include "TFNToastWindow.h"
#include "TFNToaster.h"
#include "TFNTouchDownGestureRecognizer.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "XDSToastContentView.h"

@class NSLayoutConstraint, NSString, UIPanGestureRecognizer, UIView, UIViewController;

@interface TFNToastViewController : UIViewController <UIGestureRecognizerDelegate, TFNToastContentViewDelegate>

@property (retain, nonatomic) T1ToastContainerView *toastContainerView;
@property (retain, nonatomic) UIView<TFNToastContentViewable> *currentToastView;
@property (retain, nonatomic) XDSToastContentView *currentXDSToastView;
@property (retain, nonatomic) UIView *currentContentView;
@property (retain, nonatomic) id <TFNToastViewModel> currentToast;
@property (nonatomic) _Bool highlighted;
@property (retain, nonatomic) TFNTouchDownGestureRecognizer *toastInteractionRecognizer;
@property (retain, nonatomic) TFNTouchDownGestureRecognizer *toastTouchDownScalingRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *toastPanRecognizer;
@property (nonatomic) double currentTop;
@property (nonatomic) double baselineTop;
@property (nonatomic) _Bool isUserInteractingWithToast;
@property (nonatomic) double minimizedToastViewHeight;
@property (nonatomic) double contentFittingWidth;
@property (retain, nonatomic) UIView *activityProgressView;
@property (retain, nonatomic) NSLayoutConstraint *activityProgressTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *activityProgressCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *activityProgressSpanWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *activityProgressMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *activityProgressPreferredWidthConstraint;
@property (nonatomic) _Bool currentToastsUpdateEnabled;
@property (weak, nonatomic) TFNToaster<TFNToastViewControllerDelegate> *toaster;
@property (weak, nonatomic) TFNToastWindow *toastWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithToaster:(id)toaster;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)loadView;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillLayoutSubviews;
- (void)fadeOutCurrentContainerForReplacement;
- (void)reset;
- (double)_tfn_activityProgressTopOffsetBelowToast:(_Bool)toast;
- (void)_tfn_updateActivityProgressPlacementBelowToast:(_Bool)toast;
- (void)_tfn_setConstant:(double)constant onConstraint:(id)constraint;
- (void)_tfn_layoutActivityProgressBelowToast:(_Bool)toast;
- (void)presentToast:(id)toast withStyle:(unsigned long long)style toastsUpdateEnabled:(_Bool)enabled animated:(_Bool)animated completion:(id /* block */)completion;
- (id)_tfn_makeXDSContentViewForToast:(id)toast bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)toastTimerDidStartWithTimeInterval:(double)interval;
- (void)dismissCurrentToastWithStyle:(unsigned long long)style animated:(_Bool)animated completion:(id /* block */)completion;
- (void)_tfn_dismissToast:(id)toast withStyle:(unsigned long long)style byGesture:(_Bool)gesture animated:(_Bool)animated completion:(id /* block */)completion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tfn_toastHorizontalPlacementBounds;
- (double)_tfn_toastWidth;
- (double)_tfn_toastHeightForWidth:(double)width maximumHeight:(double)height;
- (double)_tfn_currentToastMaximumHeight;
- (void)_tfn_updateToastMetricsForLayout;
- (void)_tfn_applyToastContainerPlacement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tfn_toastContainerFrame;
- (void)_tfn_touchDownInteractionAction:(id)action;
- (void)_tfn_touchDownScalingAction:(id)action;
- (void)_tfn_panAction:(id)action;
- (void)_tfn_configureAccesibilityForToast:(id)toast;
- (void)_tfn_accessibilityInvokePrimaryAction;
- (void)_tfn_accessibilityInvokeAlternateAction;
- (void)_tfn_accessibilityInvokeDismissAction;
- (void)_tfn_accessibilityElementDidBecomeFocused;
- (void)_tfn_accessibilityElementDidLoseFocus;
- (void)toastView:(id)view didInvokeToastAction:(id)action actionView:(id)view;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;

@end

#endif /* TFNToastViewController_h */

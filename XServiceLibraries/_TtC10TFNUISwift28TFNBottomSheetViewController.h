//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift28TFNBottomSheetViewController_h
#define _TtC10TFNUISwift28TFNBottomSheetViewController_h
@import Foundation;

#include "TFNViewController.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class TFNUISwift.TFNBottomSheetDragHandle, TFNUISwift.TFNBottomSheetState, TFNUISwift.TFNBottomSheetStyle, TFNUISwift.TFNBottomSheetViewController.DismissTrigger ?, TFNUISwift.TFNBottomSheetViewControllerDelegate ?, TFNUISwift.TFNBottomSheetViewControllerLayoutDelegate ?, _$sSo12UIScrollViewCSg, _$sSo16UIViewControllerC, _$sSo22UIPanGestureRecognizerCSg;

@interface TFNUISwift.TFNBottomSheetViewController : TFNViewController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> { // (Swift)
    /* instance variables */
    __C.UIViewController contentViewController;
    TFNUISwift.TFNBottomSheetStyle style;
    TFNUISwift.TFNBottomSheetDragHandle dragHandle;
    __C.UIPanGestureRecognizer? panGestureRecognizer;
    TFNUISwift.TFNBottomSheetState currentState;
    TFNUISwift.TFNBottomSheetState stateAtStartOfDrag;
    __C.UIScrollView? scrollViewAtStartOfDrag;
    TFNUISwift.TFNBottomSheetViewControllerDelegate ? delegate;
    TFNUISwift.TFNBottomSheetViewController.DismissTrigger ? dismissTrigger;
    TFNUISwift.TFNBottomSheetViewControllerLayoutDelegate ? layoutDelegate;
}

@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;
@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)presentationControllerForPresentedViewController:(id)controller presentingViewController:(id)controller sourceViewController:(id)controller;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)handleDrag:(id)drag;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10TFNUISwift28TFNBottomSheetViewController_h */

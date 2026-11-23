//
#ifndef TFNAlertViewController_h
#define TFNAlertViewController_h
@import Foundation;

#include "TFNAlertViewControllerDelegate-Protocol.h"
#include "TFNDismissDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSArray, NSString, UIView, UIViewController, UIWindow;
@protocol TFNDismissableView;

@interface TFNAlertViewController : UIViewController <TFNDismissDelegate, TFNLayoutMetricsEnvironment> {
    /* instance variables */
    UIView<TFNDismissableView> *_alertView;
    UIView *_backgroundView;
    _Bool _didAppear;
    UIWindow *_backgroundWindow;
}

@property (retain, nonatomic) NSString *headline;
@property (retain, nonatomic) NSString *descriptionMessage;
@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *overlayView;
@property (weak, nonatomic) id <TFNAlertViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAlertView:(id)view backgroundWindow:(id)window;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)_layoutViewsAnimated:(_Bool)animated;
- (void)_layoutViewsWithinSize:(struct CGSize { double x0; double x1; })size animated:(_Bool)animated;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)_setupModalTransition;
- (void)_teardownModalTransition;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (void)_animateOut;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)dismissableViewDidDismiss:(id)dismiss;
- (void)dismiss:(id)dismiss;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;

@end

#endif /* TFNAlertViewController_h */

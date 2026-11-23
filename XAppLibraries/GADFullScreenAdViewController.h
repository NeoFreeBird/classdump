//
#ifndef GADFullScreenAdViewController_h
#define GADFullScreenAdViewController_h
@import Foundation;

#include "GADCloseButton.h"
#include "GADEventContext.h"
#include "GADMonitorOwner-Protocol.h"
#include "GADObserverCollection.h"
#include "GADPresenting-Protocol.h"

@class NSMutableArray, NSString, UIView, UIViewController, UIWindowScene;

@interface GADFullScreenAdViewController : UIViewController <GADPresenting, GADMonitorOwner> {
    /* instance variables */
    _Bool _viewWasConfigured;
    _Bool _viewHasAppearedAtLeastOnce;
    _Bool _relinquishScreenCalled;
    _Bool _webViewProcessDidTerminate;
    UIView *_adView;
    NSMutableArray *_monitors;
    GADObserverCollection *_observers;
    GADObserverCollection *_willDeactivateObservers;
    long long _lastOrientation;
    double _backgroundTimeIntervalSinceBoot;
}

@property (readonly, nonatomic) GADCloseButton *closeButton;
@property (nonatomic) unsigned long long closeButtonAnimationStyle;
@property (nonatomic) double closeButtonAnimationDuration;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (nonatomic) unsigned long long adOrientations;
@property (nonatomic) long long forcedAdOrientation;
@property (nonatomic) double orientationUpdateAnimationDuration;
@property (nonatomic) _Bool preferHomeIndicatorHidden;
@property (readonly, nonatomic) _Bool presented;
@property (nonatomic) double maxCroppedWidth;
@property (nonatomic) double maxCroppedHeight;
@property (nonatomic) _Bool shouldAdAutoRotate;
@property (nonatomic) _Bool useAdViewFrameForContentSizePriorToPresentation;
@property (nonatomic) double maxBackgroundTimeIntervalWithoutDismissing;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene;
@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithView:(id)view context:(id)context;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)dealloc;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (void)configureView;
- (_Bool)contentFitsInSize:(struct CGSize { double x0; double x1; })size;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewWillLayoutSubviews;
- (void)addMonitor:(id)monitor;
- (void)handleCloseButtonPressed;
- (void)viewChangedToOrientation:(long long)orientation;
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (void)updateBackgroundTimeIntervalSinceBoot;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)presentFromViewController:(id)controller completion:(id /* block */)completion;
- (void)relinquishScreenWithCompletion:(id /* block */)completion;

@end

#endif /* GADFullScreenAdViewController_h */

//
#ifndef T1SafariViewController_h
#define T1SafariViewController_h
@import Foundation;

#include "SFSafariViewControllerDelegate-Protocol.h"
#include "T1ViewControllerScribeEventObserver.h"
#include "T1WebViewLogger.h"
#include "T1WebViewRedirectTracker.h"
#include "TFNJumpBackToHomeTimelineBehavior-Protocol.h"
#include "TFNPresented-Protocol.h"
#include "TFNViewControllerVisibility-Protocol.h"
#include "TTALegacyWebViewPerspective-Protocol.h"
#include "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSDictionary, NSString, NSURL, SFSafariViewController, TFNTwitterAccount, TFSTwitterScribeContext, UIScreenEdgePanGestureRecognizer, UIViewController;

@interface T1SafariViewController : SFSafariViewController <UIAdaptivePresentationControllerDelegate, SFSafariViewControllerDelegate, TFNPresented, TFNJumpBackToHomeTimelineBehavior, TFNViewControllerVisibility> {
    /* instance variables */
    T1WebViewLogger *_webViewLogger;
    T1WebViewRedirectTracker *_redirectTracker;
    NSString *_scribeComponent;
    NSDictionary *_scribeParameters;
    _Bool _hasDarkBar;
    _Bool _privateSession;
    _Bool _needsUnsafeLinkWarningPresentation;
    T1ViewControllerScribeEventObserver *_scribeVCEventObserver;
    UIViewController *_presenting;
}

@property (weak, nonatomic) UIScreenEdgePanGestureRecognizer *interactiveDismissGestureRecognizer;
@property (readonly, nonatomic) NSURL *rootURL;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) id <TTALegacyWebViewPerspective> sourceStatus;
@property (readonly, nonatomic) _Bool didCompleteInitialLoad;
@property (nonatomic) _Bool shouldOnlyScribeRedirectHosts;
@property (copy, nonatomic) TFSTwitterScribeContext *dwellScribeContext;
@property (retain, nonatomic) NSURL *verifiableTalonURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool visible;

/* instance methods */
- (id)initWithURL:(id)url entersReaderIfAvailable:(_Bool)available;
- (id)initWithURL:(id)url configuration:(id)configuration;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status entersReaderIfAvailable:(_Bool)available scribeComponent:(id)component scribeParameters:(id)parameters;
- (void)viewDidLoad;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillFullyAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewWillFullyDisappear:(_Bool)disappear;
- (void)willRotateToInterfaceOrientation:(long long)orientation duration:(double)duration;
- (void)willTransitionToTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
- (_Bool)accessibilityPerformEscape;
- (long long)preferredStatusBarStyle;
- (void)tfn_previewingStateDidChange;
- (void)tfnPresentedCustomPresentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)safariViewController:(id)controller didCompleteInitialLoad:(_Bool)load;
- (id)safariViewController:(id)controller activityItemsForURL:(id)url title:(id)title;
- (void)safariViewControllerDidFinish:(id)finish;
- (void)safariViewController:(id)controller initialLoadDidRedirectToURL:(id)url;
- (void)safariViewControllerWillOpenInBrowser:(id)browser;
- (void)presentationControllerDidDismiss:(id)dismiss;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeImpressionParameters;
- (void)_t1_enforceFloatingViewsToFront;
- (void)_t1_didFinish;
- (void)_setupWebViewLogger;
- (unsigned long long)_millisecondsSinceImpression;
- (void)_t1_toggleGestureRecognizerForTraitCollection:(id)collection;
- (void)_t1_applicationWillResignActive;
- (void)_t1_applicationDidBecomeActive;
- (void)_t1_userDidTakeScreenshot;
- (void)_t1_verifyTalonURLIfNecessary;
- (void)_t1_presentUnsafeLinkWarning;
- (_Bool)isVisible;

@end

#endif /* T1SafariViewController_h */

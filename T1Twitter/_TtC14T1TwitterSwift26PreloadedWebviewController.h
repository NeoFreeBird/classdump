//
#ifndef _TtC14T1TwitterSwift26PreloadedWebviewController_h
#define _TtC14T1TwitterSwift26PreloadedWebviewController_h
@import Foundation;

#include "T1WebViewController.h"
#include "WKScriptMessageHandler-Protocol.h"

@class Swift.Bool, T1TwitterSwift.PreloadWebviewDelegate ?, T1TwitterSwift.PreloadWebviewDestination ?, T1TwitterSwift.PreloadWebviewLoadingState, _$s7Combine14AnyCancellableCMn ?, _$sSS, _$sSSSg, _$sSd, _$sSo23UIActivityIndicatorViewC, _$sSo32TFSTwitterLegacyScribeLogMethods_p, _$sSo6UIViewC, _$sSo8TFSTimerCSg, __C.CGPoint ?;

@interface T1TwitterSwift.PreloadedWebviewController : T1WebViewController <WKScriptMessageHandler> { // (Swift)
    /* instance variables */
    __C.TFSTwitterLegacyScribeLogMethods scribe;
    T1TwitterSwift.PreloadWebviewLoadingState state;
    T1TwitterSwift.PreloadWebviewDestination ? desiredContent;
    __C.UIView loadingView;
    __C.UIActivityIndicatorView loadingSpinner;
    Swift.Double loadingInterval;
    __C.TFSTimer? loadingTimer;
    nominal type descriptor for Combine.AnyCancellable ? resolvedModeCancellable;
    __C.CGPoint ? lastScrollPosition;
    Swift.Bool didInitialPreload;
    Swift.Bool isFailFastEnabled;
    Swift.Bool didRetryFailedPreload;
    Swift.Bool retriesFailedPreloadWhenVisible;
    Swift.String? failedPreloadEventInfo;
    T1TwitterSwift.PreloadWebviewDelegate ? delegate;
    Swift.Bool shouldAdjustScrollBelowNavBar;
    Swift.String colorTheme;
}

@property (nonatomic, readonly) _Bool tfn_supportsNavigationBarCollapsing;
@property (nonatomic, readonly) _Bool tfn_prefersTabBarShadowHidden;
@property (nonatomic, readonly) _Bool continueOnDisappear;
@property (nonatomic, readonly) _Bool hasCustomNavigationBar;
@property (nonatomic, readonly) _Bool webviewFullSized;

/* instance methods */
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidScroll:(id)scroll;
- (void)didUpdateCurrentURL;
- (void)didUpdateCanGoBack;
- (void)webviewDidAutomaticallyGoBackAfterReactURLChange;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)applicationDidBecomeActive:(id)active;
- (void)dealloc;
- (_Bool)doesURLResultTypeOpenInWebview:(long long)webview;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status entersReaderIfAvailable:(_Bool)available scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)updateConfiguration:(id)configuration;
- (_Bool)shouldContinueOnDisappear;
- (_Bool)shouldWebviewBeFullSized;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (_Bool)shouldStartLoadWithRequest:(id)request navigationType:(long long)type preferences:(id)preferences;
- (void)webView:(id)view decidePolicyForNavigationResponse:(id)response decisionHandler:(id /* block */)handler;
- (void)didFinishLoadingWithError:(id)error;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;

@end

#endif /* _TtC14T1TwitterSwift26PreloadedWebviewController_h */

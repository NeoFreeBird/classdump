//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BaseWebViewController_h
#define T1BaseWebViewController_h
@import Foundation;

#include "CustomWKWebView.h"
#include "PKAddPassesViewControllerDelegate-Protocol.h"
#include "T1WebViewRequestsDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TNLRequestDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "WKNavigationDelegate-Protocol.h"
#include "WKUIDelegate-Protocol.h"

@class NSString, NSURL, NSURLRequest, TFNTwitterAccount, TFNViewController, TFSKVODispatcher, TFSOpenExternalURLSessionManager, TNLRequestOperation, UIBarButtonItem, UIProgressView, UIWindow;

@interface T1BaseWebViewController : TFNViewController <PKAddPassesViewControllerDelegate, WKNavigationDelegate, WKUIDelegate, UIScrollViewDelegate, TFNLayoutMetricsEnvironment, TNLRequestDelegate> {
    /* instance variables */
    UIWindow *_originalWindow;
    TFNTwitterAccount *_account;
    TFSKVODispatcher *_titleKVOer;
    TFSKVODispatcher *_URLKVOer;
    TFSKVODispatcher *_estimatedProgressKVOer;
    TFSKVODispatcher *_canGoBackKVOer;
    TFSKVODispatcher *_canGoForwardKVOer;
    _Bool _silenceNetworkActivity;
    _Bool _showingAlertView;
    _Bool _dismissAfterAppleDeepLink;
    long long _activeRequests;
    double _lastWebPopoverPresentationTime;
}

@property (retain, nonatomic) CustomWKWebView *webView;
@property (retain, nonatomic) TNLRequestOperation *passbookCheckOperation;
@property (nonatomic) _Bool forceReloadCurrentURLOnBecomeActive;
@property (retain, nonatomic) TFSOpenExternalURLSessionManager *openExternalURLSessionManager;
@property (copy, nonatomic) NSURLRequest *currentURLRequest;
@property (copy, nonatomic) NSURLRequest *rootURLRequest;
@property (nonatomic) _Bool isAuthenticated;
@property (copy, nonatomic) NSURL *rootURL;
@property (copy, nonatomic) NSURL *currentURL;
@property (copy, nonatomic) NSString *webViewHTMLTitle;
@property (readonly, nonatomic) unsigned long long loadsMadeForCurrentNavigation;
@property (readonly, nonatomic) _Bool hasWebViewStartedLoadingHTMLContent;
@property (readonly, nonatomic) _Bool didLoadOnce;
@property (readonly, nonatomic) _Bool usingNonPersistentDataStore;
@property (readonly, nonatomic) _Bool continueOnDisappear;
@property (readonly, nonatomic) _Bool webviewFullSized;
@property (readonly, nonatomic) _Bool hideInputAccessoryView;
@property (retain, nonatomic) UIBarButtonItem *backItem;
@property (retain, nonatomic) UIBarButtonItem *forwardItem;
@property (retain, nonatomic) UIBarButtonItem *actionItemWithIcon;
@property (retain, nonatomic) UIBarButtonItem *closeItem;
@property (retain, nonatomic) UIProgressView *progressView;
@property (nonatomic) _Bool shouldHideProgressBar;
@property (nonatomic) _Bool shouldCustomizeProgressBar;
@property (nonatomic) _Bool shouldDisableBackForwardNavigationGestures;
@property (nonatomic) _Bool shouldDisableUnifiedCardsPrefetchCache;
@property (nonatomic) _Bool shouldAdjustTextSizes;
@property (nonatomic) _Bool allowAdjustTextSizes;
@property (nonatomic) _Bool shouldRefreshByCommand;
@property (weak, nonatomic) id <T1WebViewRequestsDelegate> requestsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedProcessPool;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)_updateWebNavigationBackButton;
- (void)_updateWebNavigationForwardButton;
- (void)_updateWebNavigation;
- (void)_handleContentSizeCategoryDidChange:(id)change;
- (int)textSizePercentageFor:(id)_for;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (_Bool)extendedLayoutIncludesOpaqueBars;
- (void)didReceiveMemoryWarning;
- (void)applicationDidBecomeActive:(id)active;
- (void)viewWillAppear:(_Bool)appear;
- (void)preload;
- (void)setupDelegates;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)tfn_previewingStateDidChange;
- (void)_t1_stopLoadingForDisappearance;
- (void)loadInitialURLIfRequired;
- (void)_t1_loadInitialURL;
- (void)back:(id)back;
- (void)forward:(id)forward;
- (void)refresh:(id)refresh;
- (void)reload:(id)reload;
- (void)load:(id)load sender:(id)sender;
- (id)shareMenuActionItemsForBarButtonItem:(id)item;
- (void)tweet:(id)tweet;
- (void)close:(id)close;
- (void)handleRefreshKeyCommand;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (id)protocolHandlerContext;
- (unsigned long long)openExternalURLAndDismissOnSuccess:(id)success;
- (_Bool)_shouldDismissAfterOpenExternalURWithURL:(id)url result:(unsigned long long)result;
- (_Bool)_isGoogleAuthenticatorScheme:(id)scheme;
- (void)_layoutProgressView;
- (void)_didCompleteInitialPrefetchAttemptForURL:(id)url withResponse:(id)response;
- (void)_resetCurrentNavigationLoadState;
- (void)didReceiveNavigationRequestOfType:(long long)type url:(id)url;
- (void)willStartLoadingNavigationRequestOfType:(long long)type;
- (_Bool)shouldStartLoadWithRequest:(id)request navigationType:(long long)type preferences:(id)preferences;
- (void)didStartLoading;
- (void)didFinishLoadingWithError:(id)error;
- (void)logWebViewProgressWithEstimatedProgressValue:(double)value;
- (void)didUpdateCanGoBack;
- (void)didUpdateCurrentURL;
- (id)updateConfiguration:(id)configuration;
- (void)addPassesViewControllerDidFinish:(id)finish;
- (void)_checkURLForPassbookContent:(id)content sourceError:(id)error;
- (_Bool)_loadPassbookPassWithResponse:(id)response data:(id)data;
- (_Bool)_installPassbookPassFromData:(id)data;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action preferences:(id)preferences decisionHandler:(id /* block */)handler;
- (void)webView:(id)view decidePolicyForNavigationResponse:(id)response decisionHandler:(id /* block */)handler;
- (void)webView:(id)view didStartProvisionalNavigation:(id)navigation;
- (void)webView:(id)view didReceiveServerRedirectForProvisionalNavigation:(id)navigation;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
- (void)webView:(id)view didFailNavigation:(id)navigation withError:(id)error;
- (id)webView:(id)view createWebViewWithConfiguration:(id)configuration forNavigationAction:(id)action windowFeatures:(id)features;
- (long long)unifiedWebView:(id)view handleFinishingLoadWithError:(id)error;
- (void)shouldStartLoadingRequest:(id)request navigationAction:(id)action preferences:(id)preferences decisionHandler:(id /* block */)handler;
- (void)applyColorThemeCookieAndContinueNavigationAction:(long long)action url:(id)url preferences:(id)preferences decisionHandler:(id /* block */)handler;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewWillBeginDecelerating:(id)decelerating;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (_Bool)scrollViewShouldScrollToTop:(id)top;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)_updateScrollIndicatorStyleForCurrentTheme;
- (void)traitCollectionDidChange:(id)change;
- (void)viewControllerDidPresent:(id)present;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (_Bool)isUsingNonPersistentDataStore;
- (_Bool)shouldContinueOnDisappear;
- (_Bool)shouldWebviewBeFullSized;
- (_Bool)shouldHideInputAccessoryView;
- (_Bool)shouldForceReloadCurrentURLOnBecomeActive;

@end

#endif /* T1BaseWebViewController_h */

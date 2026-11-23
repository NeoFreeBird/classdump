//
#ifndef T1WebViewController_h
#define T1WebViewController_h
@import Foundation;

#include "T1AntiSpamHitTestViewDelegate-Protocol.h"
#include "T1BaseWebViewController.h"
#include "T1ComposerPresenting-Protocol.h"
#include "T1WebViewLogger.h"
#include "T1WebViewRedirectTracker.h"
#include "T1WebViewRequestsDelegate-Protocol.h"
#include "TFNJumpBackToHomeTimelineBehavior-Protocol.h"
#include "TFNPresented-Protocol.h"
#include "TTALegacyWebViewPerspective-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSURLRequest, TFNTwitterAccount, TFNTwitterURLParserResult, TFSTwitterScribeContext, UIBarButtonItem, UIScrollView, UIView, UIViewController, XNAVConfiguration;

@interface T1WebViewController : T1BaseWebViewController <T1WebViewRequestsDelegate, XNAVConfigurationProviding, T1AntiSpamHitTestViewDelegate, T1ComposerPresenting, TFNPresented, TFNJumpBackToHomeTimelineBehavior> {
    /* instance variables */
    _Bool _userDidNavigate;
    _Bool _viewDidInitiallyAppear;
    TFNTwitterURLParserResult *_pendingURLParserResult;
    NSString *_restartSuspensionToken;
    NSString *_scribeComponent;
    NSDictionary *_scribeParameters;
    NSURLRequest *_pendingSignedRequest;
    _Bool _viewIsAppearing;
    _Bool _lastRedirectWentNative;
    _Bool _insetsWebViewByHorizontalSafeArea;
    T1WebViewRedirectTracker *_redirectTracker;
}

@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;
@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) _Bool errorAlertControllerPresented;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (nonatomic) long long state;
@property (retain, nonatomic) T1WebViewLogger *webViewLogger;
@property (retain, nonatomic) NSMutableArray *tapGestureRecognizers;
@property (readonly, nonatomic) UIView *errorMessage;
@property (weak, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) id <TTALegacyWebViewPerspective> sourceStatus;
@property (nonatomic) _Bool usingInlineErrorMessage;
@property (nonatomic) _Bool hidesInlineErrorMessage;
@property (nonatomic) _Bool shouldOnlyScribeRedirectHosts;
@property (copy, nonatomic) TFSTwitterScribeContext *dwellScribeContext;
@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) NSString *displaySubtitle;
@property (nonatomic) _Bool shouldHideSecuredIcon;
@property (nonatomic) _Bool shouldDisableExternalLinks;
@property (nonatomic) _Bool shouldHideNavigationIcons;
@property (nonatomic) _Bool shouldDisplayWebviewHTMLTitle;
@property (nonatomic) _Bool shouldRefetchAccountSettingsOnDismiss;
@property (readonly, nonatomic) _Bool shouldHideShareSheetIcon;
@property (nonatomic) _Bool viewportShouldCoverSafeArea;
@property (readonly, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (readonly, nonatomic) _Bool hasCustomNavigationBar;
@property (readonly, nonatomic) TFNTwitterURLParserResult *currentURLParserResult;
@property (nonatomic) _Bool allowInlineMediaPlayback;
@property (nonatomic) _Bool opaqueBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *presentComposerPlaceholderText;

/* class methods */
+ (void)setupWithUserAgentProvider:(id)provider;

/* instance methods */
- (_Bool)shouldStartLoadWithRequest:(id)request;
- (void)dealloc;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status entersReaderIfAvailable:(_Bool)available scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page shouldHideShareSheetIcon:(_Bool)icon allowInlineMediaPlayback:(_Bool)playback opaqueBackground:(_Bool)background sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page allowInlineMediaPlayback:(_Bool)playback sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (void)_t1_sharedInitWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (_Bool)_shouldRefreshStaleWebSessions;
- (void)_loadSignedRequestAfterRefreshingStaleWebSessions:(id)sessions;
- (_Bool)isUsingNonPersistentDataStore;
- (void)_t1_setCurrentURLParserResultFromURL:(id)url;
- (void)_prepWebViewLoggerForRootURL:(id)url;
- (id)_shareEntityURL;
- (void)share:(id)share;
- (void)webviewDidAutomaticallyGoBackAfterReactURLChange;
- (id)shareMenuActionItemsForBarButtonItem:(id)item;
- (void)tweet:(id)tweet;
- (void)close:(id)close;
- (void)private_composeWithURLString:(id)urlstring;
- (void)sendViaDM:(id)dm;
- (void)private_showActivityViewController:(id)controller entityURL:(id)url entryPointEventInfo:(id)info;
- (id)private_customShareActionItems:(id)items entityURL:(id)url;
- (void)private_logCustomActionSheetAction:(id)action;
- (void)private_logWebViewErrorMessage:(id)message;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (id)protocolHandlerContext;
- (unsigned long long)openExternalURLAndDismissOnSuccess:(id)success;
- (id)_authenticatedMutableURLRequestFromSourceRequest:(id)request parameters:(id)parameters;
- (void)_retryMessageTapped:(id)tapped;
- (id)_t1_authenticatedURLForRootURL:(id)url account:(id)account status:(id)status;
- (void)webView:(id)view decidePolicyForNavigationResponse:(id)response decisionHandler:(id /* block */)handler;
- (void)presentComposer;
- (void)didReceiveNavigationRequestOfType:(long long)type url:(id)url;
- (void)willStartLoadingNavigationRequestOfType:(long long)type;
- (_Bool)shouldStartLoadWithRequest:(id)request navigationType:(long long)type preferences:(id)preferences;
- (void)didFinishLoadingWithError:(id)error;
- (void)logWebViewProgressWithEstimatedProgressValue:(double)value;
- (id)updateConfiguration:(id)configuration;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewSafeAreaInsetsDidChange;
- (void)didMoveToParentViewController:(id)controller;
- (void)tfn_previewingStateDidChange;
- (void)_setupSubviews;
- (void)_setupAntiSpamHitTestView;
- (void)_setupTitleView;
- (void)_t1_applyInsets;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)_updateNavbarItems:(_Bool)items;
- (void)_updateToolbarItems;
- (void)_updateBars;
- (_Bool)_barButtonsShouldBeOnTop;
- (void)setTitle:(id)title;
- (void)setWebViewHTMLTitle:(id)htmltitle;
- (void)_navBarTapped:(id)tapped;
- (void)_t1_webViewScrollToTop;
- (void)setCurrentURL:(id)url;
- (_Bool)doesURLResultTypeOpenInWebview:(long long)webview;
- (id)displayHTMLTitle;
- (void)updateTitleView;
- (void)_getTitle:(out id *)title accessoryImage:(out id *)image;
- (void)setNeedsTitleViewUpdate;
- (_Bool)_hasAuthorizationHeader:(id)header;
- (void)_openViewControllerForURLParserResult:(id)result;
- (void)didUpdateCurrentURL;
- (void)tfnPresentedCustomPresentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)viewControllerDidPresent:(id)present;
- (void)viewControllerDidDismissAnimated:(_Bool)animated;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (id)tfn_contentScrollView;
- (void)screenTouched;
- (_Bool)accessibilityPerformEscape;
- (id)scribe;
- (id)scribeParameters;
- (id)_scribeParamsWithRootURL:(id)url;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeImpressionParameters;
- (void)scribeDismiss;
- (_Bool)isErrorAlertControllerPresented;

@end

#endif /* T1WebViewController_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ComplatPaywallViewController_h
#define T1ComplatPaywallViewController_h
@import Foundation;

#include "TFNJumpBackToHomeTimelineBehavior-Protocol.h"
#include "WKNavigationDelegate-Protocol.h"
#include "WKUIDelegate-Protocol.h"

@class UIViewController;

@interface T1ComplatPaywallViewController : UIViewController <WKNavigationDelegate, WKUIDelegate, TFNJumpBackToHomeTimelineBehavior> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *entrypoint;
    NSNumber"16@0:8 *webEntrypoint;
    NSNumber"16@0:8 *screen;
    NSNumber"16@0:8 *adoptedSession;
    NSNumber"16@0:8 *adoptedStorefrontCountry;
    NSNumber"16@0:8 *loadMode;
    NSNumber"16@0:8 *eventContext;
    NSNumber"16@0:8 *switches;
    NSNumber"16@0:8 *authStoredSignIn;
    NSNumber"16@0:8 *webView;
    NSNumber"16@0:8 *t1Host;
    NSNumber"16@0:8 *hostSession;
    NSNumber"16@0:8 *screenURL;
    NSNumber"16@0:8 *contentReadyTimeoutTimer;
    NSNumber"16@0:8 *storefrontState;
    NSNumber"16@0:8 *storefrontResolutionTask;
    NSNumber"16@0:8 *sessionProbeTask;
    NSNumber"16@0:8 *isAwaitingSessionProbe;
    NSNumber"16@0:8 *hasDeferredContentReady;
    NSNumber"16@0:8 *hasDeferredDismiss;
    NSNumber"16@0:8 *isPageListening;
    NSNumber"16@0:8 *listeningCount;
    NSNumber"16@0:8 *hasSentPresent;
    NSNumber"16@0:8 *hasRevealedContent;
    NSNumber"16@0:8 *hasTornDown;
    NSNumber"16@0:8 *isShowingFailure;
    NSNumber"16@0:8 *activeStoreSubscriptionsRequestId;
    NSNumber"16@0:8 *lastStoreSnapshot;
    NSNumber"16@0:8 *storeSnapshotTask;
    NSNumber"16@0:8 *accountObserverTokens;
    NSNumber"16@0:8 *dynamicTypeObserver;
    NSNumber"16@0:8 *foregroundObserver;
    NSNumber"16@0:8 *restartSuppressionToken;
    NSNumber"16@0:8 *displayedSessionExpiresAt;
    NSNumber"16@0:8 *loadedTheme;
    NSNumber"16@0:8 *storeKind;
    NSNumber"16@0:8 *currentPurchaseIsPlanChange;
    NSNumber"16@0:8 *didReportAcquireFailure;
    NSNumber"16@0:8 *didReportDroppedMessage;
    NSNumber"16@0:8 *sawPurchase;
    NSNumber"16@0:8 *loadStartedAt;
    NSNumber"16@0:8 *openedAt;
    NSNumber"16@0:8 *sawMainFrameResponse;
    NSNumber"16@0:8 *hasReportedSession;
    NSNumber"16@0:8 *isRecoveryPending;
    NSNumber"16@0:8 *hasAutoRetried;
    NSNumber"16@0:8 *nativeNavigation;
    NSNumber"16@0:8 *presentation;
    NSNumber"16@0:8 *onContentReady;
    NSNumber"16@0:8 *onLoadFailed;
    NSNumber"16@0:8 *onPurchaseStarted;
    NSNumber"16@0:8 *onPurchaseCancelled;
    NSNumber"16@0:8 *onPurchaseFailed;
    NSNumber"16@0:8 *onAcquireSucceeded;
    NSNumber"16@0:8 *onDismissRequested;
    NSNumber"16@0:8 *onDismissalPolicyChange;
    NSNumber"16@0:8 *loadingIndicator;
    NSNumber"16@0:8 *failureIconView;
    NSNumber"16@0:8 *failureTitleLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_failureStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_retryButton;
    NSNumber"16@0:8 *$__lazy_storage_$_closeButton;
}

/* instance methods */
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (void)webView:(id)view decidePolicyForNavigationResponse:(id)response decisionHandler:(id /* block */)handler;
- (id)webView:(id)view createWebViewWithConfiguration:(id)configuration forNavigationAction:(id)action windowFeatures:(id)features;
- (void)webView:(id)view didCommitNavigation:(id)navigation;
- (void)webView:(id)view didFailNavigation:(id)navigation withError:(id)error;
- (void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
- (void)webViewWebContentProcessDidTerminate:(id)terminate;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)retryButtonTapped;
- (void)closeButtonTapped;
- (_Bool)accessibilityPerformEscape;
- (_Bool)allowsJumpBackToHomeTimeline;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1ComplatPaywallViewController_h */

//
#ifndef BRZWebViewController_h
#define BRZWebViewController_h
@import Foundation;

#include "WKNavigationDelegate-Protocol.h"
#include "WKUIDelegate-Protocol.h"

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSURL, UIViewController;

@interface BRZWebViewController : UIViewController <WKNavigationDelegate, WKUIDelegate> { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift webView;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift progressView;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift errorLabel;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift titleObservation;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift progressObservation;
}

@property (nonatomic, copy) NSURL *url;
@property (nonatomic) _Bool animateDismissal;
@property (nonatomic, copy) id /* block */ systemOpenURL;
@property (nonatomic) _Bool openNewWindowLinksInBrowser;

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)dismissModal;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
- (id)webView:(id)view createWebViewWithConfiguration:(id)configuration forNavigationAction:(id)action windowFeatures:(id)features;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;

@end

#endif /* BRZWebViewController_h */

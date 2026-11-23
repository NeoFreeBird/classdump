//
#ifndef ONBWebViewController_h
#define ONBWebViewController_h
@import Foundation;

#include "ONBEntryNavigationDeclaring-Protocol.h"
#include "ONBWebViewControllerDelegate-Protocol.h"
#include "WKNavigationDelegate-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSString, NSURL, TFNViewController, UIScrollView, WKWebView, XNAVConfiguration;

@interface ONBWebViewController : TFNViewController <XNAVConfigurationProviding, WKNavigationDelegate, ONBEntryNavigationDeclaring> {
    /* instance variables */
    NSURL *_url;
    WKWebView *_webView;
    id <ONBWebViewControllerDelegate> _delegate;
}

@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;
@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long entryNavigation;

/* instance methods */
- (id)initWithUrl:(id)url delegate:(id)delegate;
- (void)loadView;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidLoad;
- (_Bool)tfn_logoTitleViewShown;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;

@end

#endif /* ONBWebViewController_h */

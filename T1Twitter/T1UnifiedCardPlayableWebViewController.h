//
#ifndef T1UnifiedCardPlayableWebViewController_h
#define T1UnifiedCardPlayableWebViewController_h
@import Foundation;

#include "T1AdFormatsFeatures.h"
#include "T1WebViewController.h"
#include "TUCComponentView-Protocol.h"
#include "TUCPlayableEventHandler-Protocol.h"
#include "WKScriptMessageHandler-Protocol.h"

@class NSDate, NSString, NSURL, TUCComponentViewEvent, TUCDestinationModel, UIView, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;
@protocol TUCPlayableWebViewControllerDelegate;

@interface T1UnifiedCardPlayableWebViewController : T1WebViewController <WKScriptMessageHandler>

@property (retain, nonatomic) UIView<TUCComponentView> *originComponentView;
@property (retain, nonatomic) TUCDestinationModel *destinationModel;
@property (weak, nonatomic) id <TUCPlayableWebViewControllerDelegate> webDelegate;
@property (retain, nonatomic) T1AdFormatsFeatures *features;
@property (retain, nonatomic) TUCComponentViewEvent *componentViewEvent;
@property (retain, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (retain, nonatomic) NSDate *loadStartDate;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long initialUrlStatus;
@property (retain, nonatomic) id <TUCPlayableEventHandler> playableEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithAccount:(id)account playableDestination:(id)destination originComponentView:(id)view playableEventHandler:(id)handler webDelegate:(id)delegate promotedContent:(id)content componentViewEvent:(id)event sourceStatus:(id)status;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (id)updateConfiguration:(id)configuration;
- (_Bool)shouldHideNavigationIcons;
- (_Bool)shouldHideShareSheetIcon;
- (void)didFinishLoadingWithError:(id)error;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (void)_t1_configureWebView;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (void)_t1_scribeLoadCompleteWithAction:(id)action error:(id)error;
- (void)_t1_presentAppStoreOrOpenApp;

@end

#endif /* T1UnifiedCardPlayableWebViewController_h */

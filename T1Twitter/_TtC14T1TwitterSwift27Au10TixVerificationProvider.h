//
#ifndef _TtC14T1TwitterSwift27Au10TixVerificationProvider_h
#define _TtC14T1TwitterSwift27Au10TixVerificationProvider_h
@import Foundation;

#include "WKNavigationDelegate-Protocol.h"
#include "WKScriptMessageHandler-Protocol.h"

@class NSObject, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _$sSo16UIViewControllerCSg, _$sSo23UIActivityIndicatorViewC, _$sySbcSg;

@interface T1TwitterSwift.Au10TixVerificationProvider : NSObject <WKScriptMessageHandler, WKNavigationDelegate> { // (Swift)
    /* instance variables */
    Swift.String webviewMessageName;
    ((Swift.Bool) -> ())? completion;
    __C.UIViewController? webViewModal;
    __C.UIActivityIndicatorView activityIndicator;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? pollerTask;
}

/* instance methods */
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (void)webView:(id)view didStartProvisionalNavigation:(id)navigation;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)webView:(id)view didFailNavigation:(id)navigation withError:(id)error;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift27Au10TixVerificationProvider_h */

//
#ifndef _TtC14T1TwitterSwift13XNativeBridge_h
#define _TtC14T1TwitterSwift13XNativeBridge_h
@import Foundation;

#include "WKScriptMessageHandler-Protocol.h"

@class NSObject, T1TwitterSwift.XNativeBridgeFeatures ?, _$sSDySS T1TwitterSwift.XNativeBridgeCapability, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _$sSo9WKWebViewCSgXw;

@interface T1TwitterSwift.XNativeBridge : NSObject <WKScriptMessageHandler> { // (Swift)
    /* instance variables */
    Swift.Dictionary empty-list Swift.String T1TwitterSwift.XNativeBridgeCapability capabilities;
    weak __C.WKWebView? webView;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.XNativeBridgeFeatures ? features;
    weak __C.UIViewController? presentingViewController;
}

/* instance methods */
- (void)dealloc;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift13XNativeBridge_h */

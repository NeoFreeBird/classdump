//
#ifndef _TtC20TwitterSubscriptions20ComplatWebviewBridge_h
#define _TtC20TwitterSubscriptions20ComplatWebviewBridge_h
@import Foundation;

#include "WKScriptMessageHandler-Protocol.h"

@class NSObject, TwitterSubscriptions.ComplatInboundMessage _$scSg ->, TwitterSubscriptions.ComplatParseFailure _$scSg ->, _$sSo9WKWebViewCSgXw, _$sySS_SStcSg, _$syycSg;

@interface TwitterSubscriptions.ComplatWebviewBridge : NSObject <WKScriptMessageHandler> { // (Swift)
    /* instance variables */
    TwitterSubscriptions.ComplatInboundMessage _$scSg -> onMessage;
    TwitterSubscriptions.ComplatParseFailure _$scSg -> onParseFailure;
    ((Swift.String, Swift.String) -> ())? onBridgeError;
    (() -> ())? onPreloadReady;
    weak __C.WKWebView? webView;
}

/* instance methods */
- (id)init;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;

@end

#endif /* _TtC20TwitterSubscriptions20ComplatWebviewBridge_h */

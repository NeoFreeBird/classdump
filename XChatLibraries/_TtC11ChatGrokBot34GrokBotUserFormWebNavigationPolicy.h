//
#ifndef _TtC11ChatGrokBot34GrokBotUserFormWebNavigationPolicy_h
#define _TtC11ChatGrokBot34GrokBotUserFormWebNavigationPolicy_h
@import Foundation;

#include "WKNavigationDelegate-Protocol.h"

@class NSObject, Swift.Bool, WKNavigationAction, WKWebView, _$s10Foundation3URLVMn, _$syycSg;

@interface ChatGrokBot.GrokBotUserFormWebNavigationPolicy : NSObject <WKNavigationDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? onFinish;
    nominal type descriptor for Foundation.URL origin;
    Swift.Bool didStartLoad;
}

/* instance methods */
- (void)webView:(WKWebView *)view decidePolicyForNavigationAction:(WKNavigationAction *)action decisionHandler:(id /* block */)handler;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot34GrokBotUserFormWebNavigationPolicy_h */

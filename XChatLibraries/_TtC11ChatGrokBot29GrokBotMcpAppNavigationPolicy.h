//
#ifndef _TtC11ChatGrokBot29GrokBotMcpAppNavigationPolicy_h
#define _TtC11ChatGrokBot29GrokBotMcpAppNavigationPolicy_h
@import Foundation;

#include "WKNavigationDelegate-Protocol.h"

@class NSObject, Swift.Bool, WKNavigationAction, WKWebView;

@interface ChatGrokBot.GrokBotMcpAppNavigationPolicy : NSObject <WKNavigationDelegate> { // (Swift)
    /* instance variables */
    Swift.Bool didLoadHostPage;
}

/* instance methods */
- (void)webView:(WKWebView *)view decidePolicyForNavigationAction:(WKNavigationAction *)action decisionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot29GrokBotMcpAppNavigationPolicy_h */

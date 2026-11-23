//
#ifndef _TtC11ChatGrokBot26GrokBotPageNavigationGuard_h
#define _TtC11ChatGrokBot26GrokBotPageNavigationGuard_h
@import Foundation;

#include "WKNavigationDelegate-Protocol.h"
#include "WKUIDelegate-Protocol.h"

@class NSObject, Swift.Bool, _$s10Foundation3URLVMn ?, _$s10Foundation3URLVMn _$scSg ->, _$syycSg;

@interface ChatGrokBot.GrokBotPageNavigationGuard : NSObject <WKUIDelegate, WKNavigationDelegate> { // (Swift)
    /* instance variables */
    Swift.Bool expectsDocument;
    (() -> ())? onContentProcessEnded;
    nominal type descriptor for Foundation.URL _$scSg -> onOpenLink;
    nominal type descriptor for Foundation.URL ? documentURL;
}

/* instance methods */
- (id)webView:(id)view createWebViewWithConfiguration:(id)configuration forNavigationAction:(id)action windowFeatures:(id)features;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (void)webViewWebContentProcessDidTerminate:(id)terminate;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot26GrokBotPageNavigationGuard_h */

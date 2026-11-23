//
#ifndef GADOMIDWKWebViewJSExecutor_h
#define GADOMIDWKWebViewJSExecutor_h
@import Foundation;

#include "GADOMIDJSExecutor-Protocol.h"

@class NSObject, NSString, WKWebView;

@interface GADOMIDWKWebViewJSExecutor : NSObject <GADOMIDJSExecutor> {
    /* instance variables */
    WKWebView *_webView;
}

@property (readonly, nonatomic) _Bool supportBackgroundThread;
@property (readonly, nonatomic) id jsEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithWebView:(id)view;
- (void)injectJavaScriptFromString:(id)string;

@end

#endif /* GADOMIDWKWebViewJSExecutor_h */

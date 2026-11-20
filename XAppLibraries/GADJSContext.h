//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADJSContext_h
#define GADJSContext_h
@import Foundation;

#include "GADActionURLHandler.h"
#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"
#include "GADJavascriptEvaluating-Protocol.h"
#include "GADWebViewController.h"
#include "GADWebViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface GADJSContext : NSObject <GADWebViewControllerDelegate, GADJavascriptEvaluating, GADEventContextSource> {
    /* instance variables */
    NSMutableArray *_bufferedScripts;
    id /* block */ _loadHTMLURLCompletionHandler;
    GADActionURLHandler *_actionURLHandler;
    NSMutableDictionary *_sharedActionURLHandlers;
    GADEventContext *_eventContext;
    id _messageSource;
}

@property (readonly, nonatomic) GADWebViewController *webViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GADEventContext *context;

/* instance methods */
- (id)initWithConfiguration:(id)configuration eventContext:(id)context messageSource:(id)source;
- (id)initWithConfiguration:(id)configuration eventContext:(id)context;
- (void)loadWithHTMLString:(id)htmlstring baseURL:(id)url completionHandler:(id /* block */)handler;
- (void)loadWithRequest:(id)request completionHandler:(id /* block */)handler;
- (void)dealloc;
- (void)loadRequest:(id)request completionHandler:(id /* block */)handler;
- (id)functionWithName:(id)name;
- (void)registerMessageSource:(id)source forKey:(id)key;
- (void)unregisterMessageHandlerForKey:(id)key;
- (void)evaluateScript:(id)script;
- (void)asyncEvaluateFunction:(id)function parameters:(id)parameters;
- (void)dispatchSDKEvent:(id)sdkevent parameters:(id)parameters;
- (_Bool)webViewController:(id)controller shouldStartLoadWithRequest:(id)request navigationType:(long long)type;
- (void)webViewController:(id)controller openNewTabWithRequest:(id)request;
- (void)webViewControllerDidStartLoad:(id)load;
- (void)webViewControllerDidFinishLoad:(id)load;
- (void)webViewDidFailWithError:(id)error;
- (void)webViewController:(id)controller didFailLoadWithError:(id)error;
- (void)webViewControllerWebContentProcessDidTerminate:(id)terminate;

@end

#endif /* GADJSContext_h */

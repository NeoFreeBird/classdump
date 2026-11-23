//
#ifndef GADNativeAdContext_h
#define GADNativeAdContext_h
@import Foundation;

#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"
#include "GADJSContext.h"
#include "GADJavascriptEvaluating-Protocol.h"

@class NSObject, NSString;

@interface GADNativeAdContext : NSObject <GADEventContextSource, GADJavascriptEvaluating> {
    /* instance variables */
    GADJSContext *_JSContext;
    NSString *_notificationKey;
    GADEventContext *_eventContext;
}

@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)loadWithEventContext:(id)context completionHandler:(id /* block */)handler;
+ (void)loadSharedInstanceWithEventContext:(id)context notificationKey:(id)key completionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithEventContext:(id)context notificationKey:(id)key;
- (void)dealloc;
- (void)setJSContext:(id)jscontext;
- (void)preprocessNativeAdDictionary:(id)dictionary completionHandler:(id /* block */)handler;
- (void)handleImpression:(id)impression;
- (void)handleClick:(id)click;
- (void)handleCustomRenderedNativeImpression:(id)impression completionHandler:(id /* block */)handler;
- (void)handleCustomRenderedNativeClick:(id)click completionHandler:(id /* block */)handler;
- (void)handleOnePointFiveClick:(id)click;
- (void)asyncEvaluateFunction:(id)function parameters:(id)parameters;
- (void)evaluateScript:(id)script;
- (void)dispatchSDKEvent:(id)sdkevent parameters:(id)parameters;

@end

#endif /* GADNativeAdContext_h */

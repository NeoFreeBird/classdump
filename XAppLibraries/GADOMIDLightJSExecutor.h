//
#ifndef GADOMIDLightJSExecutor_h
#define GADOMIDLightJSExecutor_h
@import Foundation;

#include "GADOMIDJSExecutor-Protocol.h"
#include "GADOMIDJSInvoker-Protocol.h"
#include "GADOMIDJSNetworkBridge.h"
#include "GADOMIDJSTimer.h"

@class JSContext, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GADOMIDLightJSExecutor : NSObject <GADOMIDJSExecutor, GADOMIDJSInvoker>

@property (readonly, nonatomic) JSContext *jsContext;
@property (readonly, nonatomic) GADOMIDJSTimer *timer;
@property (readonly, nonatomic) GADOMIDJSNetworkBridge *networkBridge;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) _Bool supportBackgroundThread;
@property (readonly, nonatomic) id jsEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)lightJSExecutor;

/* instance methods */
- (id)initWithTimer:(id)timer networkBridge:(id)bridge dispatchQueue:(id)queue;
- (void)injectJavaScriptFromString:(id)string;
- (void)invokeCallback:(id)callback;
- (void)invokeCallback:(id)callback argument:(id)argument;
- (void)invokeScript:(id)script;
- (void)assertOnJavaScriptQueue;

@end

#endif /* GADOMIDLightJSExecutor_h */

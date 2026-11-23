//
#ifndef GADOMIDJSNetworkBridge_h
#define GADOMIDJSNetworkBridge_h
@import Foundation;

#include "GADOMIDJSInvoker-Protocol.h"

@class NSObject;

@interface GADOMIDJSNetworkBridge : NSObject

@property (weak, nonatomic) id <GADOMIDJSInvoker> jsInvoker;

/* instance methods */
- (void)setupMethodsForJSObject:(id)jsobject;
- (void)downloadJavaScriptResourceWithURL:(id)url successCallback:(id)callback failureCallback:(id)callback;
- (void)handleDownloadedJavaScriptResource:(id)resource successCallback:(id)callback orError:(id)error failureCallback:(id)callback;
- (void)sendURL:(id)url successCallback:(id)callback failureCallback:(id)callback;
- (void)handleSentURLSuccessCallback:(id)callback orError:(id)error failureCallback:(id)callback;
- (void)injectJavaScriptFromURL:(id)url injectionID:(id)id;
- (void)handleInjectJavaScript:(id)script injectionID:(id)id orError:(id)error;
- (unsigned long long)getGADOMIDError:(id)gadomiderror;

@end

#endif /* GADOMIDJSNetworkBridge_h */

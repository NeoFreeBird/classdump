//
#ifndef GADPAWScriptMessageHandler_h
#define GADPAWScriptMessageHandler_h
@import Foundation;

#include "WKScriptMessageHandler-Protocol.h"

@class NSObject, NSString;

@interface GADPAWScriptMessageHandler : NSObject <WKScriptMessageHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)handleGetQueryInfoWithWebView:(id)view frameInfo:(id)info uniqueID:(id)id;
- (void)handleSendQueryInfoWithWebView:(id)view frameInfo:(id)info uniqueID:(id)id signal:(id)signal queryError:(id)error millisecondTTL:(long long)ttl;
- (void)handleGetViewInfoWithWebView:(id)view frameInfo:(id)info uniqueID:(id)id;
- (void)handleGetClickInfoWithWebView:(id)view frameInfo:(id)info uniqueID:(id)id clickString:(id)string;
- (void)handleReportTouchEventWithTouchData:(id)data;
- (void)handleErrorForWebview:(id)webview frameInfo:(id)info uniqueID:(id)id errorString:(id)string;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;

@end

#endif /* GADPAWScriptMessageHandler_h */

//
#ifndef T1WebViewLogger_Protocol_h
#define T1WebViewLogger_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1WebViewLogger <NSObject>

@required

/* required instance methods */
- (void)webViewDidScrollAfterMillis:(unsigned long long)millis;
- (void)webViewClosedAfterMillis:(unsigned long long)millis;
- (void)webViewBrowsingSessionDidStart:(_Bool)start;
- (void)webViewWasDismissedByUserInteraction;
- (void)webViewRedirectsHaveEnded;
- (void)webViewLinkClickedWithURL:(id)url userInitiated:(_Bool)initiated;
- (void)webViewDidFailLoadingAfterMillis:(unsigned long long)millis;
- (void)webViewProgressValueDidChange:(double)change afterMillis:(unsigned long long)millis;
- (void)updateWebViewLoggerWithScribeParams:(id)params currentURL:(id)url rootURL:(id)url;
- (void)webViewDidPuntToApp;

@optional

@end

#endif /* T1WebViewLogger_Protocol_h */

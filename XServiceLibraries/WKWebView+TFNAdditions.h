//
#ifndef WKWebView_TFNAdditions_h
#define WKWebView_TFNAdditions_h
@import Foundation;

@interface WKWebView (TFNAdditions)

/* class methods */
+ (void)load;
+ (id)tfn_defaultUserAgent;
+ (id)tfn_userAgent;
+ (void)tfn_setUserAgent:(id)agent;
+ (void)tfn_clearStoredData:(_Bool)data complete:(id /* block */)complete;
+ (void)tfn_clearStoredDataExcludingCookiesWithComplete:(id /* block */)complete;
+ (void)tfn_evictStoredDataExcludingCookiesIfOlderThan:(double)than;
+ (void)tfn_clearStoredCookieForName:(id)name completionHandler:(id /* block */)handler;
+ (void)tfn_setCookieWithName:(id)name value:(id)value store:(id)store domain:(id)domain completionHandler:(id /* block */)handler;

@end

#endif /* WKWebView_TFNAdditions_h */

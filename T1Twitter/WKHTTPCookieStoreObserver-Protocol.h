//
#ifndef WKHTTPCookieStoreObserver_Protocol_h
#define WKHTTPCookieStoreObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol WKHTTPCookieStoreObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)cookiesDidChangeInCookieStore:(id)store;
- (void)cookiesDidChangeInCookieStore:(id)store;

@end

#endif /* WKHTTPCookieStoreObserver_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

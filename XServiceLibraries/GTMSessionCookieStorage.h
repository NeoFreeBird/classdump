//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GTMSessionCookieStorage_h
#define GTMSessionCookieStorage_h
@import Foundation;

@class NSHTTPCookieStorage, NSMutableArray;

@interface GTMSessionCookieStorage : NSHTTPCookieStorage {
    /* instance variables */
    NSMutableArray *_cookies;
    unsigned long long _policy;
}

/* class methods */
+ (_Bool)hasCookieExpired:(id)expired;

/* instance methods */
- (id)init;
- (id)cookies;
- (void)setCookie:(id)cookie;
- (void)internalSetCookie:(id)cookie;
- (void)setCookies:(id)cookies;
- (void)setCookies:(id)cookies forURL:(id)url mainDocumentURL:(id)url;
- (void)deleteCookie:(id)cookie;
- (id)cookiesForURL:(id)url;
- (void)storeCookies:(id)cookies forTask:(id)task;
- (void)getCookiesForTask:(id)task completionHandler:(id /* block */)handler;
- (id)cookieMatchingCookie:(id)cookie;
- (void)removeExpiredCookies;
- (void)removeAllCookies;
- (unsigned long long)cookieAcceptPolicy;
- (void)setCookieAcceptPolicy:(unsigned long long)policy;

@end

#endif /* GTMSessionCookieStorage_h */

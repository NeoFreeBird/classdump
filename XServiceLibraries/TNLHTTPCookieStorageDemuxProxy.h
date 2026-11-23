//
#ifndef TNLHTTPCookieStorageDemuxProxy_h
#define TNLHTTPCookieStorageDemuxProxy_h
@import Foundation;

#include "TNLSharedCookieStorageProxy.h"

@interface TNLHTTPCookieStorageDemuxProxy : TNLSharedCookieStorageProxy

/* instance methods */
- (void)storeCookies:(id)cookies forTask:(id)task;
- (void)getCookiesForTask:(id)task completionHandler:(id /* block */)handler;

@end

#endif /* TNLHTTPCookieStorageDemuxProxy_h */

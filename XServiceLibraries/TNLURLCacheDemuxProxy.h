//
#ifndef TNLURLCacheDemuxProxy_h
#define TNLURLCacheDemuxProxy_h
@import Foundation;

#include "TNLSharedURLCacheProxy.h"

@interface TNLURLCacheDemuxProxy : TNLSharedURLCacheProxy

/* instance methods */
- (id)cachedResponseForRequest:(id)request;
- (void)storeCachedResponse:(id)response forRequest:(id)request;
- (void)removeCachedResponseForRequest:(id)request;
- (void)storeCachedResponse:(id)response forDataTask:(id)task;
- (void)getCachedResponseForDataTask:(id)task completionHandler:(id /* block */)handler;
- (void)removeCachedResponseForDataTask:(id)task;

@end

#endif /* TNLURLCacheDemuxProxy_h */

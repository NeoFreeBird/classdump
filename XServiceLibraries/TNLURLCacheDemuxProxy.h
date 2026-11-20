//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

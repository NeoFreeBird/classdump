//
#ifndef TNLImpotentURLCache_h
#define TNLImpotentURLCache_h
@import Foundation;

@class NSURLCache;

@interface TNLImpotentURLCache : NSURLCache

/* instance methods */
- (id)init;
- (id)initWithMemoryCapacity:(unsigned long long)capacity diskCapacity:(unsigned long long)capacity directoryURL:(id)url;
- (id)initWithMemoryCapacity:(unsigned long long)capacity diskCapacity:(unsigned long long)capacity diskPath:(id)path;
- (id)cachedResponseForRequest:(id)request;
- (void)storeCachedResponse:(id)response forRequest:(id)request;
- (void)removeCachedResponseForRequest:(id)request;
- (void)removeAllCachedResponses;
- (unsigned long long)memoryCapacity;
- (unsigned long long)diskCapacity;
- (void)setMemoryCapacity:(unsigned long long)capacity;
- (void)setDiskCapacity:(unsigned long long)capacity;
- (unsigned long long)currentMemoryUsage;
- (unsigned long long)currentDiskUsage;

@end

#endif /* TNLImpotentURLCache_h */

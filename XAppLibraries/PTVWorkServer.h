//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWorkServer_h
#define PTVWorkServer_h
@import Foundation;

#include "PTVQueue.h"
#include "PTVQueueDelegate-Protocol.h"
#include "PTVWeakMutableDictionary.h"

@class NSCache, NSMutableDictionary, NSObject, NSString;

@interface PTVWorkServer : NSObject <PTVQueueDelegate> {
    /* instance variables */
    NSCache *_cache;
    NSMutableDictionary *_executing;
    NSMutableDictionary *_should_execute;
    NSMutableDictionary *_id_hash;
    PTVWeakMutableDictionary *_weak_cache;
    PTVQueue *_queue;
    int _instaReject;
}

@property (readonly, nonatomic) NSMutableDictionary *callbacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithQueue:(id)queue;
- (void)didGetMemoryWarning;
- (void)getData:(id)data cachePolicy:(long long)policy shouldCache:(_Bool)cache context:(id)context withImmediateCompletionHandler:(id /* block */)handler eventualCompletionHandler:(id /* block */)handler errorHandler:(id /* block */)handler shouldExecute:(id /* block */)execute getCacheHandler:(id /* block */)handler setCacheHandler:(id /* block */)handler getDataHandler:(id /* block */)handler;
- (void)getAsyncData:(id)data workClient:(id)client cachePolicy:(long long)policy getCacheHandler:(id /* block */)handler setCacheHandler:(id /* block */)handler getDataHandler:(id /* block */)handler;
- (id)getCache:(id)cache context:(id)context cacheHandler:(id /* block */)handler;
- (void)getAsyncData:(id)data cachePolicy:(long long)policy context:(id)context withImmediateCompletionHandler:(id /* block */)handler eventualCompletionHandler:(id /* block */)handler errorHandler:(id /* block */)handler shouldExecute:(id /* block */)execute getCacheHandler:(id /* block */)handler setCacheHandler:(id /* block */)handler getDataHandler:(id /* block */)handler;
- (void)cleanupRequest:(id)request;
- (void)notifyCallbacks:(id)callbacks returnedData:(id)data error:(id)error;
- (void)addShouldExecuteForCacheKey:(id)key shouldEventuallyBlock:(id /* block */)block;
- (id)shouldExecutesForCacheKey:(id)key;
- (_Bool)shouldExecuteGetDataWithEventual:(id /* block */)eventual error:(id /* block */)error context:(id)context forKey:(id)key;
- (id /* block */)defaultCacheHandler;
- (id /* block */)defaultCacheSetter;
- (void)clearCache:(id)cache;
- (void)clearCache;
- (void)setCacheObject:(id)object forKey:(id)key;
- (id)cacheObjectForKey:(id)key;
- (void)rejected:(int)rejected;
- (id)queue;

@end

#endif /* PTVWorkServer_h */

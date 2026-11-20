//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageDiskCache_h
#define TIPImageDiskCache_h
@import Foundation;

#include "TIPGlobalConfiguration.h"
#include "TIPImageCache-Protocol.h"
#include "TIPInspectableCache-Protocol.h"
#include "TIPLRUCache.h"
#include "TIPLRUCacheDelegate-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TIPImageDiskCache : NSObject <TIPLRUCacheDelegate, TIPImageCache, TIPInspectableCache> {
    /* instance variables */
    TIPGlobalConfiguration *_globalConfig;
    NSObject<OS_dispatch_queue> *_manifestQueue;
    unsigned long long _earlyRemovedBytesSize;
    struct _opaque_pthread_mutex_t { long long __sig; signed char __opaque[56]; } _manifestMutex;
    struct { unsigned int manifestIsLoading:1; } _diskCache_flags;
    NSString *_cachePath;
    long long _atomicTotalSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long cacheType;
@property (readonly, nonatomic) TIPLRUCache *manifest;
@property (readonly, nonatomic) unsigned long long totalCost;

/* instance methods */
- (void)dealloc;
- (void)clearImageWithIdentifier:(id)identifier;
- (void)clearAllImages:(id /* block */)images;
- (void)tip_cache:(id)tip_cache didEvictEntry:(id)entry;
- (void)inspect:(id /* block */)inspect;

@end

#endif /* TIPImageDiskCache_h */

//
#ifndef TIPImageMemoryCache_h
#define TIPImageMemoryCache_h
@import Foundation;

#include "TIPGlobalConfiguration.h"
#include "TIPImageCache-Protocol.h"
#include "TIPInspectableCache-Protocol.h"
#include "TIPLRUCache.h"
#include "TIPLRUCacheDelegate-Protocol.h"

@class NSObject, NSString;

@interface TIPImageMemoryCache : NSObject <TIPLRUCacheDelegate, TIPImageCache, TIPInspectableCache> {
    /* instance variables */
    TIPGlobalConfiguration *_globalConfig;
    long long _atomicTotalCost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long cacheType;
@property (readonly, nonatomic) TIPLRUCache *manifest;
@property (readonly, nonatomic) unsigned long long totalCost;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_tip_memoryCache_didReceiveMemoryWarning:(id)warning;
- (void)clearImageWithIdentifier:(id)identifier;
- (void)clearAllImages:(id /* block */)images;
- (void)tip_cache:(id)tip_cache didEvictEntry:(id)entry;
- (void)inspect:(id /* block */)inspect;

@end

#endif /* TIPImageMemoryCache_h */

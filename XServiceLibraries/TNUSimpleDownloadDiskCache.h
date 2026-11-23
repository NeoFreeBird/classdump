//
#ifndef TNUSimpleDownloadDiskCache_h
#define TNUSimpleDownloadDiskCache_h
@import Foundation;

#include "TNLLRUCache.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TNUSimpleDownloadDiskCache : NSObject {
    /* instance variables */
    NSString *_cachePath;
    NSObject<OS_dispatch_queue> *_diskCacheQueue;
    TNLLRUCache *_manifest;
    NSMutableDictionary *_runnningOperations;
    _Bool _pseudoOn;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long maximumCapacity;
@property (readonly) unsigned long long currentUsage;
@property (copy, nonatomic) id /* block */ configurationBlock;

/* class methods */
+ (id)rootDiskCacheDirectoryPath;

/* instance methods */
- (void)setPseudoNetworkProtocolEnabled:(_Bool)enabled;
- (_Bool)pseudoNetworkProtocolEnabled;
- (id)initWithIdentifier:(id)identifier maximumCapacity:(unsigned long long)capacity;
- (void)clearAllCacheEntries;
- (id)simpleDownloadForURL:(id)url completion:(id /* block */)completion;
- (void)startDownload:(id)download completion:(id /* block */)completion;
- (void)cancelAllDownloads:(id)downloads source:(id)source;
- (_Bool)isActivelyDownloadingURL:(id)url;
- (void)cacheLookupForURL:(id)url completion:(id /* block */)completion;
- (void)storeFile:(id)file copyingFile:(_Bool)file forDownloadURL:(id)url completion:(id /* block */)completion;
- (void)private_handleCompletion:(id)completion response:(id)response;
- (void)private_addDownload:(id)download toRunningOperation:(id)operation;
- (void)diskCache_startDownload:(id)download;
- (void)diskCache_startDownload:(id)download withPseudoSupport:(_Bool)support;
- (id)diskCache_findRunningRequestOperation:(id)operation;
- (void)diskCache_storeRunningRequestOperation:(id)operation identifier:(id)identifier;
- (_Bool)diskCache_clearRunningRequestOperation:(id)operation;
- (_Bool)diskCache_shouldPrune:(_Bool)prune;
- (void)diskCache_prune:(_Bool)cache_prune;
- (id)diskCache_loadFromDiskCache:(id)cache;
- (_Bool)diskCache_storeOperationToDiskCache:(id)cache response:(id)response fileURL:(id *)url error:(id *)error;
- (_Bool)diskCache_storeToDiskCache:(id)cache incomingError:(id)error fileURL:(out id *)url error:(out id *)error;
- (void)diskCache_loadDiskCacheManifest;
- (void)diskCache_sortEntries:(id)entries;
- (void)diskCache_populateEntries:(id)entries falseEntryPaths:(id)paths totalSize:(unsigned long long *)size fromEntryURLs:(id)urls;

@end

#endif /* TNUSimpleDownloadDiskCache_h */

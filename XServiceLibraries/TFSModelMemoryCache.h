//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelMemoryCache_h
#define TFSModelMemoryCache_h
@import Foundation;

#include "TFSModelCacheConfiguration.h"
#include "TFSModelCacheLRUList.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TFSModelMemoryCache : NSObject

@property (readonly, nonatomic) TFSModelCacheConfiguration *configuration;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSMutableDictionary *keyToRecord;
@property (readonly, nonatomic) NSMutableDictionary *ownedKeyToOwnerRecords;
@property (readonly, nonatomic) long long LRUCapacity;
@property (readonly, nonatomic) TFSModelCacheLRUList *LRUList;
@property (readonly, nonatomic) NSMutableArray *temporaryNullRecords;
@property (nonatomic) long long temporaryNullRecordSuspensionCount;
@property (readonly, nonatomic) NSMutableSet *observers;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)recordForKey:(id)key;
- (void)forEachKey:(id)key deliverRecordToObserver:(id)observer orAddRecordlessKeyToArray:(id)array withSession:(id)session;
- (void)suspendTemporaryNullRecordCleanupAndRemoveRecordsForKeys:(id)keys addRecords:(id)records session:(id)session;
- (void)_tfsmc_needsSerialQueue_removeRecordsForKeys:(id)keys addRecords:(id)records session:(id)session;
- (void)suspendTemporaryNullRecordCleanup;
- (void)resumeTemporaryNullRecordCleanup;
- (_Bool)addRecordFromDiskIfNotAReplacement:(id)areplacement session:(id)session;
- (void)_tfsmc_needsSerialQueue_removeRecordRecursively:(id)recursively isLRUEviction:(_Bool)lrueviction session:(id)session;
- (void)_tfsmc_needsSerialQueue_addRecord:(id)record;
- (void)_tfsmc_needsSerialQueue_removeRecords:(id)records;
- (void)_tfsmc_needsSerialQueue_removeRecord:(id)record isLRUEviction:(_Bool)lrueviction;
- (long long)recordCount;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (id)diagnosticKeyToRecordCopy;
- (id)diagnosticOwnedKeyToSourceRecordsCopy;

@end

#endif /* TFSModelMemoryCache_h */

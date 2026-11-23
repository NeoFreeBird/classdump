//
#ifndef TFSModelCacheEventCounts_h
#define TFSModelCacheEventCounts_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSModelCacheDataEventCounts.h"

@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TFSModelCacheEventCounts : NSObject <NSCopying> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) NSDictionary *typeNameToDataEventCounts;
@property (readonly) TFSModelCacheDataEventCounts *dataEventCountsForAllTypes;
@property (readonly) long long errorCount;
@property (readonly) long long databaseFileCreationCount;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)incrementMemoryCacheHitCountForTypeNames:(id)names;
- (void)incrementDiskCacheHitCountForTypeName:(id)name;
- (void)incrementDiskCacheMissCountForTypeName:(id)name;
- (void)incrementAddCountForTypeName:(id)name;
- (void)incrementRemoveCountForTypeName:(id)name;
- (void)incrementMemoryCacheRemovalByLostOwnershipCountForTypeName:(id)name;
- (void)incrementMemoryCacheAgeOutCountForTypeName:(id)name;
- (id)_tfsModelCache_needsSerialQueue_countersForTypeName:(id)name;
- (void)incrementErrorCount;
- (void)incrementDatabaseFileCreationCount;

@end

#endif /* TFSModelCacheEventCounts_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCacheRecord_h
#define TFSModelCacheRecord_h
@import Foundation;

#include "TFSModelCacheLRURecord.h"
#include "TFSModelCacheable-Protocol.h"

@class NSSet, NSString;

@interface TFSModelCacheRecord : TFSModelCacheLRURecord

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) id <TFSModelCacheable> object;
@property (readonly, nonatomic) _Bool isAutomaticUncachingEnabled;
@property (readonly, nonatomic) NSSet *ownedKeys;

/* class methods */
+ (id)commaSeparatedKeysOfRecords:(id)records;

/* instance methods */
- (id)initWithKey:(id)key;
- (id)initWithObject:(id)object automaticUncachingEnabled:(_Bool)enabled ownedKeys:(id)keys;
- (_Bool)shouldUpdateUsageTimestampOnDisk;
- (void)clearObject;

@end

#endif /* TFSModelCacheRecord_h */

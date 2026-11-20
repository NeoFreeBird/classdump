//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCacheRecordFromDisk_h
#define TFSModelCacheRecordFromDisk_h
@import Foundation;

#include "TFSModelCacheRecord.h"

@interface TFSModelCacheRecordFromDisk : TFSModelCacheRecord

@property (readonly, nonatomic) long long usageTimestamp;
@property (readonly, nonatomic) _Bool isOwnedOnDisk;

/* instance methods */
- (id)initWithObject:(id)object ownedKeys:(id)keys usageTimestamp:(long long)timestamp retention:(long long)retention;
- (id)initWithObject:(id)object itemResultSet:(id)set;
- (_Bool)shouldUpdateUsageTimestampOnDisk;

@end

#endif /* TFSModelCacheRecordFromDisk_h */

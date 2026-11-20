//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCacheRecordFromMemory_h
#define TFSModelCacheRecordFromMemory_h
@import Foundation;

#include "TFSModelCacheRecord.h"

@interface TFSModelCacheRecordFromMemory : TFSModelCacheRecord

/* instance methods */
- (id)initWithObject:(id)object;

@end

#endif /* TFSModelCacheRecordFromMemory_h */

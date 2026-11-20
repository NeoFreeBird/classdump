//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCacheNullRecord_h
#define TFSModelCacheNullRecord_h
@import Foundation;

#include "TFSModelCacheRecord.h"

@interface TFSModelCacheNullRecord : TFSModelCacheRecord

/* instance methods */
- (id)initWithKey:(id)key;

@end

#endif /* TFSModelCacheNullRecord_h */

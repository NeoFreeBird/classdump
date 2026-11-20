//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCacheLRURecord_h
#define TFSModelCacheLRURecord_h
@import Foundation;

#include "TFSModelCacheLRUList.h"

@class NSObject;

@interface TFSModelCacheLRURecord : NSObject

@property (retain, nonatomic) TFSModelCacheLRUList *LRUList;
@property (retain, nonatomic) TFSModelCacheLRURecord *olderRecord;
@property (retain, nonatomic) TFSModelCacheLRURecord *newerRecord;

/* instance methods */

@end

#endif /* TFSModelCacheLRURecord_h */

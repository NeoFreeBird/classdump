//
#ifndef TFSModelCacheLRUList_h
#define TFSModelCacheLRUList_h
@import Foundation;

#include "TFSModelCacheLRURecord.h"

@class NSObject;

@interface TFSModelCacheLRUList : NSObject

@property (retain, nonatomic) TFSModelCacheLRURecord *leastRecentlyUsedRecord;
@property (retain, nonatomic) TFSModelCacheLRURecord *mostRecentlyUsedRecord;
@property (readonly, nonatomic) long long count;

/* instance methods */
- (void)useRecord:(id)record;
- (void)removeRecord:(id)record;

@end

#endif /* TFSModelCacheLRUList_h */

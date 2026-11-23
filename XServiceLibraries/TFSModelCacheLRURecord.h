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

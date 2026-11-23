//
#ifndef TNUSimpleDownloadCacheEntry_h
#define TNUSimpleDownloadCacheEntry_h
@import Foundation;

#include "TNLLRUEntry-Protocol.h"

@class NSDate, NSObject, NSString;

@interface TNUSimpleDownloadCacheEntry : NSObject <TNLLRUEntry>

@property (readonly, copy, nonatomic) NSString *LRUEntryIdentifier;
@property (readonly, nonatomic) unsigned long long size;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) id <TNLLRUEntry> nextLRUEntry;
@property (weak, nonatomic) id <TNLLRUEntry> previousLRUEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifier:(id)identifier size:(unsigned long long)size;
- (_Bool)shouldAccessMoveLRUEntryToHead;

@end

#endif /* TNUSimpleDownloadCacheEntry_h */

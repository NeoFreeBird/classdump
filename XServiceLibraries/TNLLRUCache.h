//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLLRUCache_h
#define TNLLRUCache_h
@import Foundation;

#include "NSFastEnumeration-Protocol.h"
#include "TNLLRUCacheDelegate-Protocol.h"
#include "TNLLRUEntry-Protocol.h"

@class NSMutableDictionary, NSObject;

@interface TNLLRUCache : NSObject <NSFastEnumeration> {
    /* instance variables */
    struct { _Bool delegateSupportsDidEvictSelector; _Bool delegateSupportsCanEvictSelector; } _flags;
    long long _mutationCheckInteger;
}

@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (weak, nonatomic) id <TNLLRUCacheDelegate> delegate;
@property (readonly, nonatomic) id <TNLLRUEntry> headEntry;
@property (readonly, nonatomic) id <TNLLRUEntry> tailEntry;

/* instance methods */
- (id)init;
- (id)initWithEntries:(id)entries delegate:(id)delegate;
- (void)dealloc;
- (void)internalSetDelegate:(id)delegate;
- (void)addEntry:(id)entry;
- (void)appendEntry:(id)entry;
- (unsigned long long)numberOfEntries;
- (id)entryWithIdentifier:(id)identifier canMutate:(_Bool)mutate;
- (id)entryWithIdentifier:(id)identifier;
- (id)allEntries;
- (void)removeEntry:(id)entry;
- (id)removeTailEntry;
- (void)clearAllEntries;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)state objects:(id *)objects count:(unsigned long long)count;
- (void)clearEntry:(id)entry;
- (void)moveEntryToFront:(id)front;
- (void)nullifyEntryLinks;

@end

#endif /* TNLLRUCache_h */

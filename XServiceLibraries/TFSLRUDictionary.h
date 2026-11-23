//
#ifndef TFSLRUDictionary_h
#define TFSLRUDictionary_h
@import Foundation;

#include "NSFastEnumeration-Protocol.h"
#include "TFSLRUDictionaryNode.h"

@class NSMapTable, NSObject;

@interface TFSLRUDictionary : NSObject <NSFastEnumeration> {
    /* instance variables */
    NSMapTable *_nodeMapTable;
    TFSLRUDictionaryNode *_headNode;
    TFSLRUDictionaryNode *_tailNode;
}

@property (readonly, nonatomic) long long keyPolicy;
@property (copy, nonatomic) id /* block */ didEvictObjectBlock;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long totalCostLimit;
@property (readonly, nonatomic) unsigned long long totalCost;

/* instance methods */
- (id)description;
- (id)initWithKeyPolicy:(long long)policy;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (_Bool)containsObjectForKey:(id)key;
- (id)objectForKey:(id)key;
- (id)peekObjectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (id)orderedKeys;
- (id)orderedValues;
- (id)dictionaryRepresentation;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)key;
- (id)removeLeastRecentlyUsedObject;
- (void)setObject:(id)object forKey:(id)key cost:(unsigned long long)cost;
- (void)_tfs_moveNodeToFront:(id)front;
- (void)_tfs_trim;
- (void)shrinkToCost:(unsigned long long)cost shouldCallEvictionBlock:(_Bool)block;
- (void)_tfs_nullifyNodeLinks;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)state objects:(id *)objects count:(unsigned long long)count;

@end

#endif /* TFSLRUDictionary_h */

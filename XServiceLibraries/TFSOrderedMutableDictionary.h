//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSOrderedMutableDictionary_h
#define TFSOrderedMutableDictionary_h
@import Foundation;

#include "NSFastEnumeration-Protocol.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSObject;

@interface TFSOrderedMutableDictionary : NSObject <NSFastEnumeration> {
    /* instance variables */
    NSMutableOrderedSet *_order;
    NSMutableDictionary *_dic;
}

/* instance methods */
- (id)init;
- (unsigned long long)count;
- (void)addObject:(id)object forKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (id)objectForKey:(id)key;
- (id)allValues;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)state objects:(id *)objects count:(unsigned long long)count;
- (id)addEntriesFromOrderedMutableDictionary:(id)dictionary;
- (id)description;

@end

#endif /* TFSOrderedMutableDictionary_h */

//
#ifndef PTVWeakMutableDictionary_h
#define PTVWeakMutableDictionary_h
@import Foundation;

@class NSMutableDictionary, NSObject;

@interface PTVWeakMutableDictionary : NSObject {
    /* instance variables */
    NSMutableDictionary *_backing;
}

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)applicationDidReceiveMemoryWarning:(id)warning;
- (void)setObject:(id)object forKey:(id)key;
- (void)removeStaleEntries;
- (void)removeObjectForKey:(id)key;
- (void)removeAllObjects;
- (id)objectForKey:(id)key;
- (int)count;

@end

#endif /* PTVWeakMutableDictionary_h */

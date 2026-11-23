//
#ifndef GULMutableDictionary_h
#define GULMutableDictionary_h
@import Foundation;

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GULMutableDictionary : NSObject {
    /* instance variables */
    NSMutableDictionary *_objects;
    NSObject<OS_dispatch_queue> *_queue;
}

/* instance methods */
- (id)init;
- (id)description;
- (id)objectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (void)removeAllObjects;
- (unsigned long long)count;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (id)dictionary;

@end

#endif /* GULMutableDictionary_h */

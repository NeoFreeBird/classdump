//
#ifndef ONBSubtaskDataObservable_h
#define ONBSubtaskDataObservable_h
@import Foundation;

#include "ONBSubtaskDataObservableFactory-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSObject;

@interface ONBSubtaskDataObservable : NSObject {
    /* instance variables */
    NSMutableDictionary *_observables;
    NSMutableDictionary *_observers;
    NSMutableDictionary *_values;
    NSMutableDictionary *_subtaskDataObservers;
}

@property (weak, nonatomic) id <ONBSubtaskDataObservableFactory> factory;
@property (readonly, nonatomic) NSDictionary *allKeysAndValues;

/* instance methods */
- (id)init;
- (void)addObserver:(id /* block */)observer forKey:(id)key initialValue:(id)value;
- (id)objectForKey:(id)key;
- (void)_t1_setObject:(id)object forKey:(id)key;

@end

#endif /* ONBSubtaskDataObservable_h */

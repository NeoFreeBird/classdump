//
#ifndef GADObserverCollection_h
#define GADObserverCollection_h
@import Foundation;

@class NSMutableSet, NSObject;

@interface GADObserverCollection : NSObject {
    /* instance variables */
    NSMutableSet *_observers;
}

/* class methods */
+ (id)allObjects;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addObserverForName:(id)name object:(id)object queue:(id)queue usingBlock:(id /* block */)block;

@end

#endif /* GADObserverCollection_h */

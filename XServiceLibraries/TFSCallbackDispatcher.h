//
#ifndef TFSCallbackDispatcher_h
#define TFSCallbackDispatcher_h
@import Foundation;

@class NSMapTable, NSObject;

@interface TFSCallbackDispatcher : NSObject {
    /* instance variables */
    struct { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _accessQueue;
    NSMapTable *_observerToBlocksTable;
}

/* instance methods */
- (id)init;
- (void)addObserver:(id)observer usingBlock:(id /* block */)block;
- (void)addObserver:(id)observer selector:(SEL)selector;
- (void)removeObserver:(id)observer;
- (void)fire;
- (void)fireWithUserInfo:(id)info;

@end

#endif /* TFSCallbackDispatcher_h */

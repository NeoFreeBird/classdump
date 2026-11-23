//
#ifndef TFSAbstractStateQueue_h
#define TFSAbstractStateQueue_h
@import Foundation;

@class NSObject;

@interface TFSAbstractStateQueue : NSObject {
    /* instance variables */
    struct { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _serialQueue;
    id _state;
}

/* instance methods */
- (id)initWithState:(id)state;
- (void)tfs_atomically:(id /* block */)tfs_atomically;

@end

#endif /* TFSAbstractStateQueue_h */

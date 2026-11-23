//
#ifndef TFSDatabaseStateQueue_h
#define TFSDatabaseStateQueue_h
@import Foundation;

@class NSObject;

@interface TFSDatabaseStateQueue : NSObject {
    /* instance variables */
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    id _state;
}

/* instance methods */
- (id)initWithState:(id)state;
- (void)atomically:(id /* block */)atomically;

@end

#endif /* TFSDatabaseStateQueue_h */

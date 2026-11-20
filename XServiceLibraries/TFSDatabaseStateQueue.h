//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

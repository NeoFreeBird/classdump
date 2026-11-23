//
#ifndef TFSScribeStateQueue_h
#define TFSScribeStateQueue_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface TFSScribeStateQueue : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_serialQueue;
    id _state;
}

/* instance methods */
- (id)initWithState:(id)state;
- (void)atomically:(id /* block */)atomically;

@end

#endif /* TFSScribeStateQueue_h */

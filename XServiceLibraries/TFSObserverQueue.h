//
#ifndef TFSObserverQueue_h
#define TFSObserverQueue_h
@import Foundation;

@class NSObject;

@interface TFSObserverQueue : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 observerQueue;
}

/* instance methods */
- (id)initWithDispatchQueue:(id)queue;
- (id)init;

@end

#endif /* TFSObserverQueue_h */

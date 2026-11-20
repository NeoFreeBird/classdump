//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GIDCallbackQueue_h
#define GIDCallbackQueue_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface GIDCallbackQueue : NSObject {
    /* instance variables */
    _Bool _firing;
    int _pending;
    NSMutableArray *_queue;
    GIDCallbackQueue *_strongSelf;
}

/* instance methods */
- (id)init;
- (void)wait;
- (void)next;
- (void)reset;
- (void)addCallback:(id /* block */)callback;
- (void)fire;

@end

#endif /* GIDCallbackQueue_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAsynchronousBlockOperation_h
#define TAVAsynchronousBlockOperation_h
@import Foundation;

@class NSOperation;

@interface TAVAsynchronousBlockOperation : NSOperation {
    /* instance variables */
    _Atomic _Bool _finished;
    _Atomic _Bool _executing;
    id /* block */ _operationBlock;
}

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)start;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)completeOperation;

@end

#endif /* TAVAsynchronousBlockOperation_h */

//
#ifndef TFSConcurrentOperation_h
#define TFSConcurrentOperation_h
@import Foundation;

@class NSOperation;

@interface TFSConcurrentOperation : NSOperation {
    /* instance variables */
    _Atomic _Bool _finished;
    _Atomic _Bool _executing;
}

/* instance methods */
- (id)init;
- (void)start;
- (void)run;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)completeOperation;

@end

#endif /* TFSConcurrentOperation_h */

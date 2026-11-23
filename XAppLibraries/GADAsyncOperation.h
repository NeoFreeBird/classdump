//
#ifndef GADAsyncOperation_h
#define GADAsyncOperation_h
@import Foundation;

@class NSOperation;

@interface GADAsyncOperation : NSOperation {
    /* instance variables */
    id /* block */ _taskBlock;
}

@property (nonatomic) _Bool executing;
@property (nonatomic) _Bool finished;

/* instance methods */
- (id)initWithTaskBlock:(id /* block */)block;
- (_Bool)isAsynchronous;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)start;

@end

#endif /* GADAsyncOperation_h */

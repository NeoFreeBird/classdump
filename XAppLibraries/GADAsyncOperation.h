//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

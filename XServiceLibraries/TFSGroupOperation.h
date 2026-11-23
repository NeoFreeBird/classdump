//
#ifndef TFSGroupOperation_h
#define TFSGroupOperation_h
@import Foundation;

#include "TFSConcurrentOperation.h"

@class NSMutableArray, NSOperation, NSOperationQueue;

@interface TFSGroupOperation : TFSConcurrentOperation {
    /* instance variables */
    NSOperation *_completionOperation;
    NSMutableArray *_onFinishObservers;
}

@property (readonly, nonatomic) NSOperationQueue *queue;

/* instance methods */
- (id)init;
- (void)cancel;
- (void)run;
- (void)addSubOperation:(id)operation;
- (void)addSubOperation:(id)operation onFinish:(id /* block */)finish;
- (void)cancelSubOperations;
- (void)_tfs_addSubOperation:(id)operation onFinish:(id /* block */)finish;

@end

#endif /* TFSGroupOperation_h */

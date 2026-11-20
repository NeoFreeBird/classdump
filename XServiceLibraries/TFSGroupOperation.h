//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

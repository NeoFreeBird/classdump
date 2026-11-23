//
#ifndef TFSOperationResultWrapper_h
#define TFSOperationResultWrapper_h
@import Foundation;

#include "TFSConcurrentOperation.h"

@class NSError, NSObject, NSOperation;
@protocol OS_dispatch_queue;

@interface TFSOperationResultWrapper : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_completionQueue;
    id _result;
    NSError *_error;
}

@property (readonly, nonatomic) NSOperation *operation;

/* class methods */
+ (id)join:(id)join;

/* instance methods */
- (id)initWithOperationRunBlock:(id /* block */)block;
- (id)initWithCompletedOperationResult:(id)result;
- (void)completeWithResult:(id)result;
- (void)completeWithError:(id)error;
- (id)continuationOperationWrapperWithBlock:(id /* block */)block;
- (id)continuationOperationWithBlock:(id /* block */)block;
- (id)concurrentContinuationOperationWithBlock:(id /* block */)block;

@end

#endif /* TFSOperationResultWrapper_h */

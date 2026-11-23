//
#ifndef TAVConcurrentOperationCoordinator_h
#define TAVConcurrentOperationCoordinator_h
@import Foundation;

@class NSArray, NSObject, NSOperation, NSOperationQueue;

@interface TAVConcurrentOperationCoordinator : NSObject {
    /* instance variables */
    NSOperationQueue *_queue;
    NSArray *_operations;
    NSOperation *_completionOperation;
}

/* instance methods */
- (id)initWithConcurrentOperations:(id)operations completionOperation:(id)operation;
- (void)execute;

@end

#endif /* TAVConcurrentOperationCoordinator_h */

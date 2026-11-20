//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

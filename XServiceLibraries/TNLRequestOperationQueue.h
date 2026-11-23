//
#ifndef TNLRequestOperationQueue_h
#define TNLRequestOperationQueue_h
@import Foundation;

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue, TNLNetworkObserver;

@interface TNLRequestOperationQueue : NSObject {
    /* instance variables */
    unsigned long long _suspendCount;
    NSMutableArray *_stagedRequestOperations;
    NSObject<OS_dispatch_queue> *_sessionStateQueue;
    NSObject<OS_dispatch_queue> *_networkMonitorCallbackQueue;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain) id <TNLNetworkObserver> networkObserver;

/* class methods */
+ (void)initialize;
+ (id)globalRequestOperationQueue;
+ (void)addGlobalNetworkObserver:(id)observer;
+ (void)removeGlobalNetworkObserver:(id)observer;
+ (id)allGlobalNetworkObservers;
+ (void)addGlobalHeaderProvider:(id)provider;
+ (void)removeGlobalHeaderProvider:(id)provider;
+ (id)allGlobalHeaderProviders;
+ (id)defaultOperationQueue;
+ (_Bool)handleBackgroundURLSessionEvents:(id)events completionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier;
- (void)dealloc;
- (void)suspend;
- (void)resume;
- (void)enqueueRequestOperation:(id)operation;
- (id)enqueueRequest:(id)request completion:(id /* block */)completion;
- (void)syncAddRequestOperation:(id)operation;
- (void)clearQueuedRequestOperation:(id)operation;
- (void)cancelAllWithSource:(id)source underlyingError:(id)error;
- (void)cancelAllWithSource:(id)source;
- (void)findURLSessionTaskOperationForRequestOperation:(id)operation complete:(id /* block */)complete;
- (void)operationDidStart:(id)start;
- (void)operation:(id)operation didStartAttemptWithMetrics:(id)metrics;
- (void)operation:(id)operation didCompleteAttempt:(id)attempt disposition:(long long)disposition;
- (void)operation:(id)operation didCompleteWithResponse:(id)response;
- (void)taskOperation:(id)operation didCompleteAttempt:(id)attempt;

@end

#endif /* TNLRequestOperationQueue_h */

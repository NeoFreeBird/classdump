//
#ifndef TASActionExecution_h
#define TASActionExecution_h
@import Foundation;

@class NSObject, NSOperation, NSUUID;

@interface TASActionExecution : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 typeErasedAction;
    NSOperation *typeErasedOperation;
    B24@0:8@"NSString"16 observer;
    B24@0:8@"NSString"16 submittedAt;
    B24@0:8@"NSString"16 submitSite;
    B24@0:8@"NSString"16 actionsQueue;
    B24@0:8@"NSString"16 actionsQueue_backgroundTaskHandle;
    B24@0:8@"NSString"16 actionsQueue_beginExecutingTimeoutTimer;
    B24@0:8@"NSString"16 actionsQueue_beginExecutingTimeoutGeneration;
    B24@0:8@"NSString"16 actionsQueue_startedAt;
    B24@0:8@"NSString"16 actionsQueue_beganExecutingAt;
    B24@0:8@"NSString"16 actionsQueue_cancelledAt;
    B24@0:8@"NSString"16 actionsQueue_finishedAt;
    B24@0:8@"NSString"16 actionType;
    B24@0:8@"NSString"16 performEnqueue;
    B24@0:8@"NSString"16 operationIsReadyObserver;
    B24@0:8@"NSString"16 operationIsExecutingObserver;
    B24@0:8@"NSString"16 operationIsCancelledObserver;
    B24@0:8@"NSString"16 operationIsFinishedObserver;
    B24@0:8@"NSString"16 delegate;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSOperation *operation;

/* instance methods */
- (void)dealloc;
- (void)start;
- (id)init;

@end

#endif /* TASActionExecution_h */

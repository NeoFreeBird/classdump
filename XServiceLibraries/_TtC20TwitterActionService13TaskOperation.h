//
#ifndef _TtC20TwitterActionService13TaskOperation_h
#define _TtC20TwitterActionService13TaskOperation_h
@import Foundation;

@class NSOperation, Swift.Bool, _$sScTyyt _$ss5NeverOMn ?, _$sSo6NSLockC, _$syyYaYbc;

@interface TwitterActionService.TaskOperation : NSOperation { // (Swift)
    /* instance variables */
    @Sendable () async -> () work;
    __C.NSLock lock;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? lock_task;
    Swift.Bool lock_didStart;
    Swift.Bool lock_isExecuting;
    Swift.Bool lock_isFinished;
}

@property (nonatomic, readonly) _Bool asynchronous;
@property (nonatomic, readonly) _Bool executing;
@property (nonatomic, readonly) _Bool finished;

/* instance methods */
- (_Bool)isAsynchronous;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void)start;
- (void)cancel;
- (id)init;

@end

#endif /* _TtC20TwitterActionService13TaskOperation_h */

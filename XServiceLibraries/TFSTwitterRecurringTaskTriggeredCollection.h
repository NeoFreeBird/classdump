//
#ifndef TFSTwitterRecurringTaskTriggeredCollection_h
#define TFSTwitterRecurringTaskTriggeredCollection_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface TFSTwitterRecurringTaskTriggeredCollection : NSObject {
    /* instance variables */
    NSMutableArray *_pendingTaskInfos;
    NSMutableArray *_activeTaskItems;
}

@property (nonatomic) unsigned long long concurrentActiveTasks;
@property (nonatomic) double maximumTaskBlockingDuration;

/* instance methods */
- (id)init;
- (void)dealloc;
- (_Bool)addTriggeredTask:(id)task event:(id)event priority:(long long)priority;
- (id)activateNextTriggeredTask:(id)task timeoutBlock:(id /* block */)block;
- (_Bool)completeActivatedTask:(id)task;
- (void)clearPendingTriggeredTask:(id)task;
- (void)clearAllTimeouts;

@end

#endif /* TFSTwitterRecurringTaskTriggeredCollection_h */

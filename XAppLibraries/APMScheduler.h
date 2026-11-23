//
#ifndef APMScheduler_h
#define APMScheduler_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface APMScheduler : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;

/* class methods */
+ (_Bool)checkOnBackgroundThreadWithMethodName:(id)name;

/* instance methods */
- (id)initWithWorkerQueueLabel:(id)label;
- (void)scheduleOnWorkerQueueBlockID:(id)id block:(id /* block */)block;
- (void)dispatchSyncOnWorkerQueueBlockID:(id)id block:(id /* block */)block;

@end

#endif /* APMScheduler_h */

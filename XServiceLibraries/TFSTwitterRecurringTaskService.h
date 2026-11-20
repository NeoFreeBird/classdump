//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRecurringTaskService_h
#define TFSTwitterRecurringTaskService_h
@import Foundation;

#include "TFSTwitterRecurringTaskRegistrationCollection.h"
#include "TFSTwitterRecurringTaskTriggeredCollection.h"

@class NSObject;
@protocol OS_dispatch_queue, TFSTwitterRecurringTaskServiceObserver;

@interface TFSTwitterRecurringTaskService : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_serviceQueue;
    TFSTwitterRecurringTaskRegistrationCollection *_registeredTasks;
    TFSTwitterRecurringTaskTriggeredCollection *_triggeredTasks;
    struct { unsigned int deferEnabled:1; unsigned int suspended:1; unsigned int suspensionStateIsChanging:1; unsigned int suspensionStateTarget:1; } _flags;
}

@property _Bool suspended;
@property unsigned long long concurrentTasks;
@property _Bool deferEnabled;
@property double maximumTaskBlockingDuration;
@property (retain) id <TFSTwitterRecurringTaskServiceObserver> observer;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (_Bool)isSuspended;
- (_Bool)isDeferEnabled;
- (void)registerRecurringTask:(id)task eventSources:(id)sources triggerOnRegistration:(_Bool)registration context:(id)context;
- (void)unregisterRecurringTask:(id)task;
- (void)triggerRecurringTask:(id)task eventName:(id)name context:(id)context;
- (void)deferRecurringTask:(id)task;
- (void)triggerSingleShotRecurringTaskWithName:(id)name context:(id)context priority:(long long)priority triggerBlock:(id /* block */)block;
- (void)unregisterAllRecurringTasks;
- (void)_tfs_service_registerRecurringTask:(id)task eventSources:(id)sources triggerOnRegistration:(_Bool)registration context:(id)context;
- (void)_tfs_service_unregisterRecurringTask:(id)task;
- (void)_tfs_service_triggerRecurringTask:(id)task eventName:(id)name context:(id)context;
- (void)_tfs_service_triggerRecurringTask:(id)task event:(id)event source:(id)source priority:(long long)priority;
- (void)_tfs_service_deferRecurringTask:(id)task;
- (void)_tfs_service_dequeueTriggerIfPossible;
- (void)_tfs_service_handleCompletionNeverCalledForTask:(id)task duration:(double)duration;
- (void)_tfs_service_completeActiveTask:(id)task duration:(double)duration;
- (void)_tfs_service_timeoutActiveTask:(id)task duration:(double)duration;
- (void)_tfs_service_observedEvent:(id)event fromSource:(id)source forTask:(id)task shouldKeepObserving:(_Bool)observing;
- (void)_tfs_completeActiveTask:(id)task duration:(double)duration;
- (void)_tfs_observedEvent:(id)event fromSource:(id)source forTask:(id)task shouldKeepObserving:(_Bool)observing;

@end

#endif /* TFSTwitterRecurringTaskService_h */

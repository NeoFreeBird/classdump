//
#ifndef TFSTwitterRecurringTaskNotificationEventSource_h
#define TFSTwitterRecurringTaskNotificationEventSource_h
@import Foundation;

#include "TFSTwitterRecurringTaskEventSource-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterRecurringTaskNotificationEventSource : NSObject <TFSTwitterRecurringTaskEventSource> {
    /* instance variables */
    id /* block */ _conditionBlock;
}

@property (copy) id /* block */ triggerBlock;
@property (readonly, copy, nonatomic) NSString *notificationName;
@property (readonly, nonatomic) id notificationObject;
@property (readonly, nonatomic) double delayBeforeTriggering;
@property (readonly, copy, nonatomic) NSString *cancelDelayedTriggerNotificationName;
@property (readonly, copy, nonatomic) id cancelDelayedTriggerNotificationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNotificationName:(id)name object:(id)object condition:(id /* block */)condition;
- (id)initWithNotificationName:(id)name object:(id)object delayBeforeTrigger:(double)trigger cancelDelayedTriggerNotificationName:(id)name cancelDelayedTriggerNotificationObject:(id)object condition:(id /* block */)condition;
- (void)dealloc;
- (void)_tfs_handleNotification:(id)notification;
- (void)_tfs_handleCancelNotification:(id)notification;
- (void)_tfs_cancelDelayedTrigger;
- (void)_tfs_triggerWithNotification:(id)notification;
- (void)tfs_startObservingEventForTask:(id)task eventTrigger:(id /* block */)trigger;
- (void)tfs_stopObservingEventForTask:(id)task;

@end

#endif /* TFSTwitterRecurringTaskNotificationEventSource_h */

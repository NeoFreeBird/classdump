//
#ifndef TFSTwitterRecurringTaskEventSource_Protocol_h
#define TFSTwitterRecurringTaskEventSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterRecurringTaskEventSource <NSObject>

@required

/* required instance methods */
- (void)tfs_startObservingEventForTask:(id)task eventTrigger:(id /* block */)trigger;
- (void)tfs_startObservingEventForTask:(id)task eventTrigger:(id /* block */)trigger;
- (void)tfs_stopObservingEventForTask:(id)task;
- (void)tfs_stopObservingEventForTask:(id)task;

@optional

@end

#endif /* TFSTwitterRecurringTaskEventSource_Protocol_h */

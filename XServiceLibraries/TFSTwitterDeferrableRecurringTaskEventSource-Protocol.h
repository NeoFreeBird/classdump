//
#ifndef TFSTwitterDeferrableRecurringTaskEventSource_Protocol_h
#define TFSTwitterDeferrableRecurringTaskEventSource_Protocol_h
@import Foundation;

#include "TFSTwitterRecurringTaskEventSource-Protocol.h"

@protocol TFSTwitterDeferrableRecurringTaskEventSource <TFSTwitterRecurringTaskEventSource>

@required

/* required instance methods */
- (void)tfs_deferObservingEventForTask:(id)task;

@optional

/* optional instance methods */
- (_Bool)tfs_shouldDeferObservingEventWhenAlternateEventSourceIsTriggeredForTask:(id)task;

@end

#endif /* TFSTwitterDeferrableRecurringTaskEventSource_Protocol_h */

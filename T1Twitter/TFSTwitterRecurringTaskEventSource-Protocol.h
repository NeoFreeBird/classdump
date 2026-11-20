//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

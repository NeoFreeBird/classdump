//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRecurringTaskNotificationEvent_h
#define TFSTwitterRecurringTaskNotificationEvent_h
@import Foundation;

#include "TFSTwitterRecurringTaskEvent.h"

@class NSNotification;

@interface TFSTwitterRecurringTaskNotificationEvent : TFSTwitterRecurringTaskEvent

@property (readonly, nonatomic) NSNotification *notification;

/* instance methods */
- (id)initWithNotification:(id)notification;
- (id)description;

@end

#endif /* TFSTwitterRecurringTaskNotificationEvent_h */

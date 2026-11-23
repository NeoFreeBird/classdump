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

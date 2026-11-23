//
#ifndef TFSTwitterAccountDidBecomeActiveRecurringTaskEventSource_h
#define TFSTwitterAccountDidBecomeActiveRecurringTaskEventSource_h
@import Foundation;

#include "TFNTwitterAccount.h"

@class TFSTwitterRecurringTaskNotificationEventSource;

@interface TFSTwitterAccountDidBecomeActiveRecurringTaskEventSource : TFSTwitterRecurringTaskNotificationEventSource {
    /* instance variables */
    _Bool _requiresPreviousAccount;
}

@property (readonly, nonatomic) TFNTwitterAccount *currentAccount;

/* instance methods */
- (id)initWithInitialAccount:(id)account requiresPreviousAccount:(_Bool)account;
- (_Bool)handleNotification:(id)notification;

@end

#endif /* TFSTwitterAccountDidBecomeActiveRecurringTaskEventSource_h */

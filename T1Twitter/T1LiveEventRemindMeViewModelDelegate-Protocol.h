//
#ifndef T1LiveEventRemindMeViewModelDelegate_Protocol_h
#define T1LiveEventRemindMeViewModelDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventRemindMeViewModelDelegate <NSObject>

@required

/* required instance methods */
- (void)liveEventReminderViewModelDidUpdate:(id)update;

@optional

@end

#endif /* T1LiveEventRemindMeViewModelDelegate_Protocol_h */

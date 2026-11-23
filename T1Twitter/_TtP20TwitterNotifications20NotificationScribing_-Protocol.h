//
#ifndef _TtP20TwitterNotifications20NotificationScribing__Protocol_h
#define _TtP20TwitterNotifications20NotificationScribing__Protocol_h
@import Foundation;

@protocol TwitterNotifications.NotificationScribing

@required

/* required instance methods */
- (void)scribeForCurrentAccountWithPage:(id)page section:(id)section component:(id)component element:(id)element action:(id)action;

@optional

@end

#endif /* _TtP20TwitterNotifications20NotificationScribing__Protocol_h */

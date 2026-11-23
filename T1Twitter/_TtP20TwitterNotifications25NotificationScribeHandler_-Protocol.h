//
#ifndef _TtP20TwitterNotifications25NotificationScribeHandler__Protocol_h
#define _TtP20TwitterNotifications25NotificationScribeHandler__Protocol_h
@import Foundation;

@protocol TwitterNotifications.NotificationScribeHandler

@required

/* required instance methods */
- (void)scribePayload:(id)payload scribeAction:(id)action;

@optional

@end

#endif /* _TtP20TwitterNotifications25NotificationScribeHandler__Protocol_h */

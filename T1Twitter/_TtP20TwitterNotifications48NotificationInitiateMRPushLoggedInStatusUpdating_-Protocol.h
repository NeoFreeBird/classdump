//
#ifndef _TtP20TwitterNotifications48NotificationInitiateMRPushLoggedInStatusUpdating__Protocol_h
#define _TtP20TwitterNotifications48NotificationInitiateMRPushLoggedInStatusUpdating__Protocol_h
@import Foundation;

@protocol TwitterNotifications.NotificationInitiateMRPushLoggedInStatusUpdating

@required

/* required instance methods */
- (void)updateNotificationInitiateMRPushLoggedInStatusWith:(id /* block */)with;
- (_Bool)isNotificationsClientInitiatedMRForLoggedInStateEnabled;
- (double)notificationsEarliestBeginIntervalForClientInitiatedMRPush;
- (long long)notificationsBackgroundTaskMaximumRunsPerBackgroundSession;

@optional

@end

#endif /* _TtP20TwitterNotifications48NotificationInitiateMRPushLoggedInStatusUpdating__Protocol_h */

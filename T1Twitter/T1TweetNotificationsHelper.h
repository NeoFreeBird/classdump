//
#ifndef T1TweetNotificationsHelper_h
#define T1TweetNotificationsHelper_h
@import Foundation;

@class NSObject;

@interface T1TweetNotificationsHelper : NSObject

/* class methods */
+ (void)logDeviceNotificationConfigurationForAccount:(id)account scribeContext:(id)context notificationSettingsProperty:(id)property;

@end

#endif /* T1TweetNotificationsHelper_h */

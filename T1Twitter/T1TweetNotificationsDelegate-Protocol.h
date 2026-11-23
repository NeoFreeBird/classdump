//
#ifndef T1TweetNotificationsDelegate_Protocol_h
#define T1TweetNotificationsDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TweetNotificationsDelegate <NSObject>

@required

/* required instance methods */
- (void)handleNotificationButtonTapForUser:(id)user notificationSettingsProperty:(id)property tweetNotificationsRelationshipState:(long long)state;

@optional

@end

#endif /* T1TweetNotificationsDelegate_Protocol_h */

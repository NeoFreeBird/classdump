//
#ifndef TTSTypeaheadNotificationsConfiguration_h
#define TTSTypeaheadNotificationsConfiguration_h
@import Foundation;

@class NSObject, NSString;

@interface TTSTypeaheadNotificationsConfiguration : NSObject

@property (copy, nonatomic) NSString *didFollowUserNotificationName;
@property (copy, nonatomic) NSString *didUnfollowUserNotificationName;
@property (copy, nonatomic) NSString *didActOnUserNotifcationUserKey;

/* instance methods */
- (id)initWithDidFollowUserNotificationName:(id)name didUnfollowUserNotificationName:(id)name didActOnUserNotifcationUserKey:(id)key;

@end

#endif /* TTSTypeaheadNotificationsConfiguration_h */

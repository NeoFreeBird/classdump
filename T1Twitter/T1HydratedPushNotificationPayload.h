//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1HydratedPushNotificationPayload_h
#define T1HydratedPushNotificationPayload_h
@import Foundation;

@class NSObject, NSString, TFNTwitterStatus, TFNTwitterUser, _TtC17ChatNotifications16ChatNotification, _TtC20TwitterNotifications33TFSTwitterPushNotificationPayload;

@interface T1HydratedPushNotificationPayload : NSObject

@property (readonly, nonatomic) TwitterNotifications.TFSTwitterPushNotificationPayload *pushPayload;
@property (readonly, nonatomic) TFNTwitterUser *senderUser;
@property (readonly, nonatomic) TFNTwitterStatus *targetStatus;
@property (readonly, nonatomic) ChatNotifications.ChatNotification *xchatNotification;
@property (readonly, nonatomic) NSString *pushPayloadBody;
@property (readonly, nonatomic) NSString *pushPayloadTitle;

/* instance methods */
- (id)initWithPushNotificationPayload:(id)payload senderUser:(id)user targetStatus:(id)status xchatNotification:(id)notification;
- (id)navigationContext;

@end

#endif /* T1HydratedPushNotificationPayload_h */

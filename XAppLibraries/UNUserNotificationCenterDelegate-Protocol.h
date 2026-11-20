//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UNUserNotificationCenterDelegate_Protocol_h
#define UNUserNotificationCenterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UNUserNotificationCenterDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)userNotificationCenter:(id)center willPresentNotification:(id)notification withCompletionHandler:(id /* block */)handler;
- (void)userNotificationCenter:(id)center willPresentNotification:(id)notification withCompletionHandler:(id /* block */)handler;
- (void)userNotificationCenter:(id)center didReceiveNotificationResponse:(id)response withCompletionHandler:(id /* block */)handler;
- (void)userNotificationCenter:(id)center didReceiveNotificationResponse:(id)response withCompletionHandler:(id /* block */)handler;
- (void)userNotificationCenter:(id)center openSettingsForNotification:(id)notification;
- (void)userNotificationCenter:(id)center openSettingsForNotification:(id)notification;

@end

#endif /* UNUserNotificationCenterDelegate_Protocol_h */

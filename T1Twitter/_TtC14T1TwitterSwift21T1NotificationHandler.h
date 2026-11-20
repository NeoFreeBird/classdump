//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift21T1NotificationHandler_h
#define _TtC14T1TwitterSwift21T1NotificationHandler_h
@import Foundation;

#include "UIApplicationDelegate-Protocol.h"
#include "UNUserNotificationCenterDelegate-Protocol.h"

@class NSObject, Swift.Bool, T1TwitterSwift.EventLimiter ??, TwitterNotifications25NotificationScribeHandler_p, _$s20TwitterNotifications0B7HandlerCMn, _$s20TwitterNotifications10AppBadgingCMn, _$s7Combine14AnyCancellableCMn ?, _$sSo17TFNTwitterAccountCSg, _$sSo22T1AppLaunchOptionsInfoC, _$sSo24T1PushNotificationRouterC;

@interface T1TwitterSwift.T1NotificationHandler : NSObject <UIApplicationDelegate, UNUserNotificationCenterDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for TwitterNotifications.AppBadging appBadging;
    __C.T1PushNotificationRouter pushRouter;
    __C.T1AppLaunchOptionsInfo launchOptions;
    TwitterNotifications25NotificationScribeHandler_p scribeHandler;
    nominal type descriptor for TwitterNotifications.NotificationsHandler notificationHandler;
    T1TwitterSwift.EventLimiter ?? $__lazy_storage_$_eventLimiter;
    nominal type descriptor for Combine.AnyCancellable ? cancellable;
    __C.TFNTwitterAccount? previousSessionAccount;
}

@property (nonatomic) _Bool hasReceivedRemoteNotification;
@property (nonatomic) _Bool hasReceivedRemoteNotificationResponse;

/* instance methods */
- (void)userNotificationCenter:(id)center willPresentNotification:(id)notification withCompletionHandler:(id /* block */)handler;
- (void)userNotificationCenter:(id)center openSettingsForNotification:(id)notification;
- (void)userNotificationCenter:(id)center didReceiveNotificationResponse:(id)response withCompletionHandler:(id /* block */)handler;
- (void)application:(id)application didReceiveRemoteNotification:(id)notification fetchCompletionHandler:(id /* block */)handler;
- (void)applicationDidEnterBackground:(id)background;
- (void)applicationWillResignActive:(id)active;
- (void)applicationDidBecomeActive:(id)active;
- (id)initWithAppBadging:(id)badging pushNotificationRouter:(id)router previousSessionAccount:(id)account launchOptions:(id)options;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift21T1NotificationHandler_h */

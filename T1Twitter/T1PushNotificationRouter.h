//
#ifndef T1PushNotificationRouter_h
#define T1PushNotificationRouter_h
@import Foundation;

#include "T1PushNotificationRoute-Protocol.h"

@class NSDictionary, NSObject;

@interface T1PushNotificationRouter : NSObject {
    /* instance variables */
    id <T1PushNotificationRoute> _pushNotificationRoute;
}

@property (retain, nonatomic) NSDictionary *badgeCountsForUserID;

/* class methods */
+ (id)defaultRouter;

/* instance methods */
- (id)init;
- (void)routePushPayload:(id)payload routeContext:(id)context;
- (void)registerPushNotificationRoute:(id)route;
- (void)_updateBadgeCountFromNotification:(id)notification;
- (void)_scribePayload:(id)payload forRoute:(id)route context:(long long)context scribeAction:(id)action account:(id)account;
- (void)_scribeAmbientNotificationForAccount:(id)account element:(id)element action:(id)action parameters:(id)parameters;

@end

#endif /* T1PushNotificationRouter_h */

//
#ifndef T1PushNotificationRoute_Protocol_h
#define T1PushNotificationRoute_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1PushNotificationRoute <NSObject>

@required

/* required instance methods */
- (void)willRoutePushPayload:(id)payload context:(long long)context;
- (void)handlePushPayload:(id)payload routeContext:(id)context;

@optional

@end

#endif /* T1PushNotificationRoute_Protocol_h */

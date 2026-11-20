//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

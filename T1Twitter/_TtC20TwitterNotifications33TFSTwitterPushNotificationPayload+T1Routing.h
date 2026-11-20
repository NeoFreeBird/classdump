//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterNotifications33TFSTwitterPushNotificationPayload_T1Routing_h
#define _TtC20TwitterNotifications33TFSTwitterPushNotificationPayload_T1Routing_h
@import Foundation;

@interface TwitterNotifications.TFSTwitterPushNotificationPayload (T1Routing)

/* instance methods */
- (void)hydrateForRoutingFromModelSource:(unsigned long long)source completion:(id /* block */)completion;
- (void)hydrateAndDecryptXChatMessageFromModelSource:(unsigned long long)source completion:(id /* block */)completion;
- (_Bool)isLoggedOutPush;
- (void)_hydrateSenderUserAndTargetStatusWithAccount:(id)account source:(unsigned long long)source completion:(id /* block */)completion;
- (void)_hydrateSenderUserIfNeededWithAccount:(id)account source:(unsigned long long)source completion:(id /* block */)completion;
- (void)_hydrateTargetStatusIfNeededWithAccount:(id)account source:(unsigned long long)source completion:(id /* block */)completion;
- (void)_decryptXChatMessageIfNeededWithAccount:(id)account completion:(id /* block */)completion;
- (_Bool)_shouldHydrateTargetStatus;
- (_Bool)_needsHydrationForRouting;
- (_Bool)_shouldDecryptXChatNotification;

@end

#endif /* _TtC20TwitterNotifications33TFSTwitterPushNotificationPayload_T1Routing_h */

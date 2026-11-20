//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok37GatewayConversationLiveBadgeRefresher_h
#define _TtC4Grok37GatewayConversationLiveBadgeRefresher_h
@import Foundation;

@class Grok.GatewayConnectionResumeMonitor ?, Grok.GatewayNetworkReachabilityProviding, _$sSo20NSNotificationCenterC, _$syyScMYcc, _TtCs12_SwiftObject;

@interface Grok.GatewayConversationLiveBadgeRefresher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GatewayNetworkReachabilityProviding reachability;
    __C.NSNotificationCenter notificationCenter;
    @Swift.MainActor () -> () refresh;
    Grok.GatewayConnectionResumeMonitor ? foregroundMonitor;
}

@end

#endif /* _TtC4Grok37GatewayConversationLiveBadgeRefresher_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC4Grok26GatewayConversationManager19GatewayLiveSyncPump_h
#define _TtCC4Grok26GatewayConversationManager19GatewayLiveSyncPump_h
@import Foundation;

@class Grok.GatewayConversationManager.GatewayLiveSyncPump.Phase, Grok.GatewayConversationSessionType, Grok.GatewayServerEventSubscription, Grok.GrokFeatureAccess, _$sSS, _TtCs12_SwiftObject;

@interface Grok.GatewayConversationManager.GatewayLiveSyncPump : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GatewayConversationSessionType session;
    Grok.GatewayServerEventSubscription subscription;
    Swift.String conversationId;
    Grok.GrokFeatureAccess grokAccess;
    Grok.GatewayConversationManager.GatewayLiveSyncPump.Phase phase;
}

@end

#endif /* _TtCC4Grok26GatewayConversationManager19GatewayLiveSyncPump_h */

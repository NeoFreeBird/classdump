//
#ifndef _TtC8ChatSend33ChatGroupAdminActionHandlerPlugin_h
#define _TtC8ChatSend33ChatGroupAdminActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatActionSigner, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatGroupAdminActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatActionSigner actionSigner;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSync.ChatProjection projection;
}

@end

#endif /* _TtC8ChatSend33ChatGroupAdminActionHandlerPlugin_h */

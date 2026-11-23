//
#ifndef _TtC8ChatSend43ChatConversationSettingsActionHandlerPlugin_h
#define _TtC8ChatSend43ChatConversationSettingsActionHandlerPlugin_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSend.ChatActionSigner, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatConversationSettingsActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatActionSigner actionSigner;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSync.ChatProjection projection;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC8ChatSend43ChatConversationSettingsActionHandlerPlugin_h */

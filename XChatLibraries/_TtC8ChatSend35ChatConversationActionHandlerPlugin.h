//
#ifndef _TtC8ChatSend35ChatConversationActionHandlerPlugin_h
#define _TtC8ChatSend35ChatConversationActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.ChatEventSigner, ChatKeys.ChatIdentityKeyService, ChatModelsCore.UserID, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatConversationActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSync.ChatProjection projection;
    ChatModelsCore.UserID owner;
    ChatKeys.ChatEventSigner signer;
}

@end

#endif /* _TtC8ChatSend35ChatConversationActionHandlerPlugin_h */

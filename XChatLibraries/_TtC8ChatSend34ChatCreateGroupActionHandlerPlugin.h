//
#ifndef _TtC8ChatSend34ChatCreateGroupActionHandlerPlugin_h
#define _TtC8ChatSend34ChatCreateGroupActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.ChatConversationKeyService, ChatModelsCore.UserID, ChatSend.ChatActionSigner, ChatSend.ChatConversationKeyCreator, ChatSend.ChatGroupAvatarUploader, ChatSync.ChatProjection, ChatSyncState.ChatActionStream, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatCreateGroupActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatActionSigner actionSigner;
    ChatSyncState.ChatActionStream actionStream;
    ChatKeys.ChatConversationKeyService conversationKeyService;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSend.ChatGroupAvatarUploader groupAvatarUploader;
    ChatSend.ChatConversationKeyCreator keyCreator;
    ChatSync.ChatProjection projection;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC8ChatSend34ChatCreateGroupActionHandlerPlugin_h */

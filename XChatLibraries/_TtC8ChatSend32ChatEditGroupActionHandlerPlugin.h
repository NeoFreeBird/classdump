//
#ifndef _TtC8ChatSend32ChatEditGroupActionHandlerPlugin_h
#define _TtC8ChatSend32ChatEditGroupActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.ChatConversationKeyService, ChatModelsCore.UserID, ChatSend.ChatActionSigner, ChatSend.ChatGroupAvatarUploader, ChatSync.ChatProjection, ChatSyncState.ChatActionStream, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatEditGroupActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatActionSigner actionSigner;
    ChatSyncState.ChatActionStream actionStream;
    ChatKeys.ChatConversationKeyService conversationKeyService;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSend.ChatGroupAvatarUploader groupAvatarUploader;
    ChatSync.ChatProjection projection;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC8ChatSend32ChatEditGroupActionHandlerPlugin_h */

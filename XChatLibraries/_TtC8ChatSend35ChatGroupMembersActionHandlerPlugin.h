//
#ifndef _TtC8ChatSend35ChatGroupMembersActionHandlerPlugin_h
#define _TtC8ChatSend35ChatGroupMembersActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.ChatConversationKeyService, ChatKeys.ChatCryptoPolicy, ChatKeys.ChatEventSigner, ChatKeys.ChatIdentityKeyService, ChatModelsCore.UserID, ChatSend.ChatActionSigner, ChatSend.ChatGroupAvatarUploader, ChatSync.ChatGroupJoinRequestsStream, ChatSync.ChatProjection, ChatSync.ChatUserDirectory, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatGroupMembersActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatActionSigner actionSigner;
    ChatKeys.ChatConversationKeyService conversationKeyService;
    ChatKeys.ChatCryptoPolicy cryptoPolicy;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSend.ChatGroupAvatarUploader groupAvatarUploader;
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSync.ChatGroupJoinRequestsStream joinRequestsStream;
    ChatSync.ChatProjection projection;
    ChatModelsCore.UserID owner;
    ChatKeys.ChatEventSigner signer;
    ChatSync.ChatUserDirectory userDirectory;
}

@end

#endif /* _TtC8ChatSend35ChatGroupMembersActionHandlerPlugin_h */

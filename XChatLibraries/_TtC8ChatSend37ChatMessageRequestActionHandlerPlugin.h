//
#ifndef _TtC8ChatSend37ChatMessageRequestActionHandlerPlugin_h
#define _TtC8ChatSend37ChatMessageRequestActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.ChatConversationKeyService, ChatKeys.ChatEventSigner, ChatKeys.ChatIdentityKeyService, ChatKeys.ChatPublicKeyDirectory, ChatModelsCore.UserID, ChatSend.ChatMessageEnvelopeSender, ChatSync.ChatBatchProcessor, ChatSync.ChatMessageRequestsService, ChatSync.ChatProjection, ChatSyncState.ChatActionStream, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, ChatTransport.ChatThriftCodec, _TtCs12_SwiftObject;

@interface ChatSend.ChatMessageRequestActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSyncState.ChatActionStream actionStream;
    ChatSync.ChatBatchProcessor batchProcessor;
    ChatKeys.ChatConversationKeyService conversationKeyService;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSync.ChatMessageRequestsService messageRequestsService;
    ChatSync.ChatProjection projection;
    ChatKeys.ChatPublicKeyDirectory publicKeyDirectory;
    ChatModelsCore.UserID owner;
    ChatSend.ChatMessageEnvelopeSender envelopeSender;
    ChatKeys.ChatEventSigner signer;
    ChatTransport.ChatThriftCodec codec;
}

@end

#endif /* _TtC8ChatSend37ChatMessageRequestActionHandlerPlugin_h */

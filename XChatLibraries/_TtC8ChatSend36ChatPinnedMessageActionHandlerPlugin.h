//
#ifndef _TtC8ChatSend36ChatPinnedMessageActionHandlerPlugin_h
#define _TtC8ChatSend36ChatPinnedMessageActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.ChatConversationKeyService, ChatKeys.ChatMessageCrypto, ChatModelsCore.UserID, ChatSend.ChatConversationKeyCreator, ChatSend.ChatMediaUploader, ChatSend.ChatMessageEnvelopeSender, ChatSync.ChatMediaDownloader, ChatSync.ChatPinnedMessagesPageLoader, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, ChatTransport.ChatThriftCodec, _TtCs12_SwiftObject;

@interface ChatSend.ChatPinnedMessageActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatModelsCore.UserID owner;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSync.ChatProjection projection;
    ChatKeys.ChatMessageCrypto messageCrypto;
    ChatKeys.ChatConversationKeyService conversationKeyService;
    ChatSend.ChatConversationKeyCreator keyCreator;
    ChatSend.ChatMessageEnvelopeSender envelopeSender;
    ChatSync.ChatMediaDownloader mediaDownloader;
    ChatSend.ChatMediaUploader mediaUploader;
    ChatSync.ChatPinnedMessagesPageLoader pageLoader;
    ChatTransport.ChatThriftCodec codec;
}

@end

#endif /* _TtC8ChatSend36ChatPinnedMessageActionHandlerPlugin_h */

//
#ifndef _TtC16ChatConversation30PinnedMessagesListActionWorker_h
#define _TtC16ChatConversation30PinnedMessagesListActionWorker_h
@import Foundation;

@class ChatConversation.PinnedMessagesListActionTriggerStream, ChatConversation.PinnedMessagesListWorkerPluginContext, ChatConversation.PinnedMessagesLoadStateStream, ChatModels.ConversationMetadataStream, ChatModels.ConversationPinnedMessagesStream, ChatUtilities.PinnedMessageSender, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.PinnedMessagesListActionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatConversation.PinnedMessagesListWorkerPluginContext context;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModels.ConversationPinnedMessagesStream conversationPinnedMessagesStream;
    ChatUtilities.PinnedMessageSender pinnedMessageSender;
    ChatConversation.PinnedMessagesListActionTriggerStream pinnedMessagesListActionTriggerStream;
    ChatConversation.PinnedMessagesLoadStateStream pinnedMessagesLoadStateStream;
}

@end

#endif /* _TtC16ChatConversation30PinnedMessagesListActionWorker_h */

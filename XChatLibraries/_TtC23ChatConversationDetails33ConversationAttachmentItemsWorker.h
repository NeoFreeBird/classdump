//
#ifndef _TtC23ChatConversationDetails33ConversationAttachmentItemsWorker_h
#define _TtC23ChatConversationDetails33ConversationAttachmentItemsWorker_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentEntriesStream, ChatConversationDetails.ConversationAttachmentListContent, ChatConversationDetails.ConversationAttachmentListMediaStream, ChatConversationDetails.ConversationAttachmentMessageBuilding, ChatModels.ConversationMetadataStream, ChatSyncState.ChatContentProviding, ChatUtilities.AttachmentMediaRegistry, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversationDetails.ConversationAttachmentItemsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatUtilities.AttachmentMediaRegistry attachmentMediaRegistry;
    ChatConversationDetails.ConversationAttachmentListContent content;
    ChatSyncState.ChatContentProviding contentProvider;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversationDetails.ConversationAttachmentEntriesStream entriesStream;
    ChatConversationDetails.ConversationAttachmentListMediaStream itemsStream;
    ChatConversationDetails.ConversationAttachmentMessageBuilding messageBuilder;
    DispatchQueue queue;
}

@end

#endif /* _TtC23ChatConversationDetails33ConversationAttachmentItemsWorker_h */

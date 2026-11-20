//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

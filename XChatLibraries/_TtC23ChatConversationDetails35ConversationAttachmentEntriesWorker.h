//
#ifndef _TtC23ChatConversationDetails35ConversationAttachmentEntriesWorker_h
#define _TtC23ChatConversationDetails35ConversationAttachmentEntriesWorker_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentEntriesStream, ChatConversationDetails.ConversationAttachmentListContent, ChatSyncState.ChatConversationProviding, ChatSyncState.ChatMediaDownloading, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversationDetails.ConversationAttachmentEntriesWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationAttachmentListContent content;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatConversationDetails.ConversationAttachmentEntriesStream entriesStream;
    ChatSyncState.ChatMediaDownloading mediaDownloader;
}

@end

#endif /* _TtC23ChatConversationDetails35ConversationAttachmentEntriesWorker_h */

//
#ifndef _TtC23ChatConversationDetails36ConversationAttachmentPageLoadWorker_h
#define _TtC23ChatConversationDetails36ConversationAttachmentPageLoadWorker_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentPaginationStream, ChatSyncState.ChatActionStream, ChatSyncState.ChatConversationProviding, _$s11XFoundation11AsyncWorkerCN, _$s7Combine12AnyPublisherVMn _$syyt _$ss5NeverOMn;

@interface ChatConversationDetails.ConversationAttachmentPageLoadWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatConversationProviding conversationProvider;
    nominal type descriptor for Combine.AnyPublisher  empty-list () nominal type descriptor for Swift.Never loadMoreRequests;
    ChatConversationDetails.ConversationAttachmentPaginationStream paginationStream;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC23ChatConversationDetails36ConversationAttachmentPageLoadWorker_h */

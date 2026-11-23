//
#ifndef _TtC9ChatInbox21InboxPaginationWorker_h
#define _TtC9ChatInbox21InboxPaginationWorker_h
@import Foundation;

@class ChatConversationList.ConversationListStateStream, ChatInbox.InboxConversationPreviewStream, ChatInbox.InboxConversationWindowStream, _$s11XFoundation13CombineWorkerCN, _$sSi;

@interface ChatInbox.InboxPaginationWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatInbox.InboxConversationPreviewStream inboxConversationPreviewStream;
    ChatInbox.InboxConversationWindowStream inboxConversationWindowStream;
    ChatConversationList.ConversationListStateStream listStateStream;
    Swift.Int pageSize;
}

@end

#endif /* _TtC9ChatInbox21InboxPaginationWorker_h */

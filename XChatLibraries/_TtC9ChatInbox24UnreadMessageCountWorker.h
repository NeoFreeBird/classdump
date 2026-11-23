//
#ifndef _TtC9ChatInbox24UnreadMessageCountWorker_h
#define _TtC9ChatInbox24UnreadMessageCountWorker_h
@import Foundation;

@class ChatModels.UnreadMessageCountStream, ChatSyncState.ChatInboxProviding, _$s11XFoundation13CombineWorkerCN;

@interface ChatInbox.UnreadMessageCountWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatModels.UnreadMessageCountStream unreadMessageCountStream;
}

@end

#endif /* _TtC9ChatInbox24UnreadMessageCountWorker_h */

//
#ifndef _TtC9ChatInbox30InboxConversationPreviewWorker_h
#define _TtC9ChatInbox30InboxConversationPreviewWorker_h
@import Foundation;

@class ChatGrokBot.GrokBotAvailabilityStream, ChatInbox.ColdInboxFindFriendsStream, ChatInbox.ColdInboxSuggestionsStream, ChatInbox.InboxConversationPreviewStream, ChatInbox.InboxConversationWindowStream, ChatInbox.InboxFilterStream, ChatSyncState.ChatInboxProviding, _$s11XFoundation13CombineWorkerCN, _$sSi;

@interface ChatInbox.InboxConversationPreviewWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatInbox.ColdInboxSuggestionsStream coldInboxSuggestionsStream;
    ChatInbox.ColdInboxFindFriendsStream findFriendsStream;
    ChatGrokBot.GrokBotAvailabilityStream grokBotAvailabilityStream;
    ChatInbox.InboxConversationPreviewStream inboxConversationPreviewStream;
    ChatInbox.InboxConversationWindowStream inboxConversationWindowStream;
    ChatInbox.InboxFilterStream inboxFilterStream;
    ChatSyncState.ChatInboxProviding inboxProvider;
    Swift.Int pageSize;
}

@end

#endif /* _TtC9ChatInbox30InboxConversationPreviewWorker_h */

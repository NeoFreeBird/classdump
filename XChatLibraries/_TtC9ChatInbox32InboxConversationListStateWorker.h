//
#ifndef _TtC9ChatInbox32InboxConversationListStateWorker_h
#define _TtC9ChatInbox32InboxConversationListStateWorker_h
@import Foundation;

@class ChatConversationList.ConversationActionPluginPointing, ChatConversationList.ConversationListStateStream, ChatGrokBot.GrokBotsInboxAllBotsStore, ChatGrokBot.GrokBotsInboxEntriesStream, ChatGrokBot.GrokBotsInboxPreviewStream, ChatInbox.InboxCallStatusStream, ChatInbox.InboxColdInboxSuggestionsListItemBuilder, ChatInbox.InboxConversationPreviewStream, ChatInbox.InboxFilterStream, ChatInbox.InboxGrokBotItemBuilder, ChatInbox.InboxPresenterContext, ChatInbox.InboxPullRetryStream, ChatInbox.InboxTypingIndicatorStream, ChatInbox.InboxVisibilityStream, _$s11XFoundation13CombineWorkerCN;

@interface ChatInbox.InboxConversationListStateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatConversationList.ConversationActionPluginPointing actionPluginPoint;
    ChatInbox.InboxColdInboxSuggestionsListItemBuilder coldInboxSuggestionsListItemBuilder;
    ChatInbox.InboxPresenterContext context;
    ChatInbox.InboxGrokBotItemBuilder grokBotItemBuilder;
    ChatGrokBot.GrokBotsInboxAllBotsStore grokBotsInboxAllBotsStore;
    ChatGrokBot.GrokBotsInboxEntriesStream grokBotsInboxEntriesStream;
    ChatGrokBot.GrokBotsInboxPreviewStream grokBotsInboxPreviewStream;
    ChatInbox.InboxCallStatusStream inboxCallStatusStream;
    ChatInbox.InboxConversationPreviewStream inboxConversationPreviewStream;
    ChatInbox.InboxFilterStream inboxFilterStream;
    ChatInbox.InboxPullRetryStream inboxPullRetryStream;
    ChatInbox.InboxTypingIndicatorStream inboxTypingIndicatorStream;
    ChatInbox.InboxVisibilityStream inboxVisibilityStream;
    ChatConversationList.ConversationListStateStream listStateStream;
}

@end

#endif /* _TtC9ChatInbox32InboxConversationListStateWorker_h */

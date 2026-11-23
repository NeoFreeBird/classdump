//
#ifndef _TtC9ChatInbox31InboxGrokBotSearchResultsWorker_h
#define _TtC9ChatInbox31InboxGrokBotSearchResultsWorker_h
@import Foundation;

@class ChatGrokBot.GrokBotsInboxEntriesStream, ChatInbox.InboxGrokBotItemBuilder, ChatInbox.InboxPresenterContext, ChatSearch.SearchLeadingResultsStream, ChatSearch.SearchQueryStream, _$s11XFoundation13CombineWorkerCN;

@interface ChatInbox.InboxGrokBotSearchResultsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatInbox.InboxPresenterContext context;
    ChatInbox.InboxGrokBotItemBuilder grokBotItemBuilder;
    ChatGrokBot.GrokBotsInboxEntriesStream grokBotsInboxEntriesStream;
    ChatSearch.SearchLeadingResultsStream searchLeadingResultsStream;
    ChatSearch.SearchQueryStream searchQueryStream;
}

@end

#endif /* _TtC9ChatInbox31InboxGrokBotSearchResultsWorker_h */

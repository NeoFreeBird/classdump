//
#ifndef _TtC12ChatSettings28HistoryChatPickerStateWorker_h
#define _TtC12ChatSettings28HistoryChatPickerStateWorker_h
@import Foundation;

@class ChatSettings.HistoryChatPickerPopularConversationsStream, ChatSettings.HistoryChatPickerQueryStream, ChatSettings.HistoryChatPickerStateStream, ChatSyncState.ChatInboxProviding, _$s11XFoundation13CombineWorkerCN;

@interface ChatSettings.HistoryChatPickerStateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatSettings.HistoryChatPickerPopularConversationsStream popularConversationsStream;
    ChatSettings.HistoryChatPickerQueryStream queryStream;
    ChatSettings.HistoryChatPickerStateStream stateStream;
}

@end

#endif /* _TtC12ChatSettings28HistoryChatPickerStateWorker_h */

//
#ifndef _TtC16ChatConversation24ForwardSheetSearchWorker_h
#define _TtC16ChatConversation24ForwardSheetSearchWorker_h
@import Foundation;

@class ChatConversation.MessageForwardSheetEligibilityStream, ChatConversationList.ConversationListStateStream, ChatModelsCore.ConversationID, ChatSearch.SearchQueryStream, ChatSyncState.ChatInboxProviding, ChatUtilities.ChatTypeaheadScriber, ChatUtilities.ShareSuggestionProvider, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.ForwardSheetSearchWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatConversation.MessageForwardSheetEligibilityStream eligibilityStream;
    ChatConversationList.ConversationListStateStream listStateStream;
    ChatSearch.SearchQueryStream searchQueryStream;
    ChatModelsCore.ConversationID sourceConversationID;
    ChatUtilities.ShareSuggestionProvider suggestionProvider;
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatUtilities.ChatTypeaheadScriber typeaheadScriber;
}

@end

#endif /* _TtC16ChatConversation24ForwardSheetSearchWorker_h */

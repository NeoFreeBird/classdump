//
#ifndef _TtC10ShareSheet32ChatShareSheetConversationSource_h
#define _TtC10ShareSheet32ChatShareSheetConversationSource_h
@import Foundation;

@class ShareSheet.ShareSheetConnectionStateStream, Swift.Bool, _$s11ChatGrokBot0B22BotsInboxEntriesStreamCMn, _$s13ChatSyncState0A11PostStoringMp, _$s13ChatSyncState0A12ActionStreamCMn, _$s13ChatSyncState0A14InboxProvidingMp, _$s13ChatSyncState0A16AccountProvidingMp, _$s13ChatSyncState0A16ContentProvidingMp, _$s13ChatUtilities0A16TypeaheadScriberVMn, _$s13ChatUtilities23ShareSuggestionProviderVMn, _$s14ChatModelsCore6UserIDVMn, _$s7Combine19CurrentValueSubjectCMn _$sySS5query_Sa -> _$s13ChatUtilities0A15ShareSuggestionOMn _$sG6pinnedt _$ss5NeverOMn, _$sSDySS _$s13ChatUtilities0A15ShareSuggestionOMn, _$sSaySSG, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface ShareSheet.ChatShareSheetConversationSource : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for ChatSyncState.ChatAccountProviding accountProvider;
    ShareSheet.ShareSheetConnectionStateStream connectionStateStream;
    protocol descriptor for ChatSyncState.ChatContentProviding contentProvider;
    nominal type descriptor for ChatGrokBot.GrokBotsInboxEntriesStream grokBotsInboxEntriesStream;
    Swift.Bool isXNumberSearchResultsEnabled;
    nominal type descriptor for ChatModelsCore.UserID owner;
    nominal type descriptor for ChatSyncState.ChatActionStream actionStream;
    protocol descriptor for ChatSyncState.ChatInboxProviding inboxProvider;
    protocol descriptor for ChatSyncState.ChatPostStoring postStore;
    nominal type descriptor for ChatUtilities.ShareSuggestionProvider suggestionProvider;
    nominal type descriptor for ChatUtilities.ChatTypeaheadScriber typeaheadScriber;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Stringquery first-element-marker Swift.Array -> nominal type descriptor for ChatUtilities.ChatShareSuggestion _$sG6pinnedt nominal type descriptor for Swift.Never inputSubject;
    __C.NSLock listedSuggestionsLock;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for ChatUtilities.ChatShareSuggestion listedSuggestions;
    [Swift.String] shownItemIDs;
}

@end

#endif /* _TtC10ShareSheet32ChatShareSheetConversationSource_h */

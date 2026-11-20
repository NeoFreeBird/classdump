//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ShareSheet19ShareSheetViewModel_h
#define _TtC10ShareSheet19ShareSheetViewModel_h
@import Foundation;

@class ShareSheet.ShareSheetActionTriggerStream, ShareSheet.ShareSheetConversationSource, ShareSheet.ShareSheetItem, ShareSheet.ShareSheetNavigation, ShareSheet.ShareSheetViewModelDelegate ?, Swift.Bool, _$s10ChatModels24ComplatPlanNameProvidingMp, _$s11ChatGrokBot0B22BotsInboxEntriesStreamCMn, _$s11ChatGrokBot0bC7SessionCMn, _$s7Combine9PublishedVMn ShareSheet.ShareSheetActionItem ?, _$s7Combine9PublishedVMn ShareSheet.ShareSheetSelfUser ?, _$s7Combine9PublishedVMn ShareSheet.ShareSheetViewModel.ShareSheetStyle, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sSaySo7UIImageCG, _$s7Combine9PublishedVMn _$sSbSg, _$s7Combine9PublishedVMn _$sSi, _$s7Combine9PublishedVMn _$sySDySS DMUI.ConversationListItem, _$s7Combine9PublishedVMn _$sySa -> DMUI.ConversationListItem, _$s7Combine9PublishedVMn _$sySa -> ShareSheet.ShareSheetActionItem, _$sSS, _$sSa -> DMUI.ConversationListItem, _$sSa -> ShareSheet.ShareSheetActionItem, _$sSaySSG, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sShySSG, _$sSi, _TtCs12_SwiftObject;

@interface ShareSheet.ShareSheetViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool useAlternateBackgroundColor;
    Swift.Bool isShareSheetEmptyStateEnabled;
    Swift.Bool isShareSheetRecipientsFacepileEnabled;
    ShareSheet.ShareSheetViewModelDelegate ? delegate;
    protocol descriptor for ChatModels.ComplatPlanNameProviding complatPlanNames;
    ShareSheet.ShareSheetConversationSource conversationSource;
    nominal type descriptor for ChatGrokBot.GrokBotSession grokBotSession;
    nominal type descriptor for ChatGrokBot.GrokBotsInboxEntriesStream grokBotsInboxEntriesStream;
    Swift.Bool isSubscriptionsVerifiedToPremiumEnabled;
    Swift.Bool isAutoEnrollManagedShareSheetEnabled;
    ShareSheet.ShareSheetItem item;
    ShareSheet.ShareSheetNavigation navigation;
    Swift.Array -> ShareSheet.ShareSheetActionItem originalActions;
    ShareSheet.ShareSheetActionTriggerStream shareSheetActionTriggerStream;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> ShareSheet.ShareSheetActionItem _actions;
    nominal type descriptor for Combine.Published ShareSheet.ShareSheetActionItem ? _awaitingShareLinkAction;
    nominal type descriptor for Combine.Published Swift.String _compositionText;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> DMUI.ConversationListItem _conversationListItems;
    nominal type descriptor for Combine.Published Swift.Bool _hasLoadedInitialConversations;
    nominal type descriptor for Combine.Published Swift.Bool? _canShareToChats;
    nominal type descriptor for Combine.Published Swift.Bool _isUpdateRequired;
    nominal type descriptor for Combine.Published [__C.UIImage] _previewImages;
    nominal type descriptor for Combine.Published ShareSheet.ShareSheetActionItem ? _previewShareAction;
    nominal type descriptor for Combine.Published  empty-list Swift.Dictionary empty-list Swift.String DMUI.ConversationListItem _selectedConversationListItemDict;
    nominal type descriptor for Combine.Published Swift.Int _selectedPreviewIndex;
    nominal type descriptor for Combine.Published ShareSheet.ShareSheetSelfUser ? _selfUser;
    nominal type descriptor for Combine.Published ShareSheet.ShareSheetViewModel.ShareSheetStyle _sheetStyle;
    Swift.Array -> DMUI.ConversationListItem searchConversationListItems;
    Swift.String conversationListQuery;
    Swift.String query;
    [Swift.String] selectedConversationIDOrder;
    Swift.Set<Swift.String> selectedFromSearchSuggestionIDs;
    Swift.Int stripMaxRevealedIndex;
    Swift.Bool hasScribedStripScroll;
    Swift.Bool needsAutoEnroll;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC10ShareSheet19ShareSheetViewModel_h */

//
#ifndef _TtC22ChatCreateConversation27CreateConversationViewModel_h
#define _TtC22ChatCreateConversation27CreateConversationViewModel_h
@import Foundation;

@class ChatCreateConversation.CreateConversationListener ?, ChatCreateConversation.GroupConversationCreating, ChatKotlin.ObjectGraphProvider, ChatModels.ChatToastActionTriggerStream, ChatModelsCore.UserID, ChatUtilities.ChatNumberProviding, ChatUtilities.ChatUserSuggestionsProviding, Swift.Bool, _$s7Combine9PublishedVMn ChatUtilities.ChatLabeledXNumber ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSi, _$s7Combine9PublishedVMn _$sySa -> ChatCreateConversation.UserSuggestion, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, _$sSo28UISelectionFeedbackGeneratorC, _$sSo31UINotificationFeedbackGeneratorC, _TtCs12_SwiftObject;

@interface ChatCreateConversation.CreateConversationViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatCreateConversation.GroupConversationCreating groupConversationCreator;
    Swift.Bool isNativeRewrite;
    Swift.Bool isNumbersComposeEnabled;
    Swift.Bool isXNumberSearchResultsEnabled;
    ChatUtilities.ChatNumberProviding numberProvider;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
    ChatModelsCore.UserID owner;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
    ChatCreateConversation.CreateConversationListener ? listener;
    nominal type descriptor for Combine.Published Swift.Bool _isLoading;
    nominal type descriptor for Combine.Published Swift.Bool _isXNumberQuery;
    nominal type descriptor for Combine.Published Swift.Bool _isXNumberRejected;
    nominal type descriptor for Combine.Published ChatUtilities.ChatLabeledXNumber ? _queryXNumber;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> ChatCreateConversation.UserSuggestion _selectedSuggestions;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> ChatCreateConversation.UserSuggestion _suggestions;
    nominal type descriptor for Combine.Published Swift.Int _xNumberRejectionCount;
    __C.UISelectionFeedbackGenerator feedbackGenerator;
    __C.UINotificationFeedbackGenerator rejectionFeedbackGenerator;
    ChatUtilities.ChatUserSuggestionsProviding suggestionsProvider;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? observationTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? rejectionResetTask;
    Swift.String currentQuery;
}

@end

#endif /* _TtC22ChatCreateConversation27CreateConversationViewModel_h */

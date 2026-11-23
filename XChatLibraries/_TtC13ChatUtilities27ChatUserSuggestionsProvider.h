//
#ifndef _TtC13ChatUtilities27ChatUserSuggestionsProvider_h
#define _TtC13ChatUtilities27ChatUserSuggestionsProvider_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSyncState.ChatComposerProviding, ChatSyncState.ChatTypeaheadSurface, ChatUtilities.ChatTypeaheadScriber, Swift.Bool, _$s7Combine19CurrentValueSubjectCMn ChatUtilities.ChatUserSuggestionsProvider.Input _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface ChatUtilities.ChatUserSuggestionsProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject ChatUtilities.ChatUserSuggestionsProvider.Input nominal type descriptor for Swift.Never input;
    Swift.Bool isNumbersEnabled;
    Swift.Bool isXNumberSearchResultsEnabled;
    ChatModelsCore.UserID owner;
    ChatSyncState.ChatTypeaheadSurface surface;
    ChatUtilities.ChatTypeaheadScriber typeaheadScriber;
    ChatSyncState.ChatComposerProviding composerProvider;
}

@end

#endif /* _TtC13ChatUtilities27ChatUserSuggestionsProvider_h */

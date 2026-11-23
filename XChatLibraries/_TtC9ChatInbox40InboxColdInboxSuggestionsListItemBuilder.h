//
#ifndef _TtC9ChatInbox40InboxColdInboxSuggestionsListItemBuilder_h
#define _TtC9ChatInbox40InboxColdInboxSuggestionsListItemBuilder_h
@import Foundation;

@class ChatInbox.ColdInboxSuggestionActing, ChatModels.ChatContactsSyncing ?, ChatModelsCore.UserID, Swift.Bool, _TtCs12_SwiftObject;

@interface ChatInbox.InboxColdInboxSuggestionsListItemBuilder : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatInbox.ColdInboxSuggestionActing actions;
    ChatModels.ChatContactsSyncing ? contactsSyncing;
    ChatModelsCore.UserID owner;
    Swift.Bool hasScribedFindFriendsShown;
    Swift.Bool hasScribedSuggestionsShown;
}

@end

#endif /* _TtC9ChatInbox40InboxColdInboxSuggestionsListItemBuilder_h */

//
#ifndef _TtC9ChatInbox26ColdInboxSuggestionsWorker_h
#define _TtC9ChatInbox26ColdInboxSuggestionsWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatInbox.ColdInboxFindFriendsStream, ChatInbox.ColdInboxSuggestionsStream, ChatModelsCore.UserID, ChatSyncState.ChatInboxProviding, _$s11XFoundation13CombineWorkerCN, _$sSo14NSUserDefaultsC;

@interface ChatInbox.ColdInboxSuggestionsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatInbox.ColdInboxSuggestionsStream coldInboxSuggestionsStream;
    ChatInbox.ColdInboxFindFriendsStream findFriendsStream;
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatModelsCore.UserID owner;
    __C.NSUserDefaults userDefaults;
}

@end

#endif /* _TtC9ChatInbox26ColdInboxSuggestionsWorker_h */

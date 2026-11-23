//
#ifndef _TtC8ChatSync32ChatHistoryDownloadSettingsStore_h
#define _TtC8ChatSync32ChatHistoryDownloadSettingsStore_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSync.ChatHistoryFetcher, ChatSync.ChatSQLiteFetchedRangeStore, ChatSyncState.ChatHistoryDownloadSettingsStream, _$sSS, _$sSo14NSUserDefaultsC, _TtCs12_SwiftObject;

@interface ChatSync.ChatHistoryDownloadSettingsStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSync.ChatSQLiteFetchedRangeStore fetchedRangeStore;
    ChatSync.ChatHistoryFetcher historyFetcher;
    ChatSyncState.ChatHistoryDownloadSettingsStream stream;
    __C.NSUserDefaults userDefaults;
    Swift.String keepAllKey;
    Swift.String chosenConversationIDsKey;
}

@end

#endif /* _TtC8ChatSync32ChatHistoryDownloadSettingsStore_h */

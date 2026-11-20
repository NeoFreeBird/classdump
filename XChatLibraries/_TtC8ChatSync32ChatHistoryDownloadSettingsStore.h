//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync32ChatHistoryDownloadSettingsStore_h
#define _TtC8ChatSync32ChatHistoryDownloadSettingsStore_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSync.XChatHistoryFetcher, ChatSync.XChatSQLiteFetchedRangeStore, ChatSyncState.ChatHistoryDownloadSettingsStream, _$sSS, _$sSo14NSUserDefaultsC, _TtCs12_SwiftObject;

@interface ChatSync.ChatHistoryDownloadSettingsStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSync.XChatSQLiteFetchedRangeStore fetchedRangeStore;
    ChatSync.XChatHistoryFetcher historyFetcher;
    ChatSyncState.ChatHistoryDownloadSettingsStream stream;
    __C.NSUserDefaults userDefaults;
    Swift.String keepAllKey;
    Swift.String chosenConversationIDsKey;
}

@end

#endif /* _TtC8ChatSync32ChatHistoryDownloadSettingsStore_h */

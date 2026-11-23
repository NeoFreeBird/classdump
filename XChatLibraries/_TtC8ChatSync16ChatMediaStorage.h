//
#ifndef _TtC8ChatSync16ChatMediaStorage_h
#define _TtC8ChatSync16ChatMediaStorage_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatDatabase.ChatSQLiteDatabase, ChatSync.ChatGroupAvatarFiles, ChatSync.ChatMediaDownloader, ChatSyncState.ChatMediaStorageStream, _$sSS, _$sSo14NSUserDefaultsC, _TtCs12_SwiftObject;

@interface ChatSync.ChatMediaStorage : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatDatabase.ChatSQLiteDatabase database;
    ChatSync.ChatMediaDownloader mediaDownloader;
    ChatSync.ChatGroupAvatarFiles groupAvatarFiles;
    ChatSyncState.ChatMediaStorageStream stream;
    __C.NSUserDefaults userDefaults;
    Swift.String evictionPolicyKey;
}

@end

#endif /* _TtC8ChatSync16ChatMediaStorage_h */

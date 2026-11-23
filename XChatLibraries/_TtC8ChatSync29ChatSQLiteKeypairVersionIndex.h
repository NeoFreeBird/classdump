//
#ifndef _TtC8ChatSync29ChatSQLiteKeypairVersionIndex_h
#define _TtC8ChatSync29ChatSQLiteKeypairVersionIndex_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatDatabase.ChatSQLiteDatabase, ChatSync.ChatKeychainKeypairVersionIndex, Swift.Bool, _$sSh -> _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface ChatSync.ChatSQLiteKeypairVersionIndex : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatDatabase.ChatSQLiteDatabase database;
    ChatSync.ChatKeychainKeypairVersionIndex keychainIndex;
    Swift.Bool hasMergedKeychainVersions;
    Swift.Set -> nominal type descriptor for Swift.Int64 ? cachedStoredVersions;
}

@end

#endif /* _TtC8ChatSync29ChatSQLiteKeypairVersionIndex_h */

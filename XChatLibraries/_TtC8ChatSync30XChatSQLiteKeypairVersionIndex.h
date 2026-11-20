//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync30XChatSQLiteKeypairVersionIndex_h
#define _TtC8ChatSync30XChatSQLiteKeypairVersionIndex_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatDatabase.XChatDatabase, ChatSync.XChatKeychainKeypairVersionIndex, Swift.Bool, _$sSh -> _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface ChatSync.XChatSQLiteKeypairVersionIndex : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatDatabase.XChatDatabase database;
    ChatSync.XChatKeychainKeypairVersionIndex keychainIndex;
    Swift.Bool hasMergedKeychainVersions;
    Swift.Set -> nominal type descriptor for Swift.Int64 ? cachedStoredVersions;
}

@end

#endif /* _TtC8ChatSync30XChatSQLiteKeypairVersionIndex_h */

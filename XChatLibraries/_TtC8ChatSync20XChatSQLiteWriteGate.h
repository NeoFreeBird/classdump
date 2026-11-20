//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync20XChatSQLiteWriteGate_h
#define _TtC8ChatSync20XChatSQLiteWriteGate_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatDatabase.XChatDatabase, _$sSi, _TtCs12_SwiftObject;

@interface ChatSync.XChatSQLiteWriteGate : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatDatabase.XChatDatabase database;
    Swift.Int currentWipeCount;
}

@end

#endif /* _TtC8ChatSync20XChatSQLiteWriteGate_h */

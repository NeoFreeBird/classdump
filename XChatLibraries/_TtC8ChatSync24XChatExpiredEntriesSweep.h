//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync24XChatExpiredEntriesSweep_h
#define _TtC8ChatSync24XChatExpiredEntriesSweep_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSync.XChatProjection, ChatSync.XChatSQLiteProjectionStore, ChatSync.XChatSQLiteRawEventStore, ChatSync.XChatSQLiteWriteGate, _TtCs12_SwiftObject;

@interface ChatSync.XChatExpiredEntriesSweep : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSync.XChatSQLiteWriteGate writeGate;
    ChatSync.XChatSQLiteProjectionStore projectionStore;
    ChatSync.XChatSQLiteRawEventStore rawEventStore;
    ChatSync.XChatProjection projection;
}

@end

#endif /* _TtC8ChatSync24XChatExpiredEntriesSweep_h */

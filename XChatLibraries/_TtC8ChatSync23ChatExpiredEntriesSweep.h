//
#ifndef _TtC8ChatSync23ChatExpiredEntriesSweep_h
#define _TtC8ChatSync23ChatExpiredEntriesSweep_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSync.ChatProjection, ChatSync.ChatSQLiteProjectionStore, ChatSync.ChatSQLiteRawEventStore, ChatSync.ChatSQLiteWriteGate, _TtCs12_SwiftObject;

@interface ChatSync.ChatExpiredEntriesSweep : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSync.ChatSQLiteWriteGate writeGate;
    ChatSync.ChatSQLiteProjectionStore projectionStore;
    ChatSync.ChatSQLiteRawEventStore rawEventStore;
    ChatSync.ChatProjection projection;
}

@end

#endif /* _TtC8ChatSync23ChatExpiredEntriesSweep_h */

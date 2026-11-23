//
#ifndef _TtC8ChatSync19ChatSQLiteWriteGate_h
#define _TtC8ChatSync19ChatSQLiteWriteGate_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatDatabase.ChatSQLiteDatabase, _$sSi, _TtCs12_SwiftObject;

@interface ChatSync.ChatSQLiteWriteGate : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatDatabase.ChatSQLiteDatabase database;
    Swift.Int currentWipeCount;
}

@end

#endif /* _TtC8ChatSync19ChatSQLiteWriteGate_h */

//
#ifndef _TtC8ChatSync18ChatBatchProcessor_h
#define _TtC8ChatSync18ChatBatchProcessor_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSync.ChatEventProcessor, ChatSync.ChatHistoryRequestStream, ChatSync.ChatProjection, ChatSync.ChatRecentEmojiStore, ChatSync.ChatSQLiteRawEventStore, ChatSync.ChatSQLiteWriteGate, ChatSync.ChatWatermark, ChatSyncState.ChatActionStream, ChatSyncState.ChatSessionScribing, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface ChatSync.ChatBatchProcessor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSync.ChatEventProcessor processor;
    ChatSync.ChatSQLiteRawEventStore rawEventStore;
    ChatSync.ChatSQLiteWriteGate writeGate;
    ChatSync.ChatWatermark watermark;
    ChatSync.ChatProjection projection;
    ChatSync.ChatHistoryRequestStream historyRequestStream;
    ChatSyncState.ChatActionStream actionStream;
    ChatSync.ChatRecentEmojiStore recentEmojiStore;
    ChatSyncState.ChatSessionScribing scriber;
    nominal type descriptor for Swift.Int64 decoderVersion;
}

@end

#endif /* _TtC8ChatSync18ChatBatchProcessor_h */

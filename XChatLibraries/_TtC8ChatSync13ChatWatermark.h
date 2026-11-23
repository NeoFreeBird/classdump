//
#ifndef _TtC8ChatSync13ChatWatermark_h
#define _TtC8ChatSync13ChatWatermark_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSync.ChatSQLiteSyncStateStore, ChatSync.ChatSQLiteWriteGate, ChatSync.ChatWatermark.Update ?, ChatSync.ChatWatermarkFlushStream, ChatSync.ChatWatermarkLRUCache _$ss5Int64VMn _$sAB ->, ChatSync.ChatWatermarkLRUCache _$ss5Int64VMn _$st ->, ChatSyncState.ChatSessionScribing, Swift.Bool, _$sSiSg, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface ChatSync.ChatWatermark : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSync.ChatSQLiteSyncStateStore stateStore;
    ChatSync.ChatSQLiteWriteGate writeGate;
    ChatSyncState.ChatSessionScribing scriber;
    ChatSync.ChatWatermarkFlushStream flushStream;
    ChatSync.ChatWatermarkLRUCache nominal type descriptor for Swift.Int64 _$st -> recentlyPersistedSequenceNumbers;
    ChatSync.ChatWatermarkLRUCache nominal type descriptor for Swift.Int64 _$sAB -> missingSequenceNumbers;
    nominal type descriptor for Swift.Int64 ? highestSequenceNumberBlockedByGap;
    Swift.Int? lastSeenWipeCount;
    ChatSync.ChatWatermark.Update ? pendingUpdate;
    Swift.Bool hasFlushedFirstUpdate;
    Swift.Bool isStopped;
}

@end

#endif /* _TtC8ChatSync13ChatWatermark_h */

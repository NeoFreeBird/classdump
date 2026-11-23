//
#ifndef _TtC8ChatSync25ChatSQLiteProjectionStore_h
#define _TtC8ChatSync25ChatSQLiteProjectionStore_h
@import Foundation;

@class ChatDatabase.ChatSQLiteDatabase, ChatSync.ChatConversationRecordCache, ChatSync.ChatSQLiteConversationStore, ChatSync.ChatSQLitePinnedMessageStore, ChatSync.ChatSQLiteTimelineStore, _TtCs12_SwiftObject;

@interface ChatSync.ChatSQLiteProjectionStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatDatabase.ChatSQLiteDatabase database;
    ChatSync.ChatSQLiteConversationStore conversationStore;
    ChatSync.ChatSQLiteTimelineStore timelineStore;
    ChatSync.ChatConversationRecordCache conversationCache;
    ChatSync.ChatSQLitePinnedMessageStore pinnedMessages;
}

@end

#endif /* _TtC8ChatSync25ChatSQLiteProjectionStore_h */

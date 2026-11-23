//
#ifndef _TtC8ChatSync23ChatSQLiteTimelineStore_h
#define _TtC8ChatSync23ChatSQLiteTimelineStore_h
@import Foundation;

@class ChatDatabase.ChatSQLiteDatabase, ChatModelsCore.UserID, ChatSync.ChatConversationSummaryBuilder, _TtCs12_SwiftObject;

@interface ChatSync.ChatSQLiteTimelineStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatDatabase.ChatSQLiteDatabase database;
    ChatModelsCore.UserID owner;
    ChatSync.ChatConversationSummaryBuilder summaryBuilder;
}

@end

#endif /* _TtC8ChatSync23ChatSQLiteTimelineStore_h */

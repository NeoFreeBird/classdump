//
#ifndef _TtC12ChatDatabase18ChatSQLiteDatabase_h
#define _TtC12ChatDatabase18ChatSQLiteDatabase_h
@import Foundation;

@class ChatDatabase.ChatDatabaseConnection, ChatDatabase.ChatDatabaseLocation, ChatDatabase.ChatDatabaseOpenMode, ChatDatabase.ChatDatabaseWriteScheduler, _TtCs12_SwiftObject;

@interface ChatDatabase.ChatSQLiteDatabase : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatDatabase.ChatDatabaseLocation location;
    ChatDatabase.ChatDatabaseOpenMode mode;
    ChatDatabase.ChatDatabaseConnection writer;
    ChatDatabase.ChatDatabaseConnection reader;
    ChatDatabase.ChatDatabaseConnection immediateReader;
    ChatDatabase.ChatDatabaseWriteScheduler writeScheduler;
}

@end

#endif /* _TtC12ChatDatabase18ChatSQLiteDatabase_h */

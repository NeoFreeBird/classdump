//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12ChatDatabase13XChatDatabase_h
#define _TtC12ChatDatabase13XChatDatabase_h
@import Foundation;

@class ChatDatabase.XChatDatabaseConnection, ChatDatabase.XChatDatabaseLocation, ChatDatabase.XChatDatabaseOpenMode, ChatDatabase.XChatDatabaseWriteScheduler, _TtCs12_SwiftObject;

@interface ChatDatabase.XChatDatabase : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatDatabase.XChatDatabaseLocation location;
    ChatDatabase.XChatDatabaseOpenMode mode;
    ChatDatabase.XChatDatabaseConnection writer;
    ChatDatabase.XChatDatabaseConnection reader;
    ChatDatabase.XChatDatabaseConnection immediateReader;
    ChatDatabase.XChatDatabaseWriteScheduler writeScheduler;
}

@end

#endif /* _TtC12ChatDatabase13XChatDatabase_h */

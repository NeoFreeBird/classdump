//
#ifndef _TtC11ChatSession28ChatSessionBackgroundFetcher_h
#define _TtC11ChatSession28ChatSessionBackgroundFetcher_h
@import Foundation;

@class ChatDatabase.ChatSQLiteDatabase, ChatKeys.ChatIdentityKeyService, ChatSync.ChatInboxFetcher, ChatSync.ChatSQLiteProjectionStore, ChatSync.ChatWatermark, _$s10Foundation3URLVMn, _TtCs12_SwiftObject;

@interface ChatSession.ChatSessionBackgroundFetcher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL databaseDirectoryURL;
    ChatDatabase.ChatSQLiteDatabase database;
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSync.ChatInboxFetcher inboxFetcher;
    ChatSync.ChatWatermark watermark;
    ChatSync.ChatSQLiteProjectionStore projectionStore;
}

@end

#endif /* _TtC11ChatSession28ChatSessionBackgroundFetcher_h */

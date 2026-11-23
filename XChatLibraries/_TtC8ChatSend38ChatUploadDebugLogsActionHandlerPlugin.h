//
#ifndef _TtC8ChatSend38ChatUploadDebugLogsActionHandlerPlugin_h
#define _TtC8ChatSend38ChatUploadDebugLogsActionHandlerPlugin_h
@import Foundation;

@class ChatDatabase.ChatSQLiteDatabase, ChatModelsCore.UserID, ChatSend.ChatMediaUploader, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatUploadDebugLogsActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatDatabase.ChatSQLiteDatabase database;
    ChatSend.ChatMediaUploader mediaUploader;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC8ChatSend38ChatUploadDebugLogsActionHandlerPlugin_h */

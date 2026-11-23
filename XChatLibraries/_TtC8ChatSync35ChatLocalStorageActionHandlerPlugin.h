//
#ifndef _TtC8ChatSync35ChatLocalStorageActionHandlerPlugin_h
#define _TtC8ChatSync35ChatLocalStorageActionHandlerPlugin_h
@import Foundation;

@class ChatSync.ChatHistoryDownloadSettingsStore, ChatSync.ChatLocalReset, ChatSync.ChatMediaStorage, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSync.ChatLocalStorageActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.ChatHistoryDownloadSettingsStore historyDownloadSettingsStore;
    ChatSync.ChatLocalReset localReset;
    ChatSync.ChatMediaStorage mediaStorage;
    ChatSync.ChatProjection projection;
}

@end

#endif /* _TtC8ChatSync35ChatLocalStorageActionHandlerPlugin_h */

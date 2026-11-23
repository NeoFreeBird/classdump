//
#ifndef _TtC8ChatSync21ChatDmSettingsService_h
#define _TtC8ChatSync21ChatDmSettingsService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSyncState.ChatDmSettings ?, ChatSyncState.ChatDmSettingsStream, ChatTransport.ChatGraphQLClient, Swift.Bool, _$sSS, _$sSo14NSUserDefaultsC, _TtCs12_SwiftObject;

@interface ChatSync.ChatDmSettingsService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.String allowDmsFromKey;
    Swift.String settingsKey;
    Swift.String pendingChangesKey;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSyncState.ChatDmSettingsStream stream;
    __C.NSUserDefaults userDefaults;
    ChatSyncState.ChatDmSettings ? serverSettings;
    ChatSyncState.ChatDmSettings ? pendingChanges;
    Swift.Bool isFlushing;
    Swift.Bool isServerUnreachable;
    Swift.Bool hasServerSettingsThisSession;
}

@end

#endif /* _TtC8ChatSync21ChatDmSettingsService_h */

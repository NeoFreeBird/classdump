//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync21ChatDmSettingsService_h
#define _TtC8ChatSync21ChatDmSettingsService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSyncState.ChatDmSettingsStream, ChatTransport.XChatGraphQLClient, _$sSS, _$sScTySb _$ss5NeverOMn ?, _$sSo14NSUserDefaultsC, _TtCs12_SwiftObject;

@interface ChatSync.ChatDmSettingsService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.String allowDmsFromKey;
    ChatTransport.XChatGraphQLClient graphQLClient;
    ChatSyncState.ChatDmSettingsStream stream;
    __C.NSUserDefaults userDefaults;
    Swift.Task empty-list Swift.Bool nominal type descriptor for Swift.Never ? lastUpdate;
}

@end

#endif /* _TtC8ChatSync21ChatDmSettingsService_h */

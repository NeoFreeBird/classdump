//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync17ChatNumberService_h
#define _TtC8ChatSync17ChatNumberService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSyncState.ChatNumberStream, ChatSyncState.ChatSessionScribing, ChatTransport.XChatGraphQLClient, _$sSS, _$sScTySb _$ss5NeverOMn ?, _$sSo14NSUserDefaultsC, _TtCs12_SwiftObject;

@interface ChatSync.ChatNumberService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatTransport.XChatGraphQLClient graphQLClient;
    ChatSyncState.ChatSessionScribing scriber;
    ChatSyncState.ChatNumberStream stream;
    __C.NSUserDefaults userDefaults;
    Swift.String numberKey;
    Swift.String introSeenKey;
    Swift.Task empty-list Swift.Bool nominal type descriptor for Swift.Never ? lastUpdate;
}

@end

#endif /* _TtC8ChatSync17ChatNumberService_h */

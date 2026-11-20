//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync32XChatKeychainKeypairVersionIndex_h
#define _TtC8ChatSync32XChatKeychainKeypairVersionIndex_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatCrypto.XChatKeyMaterialStore, ChatTransport.XChatGraphQLClient, _$sSS, _$sSh -> _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface ChatSync.XChatKeychainKeypairVersionIndex : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.String userID;
    ChatCrypto.XChatKeyMaterialStore keyMaterialStore;
    ChatTransport.XChatGraphQLClient graphQLClient;
    Swift.Set -> nominal type descriptor for Swift.Int64 ? registeredVersions;
}

@end

#endif /* _TtC8ChatSync32XChatKeychainKeypairVersionIndex_h */

//
#ifndef _TtC8ChatSync31ChatKeychainKeypairVersionIndex_h
#define _TtC8ChatSync31ChatKeychainKeypairVersionIndex_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatCrypto.ChatKeyMaterialStore, ChatTransport.ChatGraphQLClient, _$sSS, _$sSh -> _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface ChatSync.ChatKeychainKeypairVersionIndex : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.String userID;
    ChatCrypto.ChatKeyMaterialStore keyMaterialStore;
    ChatTransport.ChatGraphQLClient graphQLClient;
    Swift.Set -> nominal type descriptor for Swift.Int64 ? registeredVersions;
}

@end

#endif /* _TtC8ChatSync31ChatKeychainKeypairVersionIndex_h */

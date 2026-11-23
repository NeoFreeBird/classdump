//
#ifndef _TtC8ChatKeys22ChatPublicKeyDirectory_h
#define _TtC8ChatKeys22ChatPublicKeyDirectory_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatCrypto.ChatKeyMaterialStore, ChatCrypto.ChatLRUCache ChatKeys.PublicKeyID ChatCrypto.ChatP256.PublicKey, ChatKeys.ChatPublicKeyCache ?, ChatModelsCore.UserID, ChatTransport.ChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatKeys.ChatPublicKeyDirectory : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatModelsCore.UserID owner;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatCrypto.ChatKeyMaterialStore keyMaterialStore;
    ChatKeys.ChatPublicKeyCache ? cache;
    ChatCrypto.ChatLRUCache ChatKeys.PublicKeyID ChatCrypto.ChatP256.PublicKey publicKeys;
}

@end

#endif /* _TtC8ChatKeys22ChatPublicKeyDirectory_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatCrypto21XChatKeyMaterialStore_h
#define _TtC10ChatCrypto21XChatKeyMaterialStore_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatCrypto.XChatKeyMaterialPersistence, ChatCrypto.XChatLRUCache ChatCrypto.ConversationKeyID _$s9CryptoKit12SymmetricKeyVMn ?, ChatCrypto.XChatLRUCache ChatCrypto.StoredKeyPairID ChatCrypto.XChatStoredKeyPair, _$s10XUtilities14XKeychainStoreCMn, _$sSS, _TtCs12_SwiftObject;

@interface ChatCrypto.XChatKeyMaterialStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.String accessGroup;
    Swift.String keyPrefix;
    nominal type descriptor for XUtilities.XKeychainStore keychainStore;
    ChatCrypto.XChatKeyMaterialPersistence persistence;
    ChatCrypto.XChatLRUCache ChatCrypto.StoredKeyPairID ChatCrypto.XChatStoredKeyPair keyPairs;
    ChatCrypto.XChatLRUCache ChatCrypto.ConversationKeyID nominal type descriptor for CryptoKit.SymmetricKey ? conversationKeys;
}

@end

#endif /* _TtC10ChatCrypto21XChatKeyMaterialStore_h */

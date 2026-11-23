//
#ifndef _TtC10ChatCrypto20ChatKeyMaterialStore_h
#define _TtC10ChatCrypto20ChatKeyMaterialStore_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatCrypto.ChatKeyMaterialPersistence, ChatCrypto.ChatLRUCache ChatCrypto.ConversationKeyID _$s9CryptoKit12SymmetricKeyVMn ?, ChatCrypto.ChatLRUCache ChatCrypto.StoredKeyPairID ChatCrypto.ChatStoredKeyPair, _$s10XUtilities14XKeychainStoreCMn, _$sSS, _TtCs12_SwiftObject;

@interface ChatCrypto.ChatKeyMaterialStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.String accessGroup;
    Swift.String keyPrefix;
    nominal type descriptor for XUtilities.XKeychainStore keychainStore;
    ChatCrypto.ChatKeyMaterialPersistence persistence;
    ChatCrypto.ChatLRUCache ChatCrypto.StoredKeyPairID ChatCrypto.ChatStoredKeyPair keyPairs;
    ChatCrypto.ChatLRUCache ChatCrypto.ConversationKeyID nominal type descriptor for CryptoKit.SymmetricKey ? conversationKeys;
}

@end

#endif /* _TtC10ChatCrypto20ChatKeyMaterialStore_h */

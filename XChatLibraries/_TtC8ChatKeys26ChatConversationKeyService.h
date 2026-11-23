//
#ifndef _TtC8ChatKeys26ChatConversationKeyService_h
#define _TtC8ChatKeys26ChatConversationKeyService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatCrypto.ChatKeyMaterialStore, ChatKeys.ChatConversationKeyIndex, ChatKeys.ChatCryptoPolicy, ChatKeys.ChatEventSignatureVerifier, ChatKeys.ChatEventSigner, ChatKeys.ChatIdentityKeyService, ChatKeys.ChatKeypairVersionIndex, ChatKeys.ChatPublicKeyDirectory, ChatSyncState.ChatSessionScribing, ChatTransport.ChatGraphQLClient, _$sSDySSScTyyt _$ss5NeverOMn, _$sSS, _TtCs12_SwiftObject;

@interface ChatKeys.ChatConversationKeyService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.String userID;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatCrypto.ChatKeyMaterialStore keyMaterialStore;
    ChatKeys.ChatKeypairVersionIndex keypairVersionIndex;
    ChatKeys.ChatConversationKeyIndex conversationKeyIndex;
    ChatKeys.ChatPublicKeyDirectory publicKeyDirectory;
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatKeys.ChatCryptoPolicy policy;
    ChatSyncState.ChatSessionScribing scriber;
    ChatKeys.ChatEventSigner signer;
    ChatKeys.ChatEventSignatureVerifier verifier;
    Swift.Dictionary empty-list Swift.StringSwift.Task empty-list () nominal type descriptor for Swift.Never conversationQueues;
}

@end

#endif /* _TtC8ChatKeys26ChatConversationKeyService_h */

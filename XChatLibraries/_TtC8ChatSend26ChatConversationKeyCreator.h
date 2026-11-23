//
#ifndef _TtC8ChatSend26ChatConversationKeyCreator_h
#define _TtC8ChatSend26ChatConversationKeyCreator_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatKeys.ChatConversationKeyIndex, ChatKeys.ChatConversationKeyService, ChatKeys.ChatCryptoPolicy, ChatKeys.ChatEventSigner, ChatKeys.ChatIdentityKeyService, ChatModelsCore.UserID, ChatSync.ChatProjection, ChatSyncState.ChatDefaultTimeToLiveProviding, _$sSD -> ChatModelsCore.ConversationID _$sScTyyt _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface ChatSend.ChatConversationKeyCreator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatKeys.ChatConversationKeyIndex conversationKeyIndex;
    ChatKeys.ChatConversationKeyService conversationKeyService;
    ChatKeys.ChatCryptoPolicy cryptoPolicy;
    ChatSyncState.ChatDefaultTimeToLiveProviding defaultTimeToLiveProvider;
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSync.ChatProjection projection;
    ChatModelsCore.UserID owner;
    ChatKeys.ChatEventSigner signer;
    Swift.Dictionary -> ChatModelsCore.ConversationID Swift.Task empty-list () nominal type descriptor for Swift.Never staleRotationQueues;
}

@end

#endif /* _TtC8ChatSend26ChatConversationKeyCreator_h */

//
#ifndef _TtC8ChatKeys22ChatIdentityKeyService_h
#define _TtC8ChatKeys22ChatIdentityKeyService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatCrypto.ChatKeyMaterialStore, ChatKeys.ChatCryptoPolicy, ChatKeys.ChatKeypairVersionIndex, ChatKeys.ChatKeypairVersionMergeStream, ChatKeys.ChatLocalCheckRetryStream, ChatSyncState.ChatSessionScribing, ChatTransport.ChatGraphQLClient, _$sSS, _$sScS -> ChatKeys.ChatKeypairCheck, _$sScS12ContinuationVMn ChatKeys.ChatKeypairCheck _$s_ ->, _$sScS12ContinuationVMn _$sySh -> _$ss5Int64VMn _$sG_, _$sScSySh -> _$ss5Int64VMn, _$sScT -> ChatKeys.ChatRegistrationResult _$ss5ErrorMp ?, _$sSi, _TtCs12_SwiftObject;

@interface ChatKeys.ChatIdentityKeyService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.AsyncStream -> ChatKeys.ChatKeypairCheck localChecks;
    Swift.AsyncStream empty-list Swift.Set -> nominal type descriptor for Swift.Int64 recoveredVersions;
    Swift.String userID;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatCrypto.ChatKeyMaterialStore keyMaterialStore;
    ChatKeys.ChatKeypairVersionIndex versionIndex;
    ChatKeys.ChatCryptoPolicy policy;
    ChatSyncState.ChatSessionScribing scriber;
    ChatKeys.ChatKeypairVersionMergeStream keypairVersionMergeStream;
    ChatKeys.ChatLocalCheckRetryStream localCheckRetryStream;
    nominal type descriptor for Swift.AsyncStream.Continuation ChatKeys.ChatKeypairCheck  first-element-marker  -> localChecksContinuation;
    nominal type descriptor for Swift.AsyncStream.Continuation  empty-list Swift.Set -> nominal type descriptor for Swift.Int64 _$sG_ recoveredVersionsContinuation;
    Swift.Task -> ChatKeys.ChatRegistrationResult protocol descriptor for Swift.Error ? inFlightRegistration;
    Swift.Int signingKeyRepairCount;
}

@end

#endif /* _TtC8ChatKeys22ChatIdentityKeyService_h */

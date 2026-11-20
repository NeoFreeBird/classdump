//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatKeys23XChatIdentityKeyService_h
#define _TtC8ChatKeys23XChatIdentityKeyService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatCrypto.XChatKeyMaterialStore, ChatKeys.XChatCryptoPolicy, ChatKeys.XChatKeypairVersionIndex, ChatTransport.XChatGraphQLClient, Swift.Bool, _$sSS, _$sScS -> ChatKeys.XChatKeypairCheck, _$sScS12ContinuationVMn ChatKeys.XChatKeypairCheck _$s_ ->, _$sScS12ContinuationVMn _$sySh -> _$ss5Int64VMn _$sG_, _$sScSySh -> _$ss5Int64VMn, _$sScT -> ChatKeys.XChatRegistrationResult _$ss5ErrorMp ?, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _$sySaySSGYbc, _TtCs12_SwiftObject;

@interface ChatKeys.XChatIdentityKeyService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.AsyncStream -> ChatKeys.XChatKeypairCheck localChecks;
    Swift.AsyncStream empty-list Swift.Set -> nominal type descriptor for Swift.Int64 recoveredVersions;
    Swift.String userID;
    ChatTransport.XChatGraphQLClient graphQLClient;
    ChatCrypto.XChatKeyMaterialStore keyMaterialStore;
    ChatKeys.XChatKeypairVersionIndex versionIndex;
    ChatKeys.XChatCryptoPolicy policy;
    @Sendable ([Swift.String]) -> () reportRealmViolations;
    nominal type descriptor for Swift.AsyncStream.Continuation ChatKeys.XChatKeypairCheck  first-element-marker  -> localChecksContinuation;
    nominal type descriptor for Swift.AsyncStream.Continuation  empty-list Swift.Set -> nominal type descriptor for Swift.Int64 _$sG_ recoveredVersionsContinuation;
    Swift.Task -> ChatKeys.XChatRegistrationResult protocol descriptor for Swift.Error ? inFlightRegistration;
    Swift.Int signingKeyRepairCount;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? localCheckRetry;
    Swift.Int localCheckRetryAttempts;
    Swift.Bool isServerMergeRequested;
}

@end

#endif /* _TtC8ChatKeys23XChatIdentityKeyService_h */

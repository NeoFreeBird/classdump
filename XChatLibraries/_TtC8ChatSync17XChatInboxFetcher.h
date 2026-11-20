//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync17XChatInboxFetcher_h
#define _TtC8ChatSync17XChatInboxFetcher_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatKeys.XChatConversationKeyService, ChatKeys.XChatKeypairVersionIndex, ChatModelsCore.UserID, ChatSync.XChatBatchProcessor, ChatSync.XChatProjection, ChatSync.XChatSQLiteFetchedRangeStore, ChatSync.XChatSQLiteRawEventStore, ChatSync.XChatSQLiteSyncStateStore, ChatSync.XChatSQLiteWipe, ChatSync.XChatSQLiteWriteGate, ChatSync.XChatSyncPolicy, ChatSync.XChatUserDirectory, ChatSyncState.ChatGrokBotInXChatPageStream, ChatSyncState.ChatSessionScribing, ChatTransport.XChatGraphQLClient, ChatTransport.XChatThriftCodec, Swift.Bool, _$sShySSG, _TtCs12_SwiftObject;

@interface ChatSync.XChatInboxFetcher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatModelsCore.UserID owner;
    ChatTransport.XChatGraphQLClient graphQLClient;
    ChatSync.XChatSQLiteSyncStateStore stateStore;
    ChatSync.XChatSQLiteFetchedRangeStore fetchedRangeStore;
    ChatSync.XChatSQLiteWipe wipe;
    ChatSync.XChatSQLiteWriteGate writeGate;
    ChatSync.XChatBatchProcessor batchProcessor;
    ChatSync.XChatProjection projection;
    ChatSync.XChatUserDirectory userDirectory;
    ChatKeys.XChatConversationKeyService conversationKeyService;
    ChatKeys.XChatKeypairVersionIndex keypairVersionIndex;
    ChatSync.XChatSyncPolicy policy;
    ChatSync.XChatSQLiteRawEventStore rawEventStore;
    Swift.Bool isConversationKeyRecoveryEnabled;
    ChatSyncState.ChatSessionScribing scriber;
    ChatSyncState.ChatGrokBotInXChatPageStream grokBotInXChatPageStream;
    ChatTransport.XChatThriftCodec codec;
    Swift.Set<Swift.String> scribedMissingConversationKeyConversationIDs;
}

@end

#endif /* _TtC8ChatSync17XChatInboxFetcher_h */

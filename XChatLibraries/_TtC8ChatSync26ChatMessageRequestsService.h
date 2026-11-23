//
#ifndef _TtC8ChatSync26ChatMessageRequestsService_h
#define _TtC8ChatSync26ChatMessageRequestsService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatKeys.ChatConversationKeyService, ChatModelsCore.UserID, ChatSync.ChatEventProcessor, ChatSync.ChatProjection, ChatSync.ChatSyncPolicy, ChatSync.ChatUserDirectory, ChatSyncState.ChatMessageRequestsStream, ChatSyncState.ChatSessionScribing, ChatTransport.ChatGraphQLClient, ChatTransport.ChatThriftCodec, _$sSD -> ChatModelsCore.MessageRequestsTab ChatSync.LoadedPage, _$sSD -> ChatModelsCore.MessageRequestsTab _$sScTyyt _$ss5NeverOMn, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> ChatModelsCore.MessageRequestsTab, _TtCs12_SwiftObject;

@interface ChatSync.ChatMessageRequestsService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatModelsCore.UserID owner;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatKeys.ChatConversationKeyService conversationKeyService;
    ChatSync.ChatEventProcessor processor;
    ChatSync.ChatUserDirectory userDirectory;
    ChatSync.ChatProjection projection;
    ChatSyncState.ChatMessageRequestsStream messageRequestsStream;
    ChatSync.ChatSyncPolicy policy;
    ChatSyncState.ChatSessionScribing scriber;
    ChatTransport.ChatThriftCodec codec;
    Swift.Dictionary -> ChatModelsCore.MessageRequestsTab ChatSync.LoadedPage pages;
    Swift.Dictionary -> ChatModelsCore.MessageRequestsTab Swift.Task empty-list () nominal type descriptor for Swift.Never loadTasks;
    Swift.Set -> ChatModelsCore.MessageRequestsTab failedTabs;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? summaryTask;
}

@end

#endif /* _TtC8ChatSync26ChatMessageRequestsService_h */

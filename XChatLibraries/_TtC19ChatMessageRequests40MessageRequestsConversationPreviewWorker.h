//
#ifndef _TtC19ChatMessageRequests40MessageRequestsConversationPreviewWorker_h
#define _TtC19ChatMessageRequests40MessageRequestsConversationPreviewWorker_h
@import Foundation;

@class ChatMessageRequests.MessageRequestsConversationPreviewStream, ChatModelsCore.MessageRequestsTab, ChatModelsCore.UserID, ChatSyncState.ChatInboxProviding, _$s11XFoundation13CombineWorkerCN;

@interface ChatMessageRequests.MessageRequestsConversationPreviewWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatMessageRequests.MessageRequestsConversationPreviewStream messageRequestsConversationPreviewStream;
    ChatModelsCore.MessageRequestsTab messageRequestsTab;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC19ChatMessageRequests40MessageRequestsConversationPreviewWorker_h */

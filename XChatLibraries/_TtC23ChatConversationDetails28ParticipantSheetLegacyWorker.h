//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails28ParticipantSheetLegacyWorker_h
#define _TtC23ChatConversationDetails28ParticipantSheetLegacyWorker_h
@import Foundation;

@class ChatConversationDetails.ConversationLegacyStream, ChatModels.ConversationMetadataStream, ChatSyncState.ChatConversationProviding, ChatSyncState.ChatInboxProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversationDetails.ParticipantSheetLegacyWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationLegacyStream conversationLegacyStream;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatSyncState.ChatInboxProviding inboxProvider;
}

@end

#endif /* _TtC23ChatConversationDetails28ParticipantSheetLegacyWorker_h */

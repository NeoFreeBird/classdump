//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails41ConversationAttachmentMediaDownloadWorker_h
#define _TtC23ChatConversationDetails41ConversationAttachmentMediaDownloadWorker_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentMediaDownloadStream, ChatModels.ConversationMetadataStream, ChatSyncState.ChatMediaDownloadQueue, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversationDetails.ConversationAttachmentMediaDownloadWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatSyncState.ChatMediaDownloadQueue downloadQueue;
    ChatConversationDetails.ConversationAttachmentMediaDownloadStream mediaDownloadStream;
}

@end

#endif /* _TtC23ChatConversationDetails41ConversationAttachmentMediaDownloadWorker_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation28ConversationCallStatusWorker_h
#define _TtC16ChatConversation28ConversationCallStatusWorker_h
@import Foundation;

@class ChatModels.CallStatusStream, ChatSyncState.ChatConversationProviding, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.ConversationCallStatusWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModels.CallStatusStream callStatusStream;
    ChatSyncState.ChatConversationProviding conversationProvider;
}

@end

#endif /* _TtC16ChatConversation28ConversationCallStatusWorker_h */

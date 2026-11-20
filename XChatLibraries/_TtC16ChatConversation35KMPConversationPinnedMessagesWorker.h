//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation35KMPConversationPinnedMessagesWorker_h
#define _TtC16ChatConversation35KMPConversationPinnedMessagesWorker_h
@import Foundation;

@class ChatModels.ConversationChatItemsStream, ChatModels.ConversationPinnedMessagesStream, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B28Arm64_mainPinnedMessagesRepo_p;

@interface ChatConversation.KMPConversationPinnedMessagesWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModels.ConversationChatItemsStream conversationChatItemsStream;
    ChatModels.ConversationPinnedMessagesStream conversationPinnedMessagesStream;
    __C.Subsystem_ios_iosArm64_mainPinnedMessagesRepo pinnedMessagesRepo;
}

@end

#endif /* _TtC16ChatConversation35KMPConversationPinnedMessagesWorker_h */

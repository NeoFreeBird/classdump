//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession21ChatKeyRotationWorker_h
#define _TtC11ChatSession21ChatKeyRotationWorker_h
@import Foundation;

@class ChatSend.XChatFlaggedConversationKeyRotator, ChatSession.ChatStorageStream, ChatSync.ChatKeyRotationStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatKeyRotationWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatKeyRotationStream keyRotationStream;
    ChatSend.XChatFlaggedConversationKeyRotator flaggedConversationKeyRotator;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession21ChatKeyRotationWorker_h */

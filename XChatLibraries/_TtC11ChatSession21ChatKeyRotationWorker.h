//
#ifndef _TtC11ChatSession21ChatKeyRotationWorker_h
#define _TtC11ChatSession21ChatKeyRotationWorker_h
@import Foundation;

@class ChatSend.ChatFlaggedConversationKeyRotator, ChatSession.ChatStorageStream, ChatSync.ChatKeyRotationStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatKeyRotationWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatKeyRotationStream keyRotationStream;
    ChatSend.ChatFlaggedConversationKeyRotator flaggedConversationKeyRotator;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession21ChatKeyRotationWorker_h */

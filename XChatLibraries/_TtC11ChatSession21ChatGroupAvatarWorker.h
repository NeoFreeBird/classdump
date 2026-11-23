//
#ifndef _TtC11ChatSession21ChatGroupAvatarWorker_h
#define _TtC11ChatSession21ChatGroupAvatarWorker_h
@import Foundation;

@class ChatSession.ChatStorageStream, ChatSync.ChatGroupAvatarDownloader, ChatSync.ChatGroupAvatarStream, ChatSync.ChatProjection, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatGroupAvatarWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatGroupAvatarStream groupAvatarStream;
    ChatSync.ChatGroupAvatarDownloader groupAvatarDownloader;
    ChatSync.ChatProjection projection;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession21ChatGroupAvatarWorker_h */

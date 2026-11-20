//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession21ChatGroupAvatarWorker_h
#define _TtC11ChatSession21ChatGroupAvatarWorker_h
@import Foundation;

@class ChatSession.ChatStorageStream, ChatSync.ChatGroupAvatarDownloader, ChatSync.ChatGroupAvatarStream, ChatSync.XChatProjection, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatGroupAvatarWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatGroupAvatarStream groupAvatarStream;
    ChatSync.ChatGroupAvatarDownloader groupAvatarDownloader;
    ChatSync.XChatProjection projection;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession21ChatGroupAvatarWorker_h */

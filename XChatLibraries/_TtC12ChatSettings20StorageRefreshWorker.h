//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12ChatSettings20StorageRefreshWorker_h
#define _TtC12ChatSettings20StorageRefreshWorker_h
@import Foundation;

@class ChatSyncState.ChatActionStream, ChatSyncState.ChatContentProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSettings.StorageRefreshWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionStream actionStream;
    ChatSyncState.ChatContentProviding contentProvider;
}

@end

#endif /* _TtC12ChatSettings20StorageRefreshWorker_h */

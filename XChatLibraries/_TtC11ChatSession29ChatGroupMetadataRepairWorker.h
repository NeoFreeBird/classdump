//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession29ChatGroupMetadataRepairWorker_h
#define _TtC11ChatSession29ChatGroupMetadataRepairWorker_h
@import Foundation;

@class ChatSession.ChatStorageStream, ChatSync.ChatGroupMetadataRepairStream, ChatSyncState.ChatActionStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatGroupMetadataRepairWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionStream actionStream;
    ChatSync.ChatGroupMetadataRepairStream groupMetadataRepairStream;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession29ChatGroupMetadataRepairWorker_h */

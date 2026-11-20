//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12ChatSettings18StorageStateWorker_h
#define _TtC12ChatSettings18StorageStateWorker_h
@import Foundation;

@class ChatSettings.StorageRetentionStream, ChatSettings.StorageUsageStream, ChatSyncState.ChatAccountProviding, _$s11XFoundation13CombineWorkerCN;

@interface ChatSettings.StorageStateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatAccountProviding accountProvider;
    ChatSettings.StorageRetentionStream retentionStream;
    ChatSettings.StorageUsageStream usageStream;
}

@end

#endif /* _TtC12ChatSettings18StorageStateWorker_h */

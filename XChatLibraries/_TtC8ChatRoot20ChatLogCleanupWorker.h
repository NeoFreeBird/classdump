//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatRoot20ChatLogCleanupWorker_h
#define _TtC8ChatRoot20ChatLogCleanupWorker_h
@import Foundation;

@class ChatLogging.ChatExpiredLogFileRemover, _$s11XFoundation11AsyncWorkerCN, _$sSo20NSNotificationCenterC;

@interface ChatRoot.ChatLogCleanupWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatLogging.ChatExpiredLogFileRemover expiredLogFileRemover;
    __C.NSNotificationCenter notificationCenter;
}

@end

#endif /* _TtC8ChatRoot20ChatLogCleanupWorker_h */

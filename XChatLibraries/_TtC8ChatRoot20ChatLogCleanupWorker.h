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

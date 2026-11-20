//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9ChatInbox20InboxPullRetryWorker_h
#define _TtC9ChatInbox20InboxPullRetryWorker_h
@import Foundation;

@class ChatInbox.InboxPullRetryStream, ChatSyncState.ChatActionStream, _$s11XFoundation13CombineWorkerCN;

@interface ChatInbox.InboxPullRetryWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionStream actionStream;
    ChatInbox.InboxPullRetryStream inboxPullRetryStream;
}

@end

#endif /* _TtC9ChatInbox20InboxPullRetryWorker_h */

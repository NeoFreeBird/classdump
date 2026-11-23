//
#ifndef _TtC9ChatInbox24KMPInboxPaginationWorker_h
#define _TtC9ChatInbox24KMPInboxPaginationWorker_h
@import Foundation;

@class ChatConversationList.ConversationListStateStream, ChatInbox.InboxConversationPreviewStream, _$s11XFoundation13CombineWorkerCN, _$sSo014Subsystem_ios_B36Arm64_mainIosConversationPreviewRepoC;

@interface ChatInbox.KMPInboxPaginationWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainIosConversationPreviewRepo conversationPreviewRepo;
    ChatInbox.InboxConversationPreviewStream inboxConversationPreviewStream;
    ChatConversationList.ConversationListStateStream listStateStream;
}

@end

#endif /* _TtC9ChatInbox24KMPInboxPaginationWorker_h */

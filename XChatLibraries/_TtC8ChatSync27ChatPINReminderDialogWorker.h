//
#ifndef _TtC8ChatSync27ChatPINReminderDialogWorker_h
#define _TtC8ChatSync27ChatPINReminderDialogWorker_h
@import Foundation;

@class ChatKeys.ChatIdentityKeyService, ChatSync.ChatSocketInstructionStream, ChatSyncState.ChatInboxDialogStream, Swift.Bool, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSync.ChatPINReminderDialogWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatSocketInstructionStream socketInstructionStream;
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSyncState.ChatInboxDialogStream inboxDialogStream;
    Swift.Bool isManagedPINUpgradePromptEnabled;
}

@end

#endif /* _TtC8ChatSync27ChatPINReminderDialogWorker_h */

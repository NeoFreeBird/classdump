//
#ifndef _TtC8ChatSync33ChatTemporaryPasscodeDialogWorker_h
#define _TtC8ChatSync33ChatTemporaryPasscodeDialogWorker_h
@import Foundation;

@class ChatKeys.ChatIdentityKeyService, ChatSync.ChatSocketInstructionStream, ChatSync.ChatTemporaryPasscodeTokenStore, ChatSyncState.ChatInboxDialogStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSync.ChatTemporaryPasscodeDialogWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatSocketInstructionStream socketInstructionStream;
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSyncState.ChatInboxDialogStream inboxDialogStream;
    ChatSync.ChatTemporaryPasscodeTokenStore temporaryPasscodeTokenStore;
}

@end

#endif /* _TtC8ChatSync33ChatTemporaryPasscodeDialogWorker_h */

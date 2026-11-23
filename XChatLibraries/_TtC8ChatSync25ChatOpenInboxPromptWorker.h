//
#ifndef _TtC8ChatSync25ChatOpenInboxPromptWorker_h
#define _TtC8ChatSync25ChatOpenInboxPromptWorker_h
@import Foundation;

@class ChatSync.ChatDmSettingsService, ChatSync.ChatSocketInstructionStream, ChatSyncState.ChatDmSettingsStream, ChatSyncState.ChatInboxDialogStream, _$s11XFoundation11AsyncWorkerCN, _$sSi;

@interface ChatSync.ChatOpenInboxPromptWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatSocketInstructionStream socketInstructionStream;
    ChatSync.ChatDmSettingsService dmSettingsService;
    ChatSyncState.ChatDmSettingsStream dmSettingsStream;
    ChatSyncState.ChatInboxDialogStream inboxDialogStream;
    Swift.Int openInboxPromptVariant;
}

@end

#endif /* _TtC8ChatSync25ChatOpenInboxPromptWorker_h */

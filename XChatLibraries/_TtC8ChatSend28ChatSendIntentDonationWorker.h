//
#ifndef _TtC8ChatSend28ChatSendIntentDonationWorker_h
#define _TtC8ChatSend28ChatSendIntentDonationWorker_h
@import Foundation;

@class ChatSend.ChatSendInitiatedStream, ChatSyncState.ChatConversationMetadataStream, ChatSyncState.ChatIntentDonating, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSend.ChatSendIntentDonationWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatConversationMetadataStream conversationMetadataStream;
    ChatSyncState.ChatIntentDonating intentDonator;
    ChatSend.ChatSendInitiatedStream sendInitiatedStream;
}

@end

#endif /* _TtC8ChatSend28ChatSendIntentDonationWorker_h */

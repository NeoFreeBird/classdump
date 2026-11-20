//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14DMConversation32ConversationIntentDonationWorker_h
#define _TtC14DMConversation32ConversationIntentDonationWorker_h
@import Foundation;

@class _$s10ChatModels31ConversationSendInitiatedStreamCMn, _$s11XFoundation11AsyncWorkerCN, _$s13ChatSyncState0A14InboxProvidingMp, _$s13ChatUtilities0A14IntentDonatingMp;

@interface DMConversation.ConversationIntentDonationWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatModels.ConversationSendInitiatedStream conversationSendInitiatedStream;
    protocol descriptor for ChatUtilities.ChatIntentDonating intentDonator;
    protocol descriptor for ChatSyncState.ChatInboxProviding inboxProvider;
}

@end

#endif /* _TtC14DMConversation32ConversationIntentDonationWorker_h */

//
#ifndef _TtC14DMConversation36KMPConversationRecipientInviteWorker_h
#define _TtC14DMConversation36KMPConversationRecipientInviteWorker_h
@import Foundation;

@class _$s10ChatModels0A24ToastActionTriggerStreamCMn, _$s11XFoundation13CombineWorkerCN, _$s14ChatModelsCore14ConversationIDOMn, _$s14ChatModelsCore6UserIDVMn, _$s19ChatMessageComposer0bC19ActionTriggerStreamCMn, _$s19ChatMessageComposer0bC26RecipientInviteStateStreamCMn, _$sSo014Subsystem_ios_B25Arm64_mainUserInviteStore_p;

@interface DMConversation.KMPConversationRecipientInviteWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatModelsCore.ConversationID conversationID;
    nominal type descriptor for ChatMessageComposer.MessageComposerActionTriggerStream messageComposerActionTriggerStream;
    nominal type descriptor for ChatMessageComposer.MessageComposerRecipientInviteStateStream messageComposerRecipientInviteStateStream;
    nominal type descriptor for ChatModelsCore.UserID owner;
    nominal type descriptor for ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    __C.Subsystem_ios_iosArm64_mainUserInviteStore userInviteStore;
}

@end

#endif /* _TtC14DMConversation36KMPConversationRecipientInviteWorker_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation45KMPPinnedMessagesListConversationActionWorker_h
#define _TtC16ChatConversation45KMPPinnedMessagesListConversationActionWorker_h
@import Foundation;

@class ChatConversation.ConversationActionTriggerStreamV2, ChatConversation.MessageActionSheetBuilder, ChatConversation.MessageInfoBuilder, ChatConversation.MessageInfoTrayBuilder, ChatConversation.PinnedMessagesListWorkerPluginContext, ChatConversation.ReactionSheetBuilder, ChatConversationDetails.ParticipantSheetBuilder, ChatConversationServices.ConversationSource, ChatMessageForwardSheet.MessageForwardSheetBuildable ?, ChatModels.ConversationChatItemsStream, ChatModels.ConversationMetadataStream, ChatModelsCore.UserID, ChatUtilities.PinnedMessageSender, Swift.Bool, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.KMPPinnedMessagesListConversationActionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatConversation.PinnedMessagesListWorkerPluginContext context;
    ChatConversation.ConversationActionTriggerStreamV2 conversationActionTriggerStreamV2;
    ChatModels.ConversationChatItemsStream conversationChatItemsStream;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversationServices.ConversationSource conversationSource;
    Swift.Bool isNativeRewrite;
    ChatConversation.MessageActionSheetBuilder messageActionSheetBuilder;
    ChatMessageForwardSheet.MessageForwardSheetBuildable ? messageForwardSheetBuilder;
    ChatConversation.MessageInfoBuilder messageInfoBuilder;
    ChatConversation.MessageInfoTrayBuilder messageInfoTrayBuilder;
    ChatModelsCore.UserID owner;
    ChatConversationDetails.ParticipantSheetBuilder participantSheetBuilder;
    ChatUtilities.PinnedMessageSender pinnedMessageSender;
    ChatConversation.ReactionSheetBuilder reactionSheetBuilder;
}

@end

#endif /* _TtC16ChatConversation45KMPPinnedMessagesListConversationActionWorker_h */

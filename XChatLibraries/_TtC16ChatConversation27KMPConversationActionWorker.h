//
#ifndef _TtC16ChatConversation27KMPConversationActionWorker_h
#define _TtC16ChatConversation27KMPConversationActionWorker_h
@import Foundation;

@class ChatConversation.ConversationActionTriggerStreamV2, ChatConversation.ConversationWorkerPluginContext, ChatConversation.MessageActionSheetBuilder, ChatConversation.MessageInfoBuilder, ChatConversation.MessageInfoTrayBuilder, ChatConversation.PinnedMessagesListBuilder, ChatConversation.ReactionSheetBuilder, ChatConversation.SafetyNumberEducationBuilder, ChatConversationDetails.ParticipantSheetBuilder, ChatConversationDetails.SafetyNumberBuilder, ChatConversationServices.ConversationNavigation, ChatConversationServices.ConversationSource, ChatMessageForwardSheet.MessageForwardSheetBuildable ?, ChatModels.ConversationChatItemsStream, ChatModels.ConversationMetadataStream, ChatModelsCore.UserID, ChatNumber.ChatNumberBuilder, ChatUI.ChatImageLoading, ChatUI.ChatNavigationStackFactory, Swift.Bool, _$s11XFoundation13CombineWorkerCN, _$s4XGif14GifImageLoaderCMn;

@interface ChatConversation.KMPConversationActionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatNumber.ChatNumberBuilder chatNumberBuilder;
    ChatConversation.ConversationWorkerPluginContext context;
    ChatConversation.ConversationActionTriggerStreamV2 conversationActionTriggerStreamV2;
    ChatModels.ConversationChatItemsStream conversationChatItemsStream;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatConversationServices.ConversationSource conversationSource;
    nominal type descriptor for XGif.GifImageLoader gifImageLoader;
    ChatUI.ChatImageLoading imageLoader;
    Swift.Bool isNativeRewrite;
    ChatConversation.MessageActionSheetBuilder messageActionSheetBuilder;
    ChatMessageForwardSheet.MessageForwardSheetBuildable ? messageForwardSheetBuilder;
    ChatConversation.MessageInfoBuilder messageInfoBuilder;
    ChatConversation.MessageInfoTrayBuilder messageInfoTrayBuilder;
    ChatUI.ChatNavigationStackFactory navigationStackFactory;
    ChatModelsCore.UserID owner;
    ChatConversationDetails.ParticipantSheetBuilder participantSheetBuilder;
    ChatConversation.PinnedMessagesListBuilder pinnedMessagesListBuilder;
    ChatConversation.ReactionSheetBuilder reactionSheetBuilder;
    ChatConversationDetails.SafetyNumberBuilder safetyNumberBuilder;
    ChatConversation.SafetyNumberEducationBuilder safetyNumberEducationBuilder;
}

@end

#endif /* _TtC16ChatConversation27KMPConversationActionWorker_h */

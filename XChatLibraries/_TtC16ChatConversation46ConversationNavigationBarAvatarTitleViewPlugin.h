//
#ifndef _TtC16ChatConversation46ConversationNavigationBarAvatarTitleViewPlugin_h
#define _TtC16ChatConversation46ConversationNavigationBarAvatarTitleViewPlugin_h
@import Foundation;

@class ChatConversation.AvatarTitlePillView ?, ChatConversation.ConversationNavigationBarTitleViewPluginContext, ChatConversationServices.ConversationSource, ChatModels.ConversationMetadataStream, ChatModelsCore.ConversationID, ChatUI.ChatImageLoading, ChatUI.ConversationAvatarStyle ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface ChatConversation.ConversationNavigationBarAvatarTitleViewPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.ConversationNavigationBarTitleViewPluginContext context;
    ChatModelsCore.ConversationID conversationID;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversationServices.ConversationSource conversationSource;
    ChatUI.ChatImageLoading imageLoader;
    ChatConversation.AvatarTitlePillView ? avatarTitlePillView;
    ChatUI.ConversationAvatarStyle ? currentAvatarStyle;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)didTap;

@end

#endif /* _TtC16ChatConversation46ConversationNavigationBarAvatarTitleViewPlugin_h */

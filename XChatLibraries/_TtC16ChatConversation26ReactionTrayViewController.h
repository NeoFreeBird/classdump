//
#ifndef _TtC16ChatConversation26ReactionTrayViewController_h
#define _TtC16ChatConversation26ReactionTrayViewController_h
@import Foundation;

@class ChatConversation.MessageReactions, ChatConversation.MessageReactionsStream, ChatConversation.ReactionTrayActionTriggerStream, ChatConversation.ReactionTrayPresentation, ChatConversation.ReactionTrayWorkerPluginPoint, ChatConversationServices.ConversationNavigation, ChatEmojiPicker.EmojiPickerPresenter, ChatModels.ConversationMetadataStream, ChatUI.ChatImageLoading, Swift.Bool, _$s13XDesignSystem29TrayListContentViewControllerCN, _$sSDySS ChatConversation.MessageInfoAvatarView, _$sSDySSSo7UILabelCG, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo25UIImpactFeedbackGeneratorC;

@interface ChatConversation.ReactionTrayViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    ChatConversation.ReactionTrayActionTriggerStream actionTriggerStream;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatEmojiPicker.EmojiPickerPresenter emojiPickerPresenter;
    __C.UIImpactFeedbackGenerator feedbackGenerator;
    ChatUI.ChatImageLoading imageLoader;
    Swift.Bool isMessageEstablished;
    ChatConversation.MessageReactionsStream messageReactionsStream;
    ChatConversation.ReactionTrayPresentation presentation;
    ChatConversation.ReactionTrayWorkerPluginPoint workerPluginPoint;
    Swift.Dictionary empty-list Swift.String ChatConversation.MessageInfoAvatarView avatarViews;
    Swift.Bool canReactToMessage;
    [Swift.String : __C.UILabel] emojiLabels;
    ChatConversation.MessageReactions reactions;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)viewDidLoad;

@end

#endif /* _TtC16ChatConversation26ReactionTrayViewController_h */

//
#ifndef _TtC20ChatConversationList31ConversationListItemContentView_h
#define _TtC20ChatConversationList31ConversationListItemContentView_h
@import Foundation;

@class ChatConversationList.ConversationListItemViewModel ?, ChatConversationList.ConversationListSubtitleRowView, ChatConversationList.ConversationListTitleRowView, ChatUI.ConversationAvatarView, UIView, _$sSSSg, _$sSo6UIViewCSg, _$sSo9UIControlCSg;

@interface ChatConversationList.ConversationListItemContentView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ConversationAvatarView avatarView;
    ChatConversationList.ConversationListTitleRowView titleRowView;
    ChatConversationList.ConversationListSubtitleRowView subtitleRowView;
    __C.UIControl? accessoryButton;
    __C.UIView? customAvatarView;
    Swift.String? customAvatarViewID;
    ChatConversationList.ConversationListItemViewModel ? viewModel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)handleAccessoryTap;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC20ChatConversationList31ConversationListItemContentView_h */

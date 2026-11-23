//
#ifndef _TtC16ChatConversation31MessageAttachmentPostQuotedView_h
#define _TtC16ChatConversation31MessageAttachmentPostQuotedView_h
@import Foundation;

@class ChatConversation.MessageAttachmentPostCommunityNoteView, ChatConversation.MessageAttachmentPostQuotedView.Configuration ?, ChatUI.AffiliateBadgeView, ChatUI.ChatImageLoading ?, ChatUI.ChatRemoteImageView, ChatUI.PlayIconView, UIView, _$sSo7UILabelC;

@interface ChatConversation.MessageAttachmentPostQuotedView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ChatRemoteImageView avatarImageView;
    __C.UILabel nameLabel;
    __C.UILabel usernameLabel;
    __C.UILabel dateLabel;
    ChatUI.AffiliateBadgeView badgeRowView;
    __C.UILabel textLabel;
    ChatUI.ChatRemoteImageView mediaThumbnailView;
    ChatUI.PlayIconView mediaPlayIconView;
    ChatConversation.MessageAttachmentPostCommunityNoteView communityNoteView;
    ChatUI.ChatImageLoading ? imageLoader;
    ChatConversation.MessageAttachmentPostQuotedView.Configuration ? configuration;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC16ChatConversation31MessageAttachmentPostQuotedView_h */

//
#ifndef _TtC16ChatConversation31MessageAttachmentPostHeaderView_h
#define _TtC16ChatConversation31MessageAttachmentPostHeaderView_h
@import Foundation;

@class ChatUI.AffiliateBadgeView, ChatUI.ChatRemoteImageView, UIView, _$sSo7UILabelC;

@interface ChatConversation.MessageAttachmentPostHeaderView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ChatRemoteImageView avatarImageView;
    __C.UILabel nameLabel;
    __C.UILabel usernameLabel;
    __C.UILabel dateLabel;
    ChatUI.AffiliateBadgeView badgeRowView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation31MessageAttachmentPostHeaderView_h */

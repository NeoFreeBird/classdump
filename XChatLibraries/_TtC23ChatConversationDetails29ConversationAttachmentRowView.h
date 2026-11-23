//
#ifndef _TtC23ChatConversationDetails29ConversationAttachmentRowView_h
#define _TtC23ChatConversationDetails29ConversationAttachmentRowView_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentSenderAvatarView, ChatConversationDetails.ConversationAttachmentThumbnailView, UIView, _$sSo11UIStackViewC, _$sSo7UILabelC;

@interface ChatConversationDetails.ConversationAttachmentRowView : UIView { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationAttachmentSenderAvatarView avatarView;
    __C.UIStackView stackView;
    __C.UILabel subtitleLabel;
    __C.UIStackView textStackView;
    ChatConversationDetails.ConversationAttachmentThumbnailView thumbnailView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC23ChatConversationDetails29ConversationAttachmentRowView_h */

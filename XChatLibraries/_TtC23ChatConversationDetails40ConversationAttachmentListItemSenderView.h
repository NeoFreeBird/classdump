//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails40ConversationAttachmentListItemSenderView_h
#define _TtC23ChatConversationDetails40ConversationAttachmentListItemSenderView_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentSenderAvatarView, UIView, _$sSo15CAGradientLayerC;

@interface ChatConversationDetails.ConversationAttachmentListItemSenderView : UIView { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationAttachmentSenderAvatarView avatarView;
    __C.CAGradientLayer gradientLayer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC23ChatConversationDetails40ConversationAttachmentListItemSenderView_h */

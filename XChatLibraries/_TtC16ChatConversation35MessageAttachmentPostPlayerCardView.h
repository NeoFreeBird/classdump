//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation35MessageAttachmentPostPlayerCardView_h
#define _TtC16ChatConversation35MessageAttachmentPostPlayerCardView_h
@import Foundation;

@class ChatModels.PlayerCardPreview ?, ChatUI.ChatRemoteImageView, ChatUI.PlayIconView, UIView, _$sSo7UILabelC;

@interface ChatConversation.MessageAttachmentPostPlayerCardView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ChatRemoteImageView thumbnailImageView;
    ChatUI.PlayIconView playIconView;
    __C.UILabel titleLabel;
    __C.UILabel vanityLabel;
    ChatModels.PlayerCardPreview ? player;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation35MessageAttachmentPostPlayerCardView_h */

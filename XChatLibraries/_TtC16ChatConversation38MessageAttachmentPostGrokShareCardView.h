//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation38MessageAttachmentPostGrokShareCardView_h
#define _TtC16ChatConversation38MessageAttachmentPostGrokShareCardView_h
@import Foundation;

@class ChatModels.GrokSharePreview ?, ChatUI.ChatImageLoading ?, ChatUI.ChatRemoteImageView, UIView, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatConversation.MessageAttachmentPostGrokShareCardView : UIView { // (Swift)
    /* instance variables */
    __C.UIView headerContainer;
    __C.UILabel titleLabel;
    __C.UILabel disclaimerLabel;
    __C.UIImageView grokIconView;
    __C.UIView embeddedContainer;
    ChatUI.ChatRemoteImageView embeddedAvatarView;
    __C.UILabel embeddedNameLabel;
    __C.UIImageView embeddedBadgeView;
    __C.UILabel embeddedHandleLabel;
    __C.UILabel embeddedTextLabel;
    ChatUI.ChatRemoteImageView embeddedThumbnailView;
    __C.UILabel responseTextLabel;
    ChatUI.ChatRemoteImageView responseImageView;
    ChatModels.GrokSharePreview ? preview;
    ChatUI.ChatImageLoading ? imageLoader;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation38MessageAttachmentPostGrokShareCardView_h */

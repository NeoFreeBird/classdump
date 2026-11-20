//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation36MessageAttachmentPostArticleCardView_h
#define _TtC16ChatConversation36MessageAttachmentPostArticleCardView_h
@import Foundation;

@class ChatModels.ArticleCardPreview ?, ChatUI.ChatRemoteImageView, UIView, _$sSo7UILabelC;

@interface ChatConversation.MessageAttachmentPostArticleCardView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ChatRemoteImageView coverImageView;
    __C.UILabel titleLabel;
    __C.UILabel previewLabel;
    ChatModels.ArticleCardPreview ? article;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation36MessageAttachmentPostArticleCardView_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation25MessageAttachmentPostView_h
#define _TtC16ChatConversation25MessageAttachmentPostView_h
@import Foundation;

@class ChatConversation.MessageAttachmentPostContentView, ChatConversation.MessageAttachmentPostLoadingView ?, ChatConversation.MessageAttachmentPostVideoContentView ?, ChatConversation.MessageAttachmentPostView.Configuration ?, ChatConversation.MessageAttachmentURLView ?, ChatModels.PostAttachmentState, ChatUI.ChatImageLoading ?, Swift.Bool, UIView, _$sSo6UIViewC;

@interface ChatConversation.MessageAttachmentPostView : UIView { // (Swift)
    /* instance variables */
    __C.UIView containerView;
    ChatConversation.MessageAttachmentPostContentView contentView;
    ChatConversation.MessageAttachmentPostLoadingView ? loadingView;
    ChatConversation.MessageAttachmentURLView ? urlFallbackView;
    ChatConversation.MessageAttachmentPostVideoContentView ? videoContentView;
    ChatConversation.MessageAttachmentPostView.Configuration ? configuration;
    ChatUI.ChatImageLoading ? imageLoader;
    ChatModels.PostAttachmentState attachmentState;
    Swift.Bool isVideoLink;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC16ChatConversation25MessageAttachmentPostView_h */

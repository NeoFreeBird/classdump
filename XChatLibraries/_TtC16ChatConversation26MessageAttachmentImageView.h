//
#ifndef _TtC16ChatConversation26MessageAttachmentImageView_h
#define _TtC16ChatConversation26MessageAttachmentImageView_h
@import Foundation;

@class ChatConversation.MediaAttachmentNeedsResolvingView, ChatUI.AttachmentBorderView, ChatUI.AttachmentLoadingIndicatorView, ChatUI.AttachmentMediaService ?, ChatUI.MessageAttachmentErrorView, ChatUtilities.AttachmentMediaLoadCoordinator, UIView, _$s7Combine14AnyCancellableCMn ?, _$sSo11UIImageViewC;

@interface ChatConversation.MessageAttachmentImageView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView imageView;
    ChatUI.AttachmentBorderView borderView;
    ChatUI.MessageAttachmentErrorView errorView;
    ChatConversation.MediaAttachmentNeedsResolvingView needsResolvingView;
    ChatUI.AttachmentLoadingIndicatorView loadingIndicator;
    ChatUI.AttachmentMediaService ? attachmentMediaService;
    nominal type descriptor for Combine.AnyCancellable ? imageRequest;
    ChatUtilities.AttachmentMediaLoadCoordinator mediaLoadCoordinator;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;

@end

#endif /* _TtC16ChatConversation26MessageAttachmentImageView_h */

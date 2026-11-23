//
#ifndef _TtC23ChatConversationDetails39ConversationAttachmentListItemImageView_h
#define _TtC23ChatConversationDetails39ConversationAttachmentListItemImageView_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentListItemNeedsResolvingView, ChatUI.AttachmentLoadingIndicatorView, ChatUI.AttachmentMediaService ?, ChatUI.MessageAttachmentErrorView, ChatUtilities.AttachmentMediaLoadCoordinator, UIView, _$s7Combine14AnyCancellableCMn ?, _$sSo11UIImageViewC;

@interface ChatConversationDetails.ConversationAttachmentListItemImageView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView imageView;
    ChatUI.MessageAttachmentErrorView errorView;
    ChatConversationDetails.ConversationAttachmentListItemNeedsResolvingView needsResolvingView;
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

#endif /* _TtC23ChatConversationDetails39ConversationAttachmentListItemImageView_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails39ConversationAttachmentListItemVideoView_h
#define _TtC23ChatConversationDetails39ConversationAttachmentListItemVideoView_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentListItemNeedsResolvingView, ChatUI.AttachmentLoadingIndicatorView, ChatUI.AttachmentMediaService ?, ChatUI.MessageAttachmentErrorView, ChatUtilities.AttachmentMediaLoadCoordinator, UIView, _$s12CoreGraphics7CGFloatVMn, _$s7Combine14AnyCancellableCMn ?, _$sScTyyt _$ss5NeverOMn ?, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatConversationDetails.ConversationAttachmentListItemVideoView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView imageView;
    __C.UIView durationContainerView;
    __C.UILabel durationLabel;
    ChatUI.MessageAttachmentErrorView errorView;
    ChatConversationDetails.ConversationAttachmentListItemNeedsResolvingView needsResolvingView;
    ChatUI.AttachmentLoadingIndicatorView loadingIndicator;
    nominal type descriptor for CoreGraphics.CGFloat accessoryTrailingInset;
    ChatUI.AttachmentMediaService ? attachmentMediaService;
    nominal type descriptor for Combine.AnyCancellable ? thumbnailRequest;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? durationTask;
    ChatUtilities.AttachmentMediaLoadCoordinator mediaLoadCoordinator;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;

@end

#endif /* _TtC23ChatConversationDetails39ConversationAttachmentListItemVideoView_h */

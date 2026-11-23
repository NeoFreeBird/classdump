//
#ifndef _TtC16ChatConversation21MessageAttachmentView_h
#define _TtC16ChatConversation21MessageAttachmentView_h
@import Foundation;

@class ChatConversation.MessageAttachmentFileView ?, ChatConversation.MessageAttachmentGifView ?, ChatConversation.MessageAttachmentImageView ?, ChatConversation.MessageAttachmentJetfuelContainerView ?, ChatConversation.MessageAttachmentPaymentReceiptView ?, ChatConversation.MessageAttachmentPostView ?, ChatConversation.MessageAttachmentURLView ?, ChatConversation.MessageAttachmentUnifiedCardContainerView ?, ChatConversation.MessageAttachmentUnknownView ?, ChatConversation.MessageAttachmentVideoView ?, ChatConversation.MessageAttachmentView.Configuration ?, ChatModelsCore.AttachmentID ?, ChatUI.AttachmentBarProgressView, ChatUI.ChatColorProviding ?, ChatUI.MessageAttachmentAudioView ?, UIView, _$s7Combine14AnyCancellableCMn ?, _$sSo6UIViewCSg;

@interface ChatConversation.MessageAttachmentView : UIView { // (Swift)
    /* instance variables */
    ChatUI.AttachmentBarProgressView uploadProgressBar;
    ChatUI.MessageAttachmentAudioView ? $__lazy_storage_$_audioView;
    ChatConversation.MessageAttachmentImageView ? $__lazy_storage_$_imageView;
    ChatConversation.MessageAttachmentVideoView ? $__lazy_storage_$_videoView;
    ChatConversation.MessageAttachmentGifView ? $__lazy_storage_$_gifView;
    ChatConversation.MessageAttachmentFileView ? $__lazy_storage_$_fileView;
    ChatConversation.MessageAttachmentJetfuelContainerView ? $__lazy_storage_$_jetfuelView;
    ChatConversation.MessageAttachmentUnifiedCardContainerView ? $__lazy_storage_$_unifiedCardView;
    ChatConversation.MessageAttachmentURLView ? $__lazy_storage_$_urlView;
    ChatConversation.MessageAttachmentPostView ? $__lazy_storage_$_postView;
    ChatConversation.MessageAttachmentUnknownView ? $__lazy_storage_$_unknownView;
    ChatConversation.MessageAttachmentPaymentReceiptView ? $__lazy_storage_$_paymentReceiptView;
    ChatUI.ChatColorProviding ? colorProvider;
    ChatConversation.MessageAttachmentView.Configuration ? configuration;
    __C.UIView? visibleAttachmentKindView;
    nominal type descriptor for Combine.AnyCancellable ? uploadProgressCancellable;
    ChatModelsCore.AttachmentID ? uploadProgressAttachmentId;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation21MessageAttachmentView_h */

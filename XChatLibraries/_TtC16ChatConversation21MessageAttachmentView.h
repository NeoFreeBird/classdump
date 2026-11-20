//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation21MessageAttachmentView_h
#define _TtC16ChatConversation21MessageAttachmentView_h
@import Foundation;

@class ChatConversation.MessageAttachmentFileView ?, ChatConversation.MessageAttachmentGifView ?, ChatConversation.MessageAttachmentImageView ?, ChatConversation.MessageAttachmentJetfuelContainerView ?, ChatConversation.MessageAttachmentPaymentReceiptView ?, ChatConversation.MessageAttachmentPostView ?, ChatConversation.MessageAttachmentURLView ?, ChatConversation.MessageAttachmentUnifiedCardContainerView ?, ChatConversation.MessageAttachmentUnknownView ?, ChatConversation.MessageAttachmentVideoView ?, ChatConversation.MessageAttachmentView.Configuration ?, ChatModelsCore.AttachmentID ?, ChatUI.AttachmentBarProgressView, ChatUI.ChatColorProviding ?, ChatUI.MessageAttachmentAudioView ?, UIView, _$sSo014Subsystem_ios_B22Arm64_mainCancellation_pSg, _$sSo6UIViewCSg;

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
    __C.Subsystem_ios_iosArm64_mainCancellation? uploadProgressCancellable;
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

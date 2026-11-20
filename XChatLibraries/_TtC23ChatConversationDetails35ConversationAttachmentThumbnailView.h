//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails35ConversationAttachmentThumbnailView_h
#define _TtC23ChatConversationDetails35ConversationAttachmentThumbnailView_h
@import Foundation;

@class ChatUI.AttachmentLoadingIndicatorView, ChatUI.ChatRemoteImageView, UIView, _$s10Foundation3URLVMn ?, _$s7Combine11CancellableMp ?, _$sSo11UIImageViewC, _$sSo18NSLayoutConstraintCSg;

@interface ChatConversationDetails.ConversationAttachmentThumbnailView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView faviconImageView;
    __C.UIImageView glyphImageView;
    ChatUI.ChatRemoteImageView imageView;
    ChatUI.AttachmentLoadingIndicatorView loadingIndicator;
    __C.NSLayoutConstraint? $__lazy_storage_$_faviconHeightConstraint;
    __C.NSLayoutConstraint? $__lazy_storage_$_faviconWidthConstraint;
    protocol descriptor for Combine.Cancellable ? faviconRequest;
    nominal type descriptor for Foundation.URL ? faviconURL;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC23ChatConversationDetails35ConversationAttachmentThumbnailView_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation25MessageAttachmentFileView_h
#define _TtC16ChatConversation25MessageAttachmentFileView_h
@import Foundation;

@class ChatUI.AttachmentLoadingIndicatorView, UIView, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatConversation.MessageAttachmentFileView : UIView { // (Swift)
    /* instance variables */
    __C.UIView containerView;
    __C.UIImageView iconView;
    ChatUI.AttachmentLoadingIndicatorView loadingIndicator;
    __C.UILabel nameLabel;
    __C.UILabel extensionLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation25MessageAttachmentFileView_h */

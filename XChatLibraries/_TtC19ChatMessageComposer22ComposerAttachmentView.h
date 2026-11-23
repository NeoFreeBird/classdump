//
#ifndef _TtC19ChatMessageComposer22ComposerAttachmentView_h
#define _TtC19ChatMessageComposer22ComposerAttachmentView_h
@import Foundation;

@class ChatMessageComposer.ComposerAttachmentPreviewStyle _$sycSg, ChatMessageComposer.ComposerCloseButton, ChatMessageComposer.MediaImageService ?, ChatMessageComposer.MessageComposerAttachmentViewModel ?, Swift.Bool, UIView, _$sSo6UIViewCSg;

@interface ChatMessageComposer.ComposerAttachmentView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerAttachmentViewModel ? attachment;
    ChatMessageComposer.MediaImageService ? mediaImageService;
    ChatMessageComposer.ComposerAttachmentPreviewStyle _$sycSg previewStyleProvider;
    Swift.Bool isHighlighted;
    __C.UIView? contentView;
    ChatMessageComposer.ComposerCloseButton closeButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC19ChatMessageComposer22ComposerAttachmentView_h */

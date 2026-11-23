//
#ifndef _TtC19ChatMessageComposer27ComposerQuoteAttachmentView_h
#define _TtC19ChatMessageComposer27ComposerQuoteAttachmentView_h
@import Foundation;

@class ChatMessageComposer.AssetPreviewView, ChatMessageComposer.ComposerQuoteAttachmentOverlayView ?, ChatMessageComposer.MediaImageService, ChatMessageComposer.MessageComposerQuoteAttachmentViewModel ?, UIView;

@interface ChatMessageComposer.ComposerQuoteAttachmentView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerQuoteAttachmentViewModel ? attachment;
    ChatMessageComposer.ComposerQuoteAttachmentOverlayView ? $__lazy_storage_$_overlayView;
    ChatMessageComposer.AssetPreviewView previewView;
    ChatMessageComposer.MediaImageService mediaImageService;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer27ComposerQuoteAttachmentView_h */

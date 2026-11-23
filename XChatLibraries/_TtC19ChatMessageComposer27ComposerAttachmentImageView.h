//
#ifndef _TtC19ChatMessageComposer27ComposerAttachmentImageView_h
#define _TtC19ChatMessageComposer27ComposerAttachmentImageView_h
@import Foundation;

@class ChatMessageComposer.AssetPreviewView, ChatMessageComposer.MediaImageService ?, ChatMessageComposer.MessageComposerImageAttachmentViewModel ?, UIView;

@interface ChatMessageComposer.ComposerAttachmentImageView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerImageAttachmentViewModel ? viewModel;
    ChatMessageComposer.MediaImageService ? mediaImageService;
    ChatMessageComposer.AssetPreviewView previewView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC19ChatMessageComposer27ComposerAttachmentImageView_h */

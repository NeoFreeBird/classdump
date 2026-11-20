//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer27ComposerAttachmentVideoView_h
#define _TtC19ChatMessageComposer27ComposerAttachmentVideoView_h
@import Foundation;

@class ChatMessageComposer.AssetPreviewView, ChatMessageComposer.MediaImageService ?, ChatMessageComposer.MessageComposerVideoAttachmentViewModel ?, ChatUI.PlayIconView, UIView;

@interface ChatMessageComposer.ComposerAttachmentVideoView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerVideoAttachmentViewModel ? viewModel;
    ChatMessageComposer.MediaImageService ? mediaImageService;
    ChatUI.PlayIconView playIconView;
    ChatMessageComposer.AssetPreviewView previewView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC19ChatMessageComposer27ComposerAttachmentVideoView_h */

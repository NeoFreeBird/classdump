//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer25ComposerAttachmentGifView_h
#define _TtC19ChatMessageComposer25ComposerAttachmentGifView_h
@import Foundation;

@class ChatMessageComposer.AssetPreviewView, ChatMessageComposer.MediaImageService ?, ChatMessageComposer.MessageComposerGifAttachmentViewModel ?, UIView;

@interface ChatMessageComposer.ComposerAttachmentGifView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerGifAttachmentViewModel ? viewModel;
    ChatMessageComposer.MediaImageService ? mediaImageService;
    ChatMessageComposer.AssetPreviewView previewView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC19ChatMessageComposer25ComposerAttachmentGifView_h */

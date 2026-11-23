//
#ifndef _TtC19ChatMessageComposer16AssetPreviewView_h
#define _TtC19ChatMessageComposer16AssetPreviewView_h
@import Foundation;

@class ChatMessageComposer.MediaImageService ?, ChatMessageComposer.ShimmerImageView ?, UIView, _$s10Foundation3URLVMn ?, _$s4XGif16LoopingVideoViewCMn, _$s7Combine11CancellableMp ?;

@interface ChatMessageComposer.AssetPreviewView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MediaImageService ? mediaImageService;
    ChatMessageComposer.ShimmerImageView ? $__lazy_storage_$_imageView;
    nominal type descriptor for Foundation.URL ? url;
    protocol descriptor for Combine.Cancellable ? imageLoadCancellable;
    nominal type descriptor for XGif.LoopingVideoView videoView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC19ChatMessageComposer16AssetPreviewView_h */

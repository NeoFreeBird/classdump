//
#ifndef _TtC16ChatConversation31AttachmentInlineVideoPlayerView_h
#define _TtC16ChatConversation31AttachmentInlineVideoPlayerView_h
@import Foundation;

@class ChatAttachmentViewer.AttachmentVideoPlayerLease, Swift.Bool, UIView, _$sSo13AVPlayerLayerC;

@interface ChatConversation.AttachmentInlineVideoPlayerView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool isMuted;
    ChatAttachmentViewer.AttachmentVideoPlayerLease lease;
    __C.AVPlayerLayer playerLayer;
    Swift.Bool isPlaybackIntended;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16ChatConversation31AttachmentInlineVideoPlayerView_h */

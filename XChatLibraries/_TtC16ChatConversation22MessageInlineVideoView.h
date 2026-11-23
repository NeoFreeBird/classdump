//
#ifndef _TtC16ChatConversation22MessageInlineVideoView_h
#define _TtC16ChatConversation22MessageInlineVideoView_h
@import Foundation;

@class ChatConversation.MessageInlineVideoMuteButton, ChatUtilities.AudioSessionArbitrating ?, ChatUtilities.AudioSessionClaim ?, Swift.Bool, UIView, XVideo.DockedPlaybackOverlayView ?, XVideo.InlineVideoAudioPreference ?, XVideo.InlineVideoPlaying ?;

@interface ChatConversation.MessageInlineVideoView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.MessageInlineVideoMuteButton muteButton;
    XVideo.InlineVideoAudioPreference ? audioPreference;
    ChatUtilities.AudioSessionArbitrating ? audioSessionArbiter;
    Swift.Bool isPlaying;
    XVideo.InlineVideoPlaying ? player;
    ChatUtilities.AudioSessionClaim ? audioSessionClaim;
    XVideo.DockedPlaybackOverlayView ? dockedPlaybackOverlayView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;

@end

#endif /* _TtC16ChatConversation22MessageInlineVideoView_h */

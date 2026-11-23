//
#ifndef _TtC6XVideo21InlineVideoPlayerView_h
#define _TtC6XVideo21InlineVideoPlayerView_h
@import Foundation;

@class Swift.Bool, UIView, _$s10Foundation21NSKeyValueObservationCMn ?, _$sSo13AVPlayerLayerC, _$sSo13AVQueuePlayerC, _$sSo14AVPlayerLooperC;

@interface XVideo.InlineVideoPlayerView : UIView { // (Swift)
    /* instance variables */
    __C.AVQueuePlayer player;
    __C.AVPlayerLayer playerLayer;
    __C.AVPlayerLooper looper;
    Swift.Bool isPlaybackIntended;
    nominal type descriptor for Foundation.NSKeyValueObservation ? timeControlStatusObservation;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6XVideo21InlineVideoPlayerView_h */

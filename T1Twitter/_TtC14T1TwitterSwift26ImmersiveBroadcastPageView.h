//
#ifndef _TtC14T1TwitterSwift26ImmersiveBroadcastPageView_h
#define _TtC14T1TwitterSwift26ImmersiveBroadcastPageView_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlayerViewZoomDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ExternalPlaybackOverlayView, T1TwitterSwift.ImmersiveBroadcastPageView.Input, T1TwitterSwift.ImmersiveInitialSeek ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo13TAVPlayerViewCSg, _$sSo9TAVPlayerCSg, _$sySbcSg, _$sySo11TAVPlayback_p_So0A5StateCtcSg;

@interface T1TwitterSwift.ImmersiveBroadcastPageView : UIView <TAVPlayerViewZoomDelegate, TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    Swift.Bool isZooming;
    ((Swift.Bool) -> ())? onZoomStateChanged;
    ((__C.TAVPlayback, __C.TAVPlaybackState) -> ())? onPlaybackStateChanged;
    T1TwitterSwift.ImmersiveBroadcastPageView.Input input;
    __C.TAVPlayerView? playerView;
    __C.TAVPlayer? player;
    T1TwitterSwift.ImmersiveInitialSeek ? initialSeek;
    Swift.Bool isSharedPlayerOutputClaimDeferred;
    T1TwitterSwift.ExternalPlaybackOverlayView externalPlaybackOverlayView;
    nominal type descriptor for CoreGraphics.CGFloat bottomBarInset;
}

/* instance methods */
- (void)playerViewDidBeginZooming:(id)zooming;
- (void)playerViewDidZoom:(id)zoom atScale:(double)scale;
- (void)playerViewDidEndZooming:(id)zooming atScale:(double)scale gravity:(long long)gravity;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift26ImmersiveBroadcastPageView_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift22ImmersiveVideoPageView_h
#define _TtC14T1TwitterSwift22ImmersiveVideoPageView_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlayerViewZoomDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ExternalPlaybackOverlayView, T1TwitterSwift.ImmersiveVideoPageView.InitialSeek ?, T1TwitterSwift.ImmersiveVideoPageView.Input, T1TwitterSwift.ImmersiveVideoResolutionScriber ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo12CAShapeLayerC, _$sSo13TAVPlayerViewCSg, _$sSo9TAVPlayerCSg, _$sySbcSg, _$sySo11TAVPlayback_p_So0A5StateCtcSg;

@interface T1TwitterSwift.ImmersiveVideoPageView : UIView <TAVPlayerViewZoomDelegate, TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    Swift.Bool isZooming;
    ((Swift.Bool) -> ())? onZoomStateChanged;
    ((__C.TAVPlayback, __C.TAVPlaybackState) -> ())? onPlaybackStateChanged;
    __C.CAShapeLayer mediaCornerMaskLayer;
    T1TwitterSwift.ImmersiveVideoPageView.Input input;
    __C.TAVPlayerView? playerView;
    __C.TAVPlayer? player;
    T1TwitterSwift.ImmersiveVideoPageView.InitialSeek ? initialSeek;
    T1TwitterSwift.ImmersiveVideoResolutionScriber ? resolutionScriber;
    T1TwitterSwift.ExternalPlaybackOverlayView externalPlaybackOverlayView;
    nominal type descriptor for CoreGraphics.CGFloat bottomBarInset;
}

/* instance methods */
- (void)playerViewDidBeginZooming:(id)zooming;
- (void)playerViewDidZoom:(id)zoom atScale:(double)scale;
- (void)playerViewDidEndZooming:(id)zooming atScale:(double)scale gravity:(long long)gravity;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift22ImmersiveVideoPageView_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift20ImmersiveGifPageView_h
#define _TtC14T1TwitterSwift20ImmersiveGifPageView_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlayerViewZoomDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ImmersiveGifPageView.Input, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo11TUIPillViewC, _$sSo11UIImageViewCSgSg, _$sSo13TAVPlayerViewCSg, _$sSo9TAVPlayerCSg, _$sySbcSg, _$sySo11TAVPlayback_p_So0A5StateCtcSg, __C.UIEdgeInsets;

@interface T1TwitterSwift.ImmersiveGifPageView : UIView <TAVPlayerViewZoomDelegate, TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    Swift.Bool isZooming;
    ((Swift.Bool) -> ())? onZoomStateChanged;
    ((__C.TAVPlayback, __C.TAVPlaybackState) -> ())? onPlaybackStateChanged;
    T1TwitterSwift.ImmersiveGifPageView.Input input;
    __C.TAVPlayerView? playerView;
    __C.TAVPlayer? player;
    __C.TUIPillView gifBadgeView;
    __C.UIImageView?? $__lazy_storage_$_previewImageView;
    Swift.Bool hasReceivedFirstPlaybackTick;
    nominal type descriptor for CoreGraphics.CGFloat chromeAlpha;
    __C.UIEdgeInsets photoCenteringInset;
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

#endif /* _TtC14T1TwitterSwift20ImmersiveGifPageView_h */

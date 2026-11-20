//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6CallUI20ParticipantVideoView_h
#define _TtC6CallUI20ParticipantVideoView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class CallModels.CallVideoSource, CallUI.CallPixelBufferVideoView, CallUI.CallVideoFraming, UIView, _$s10Foundation4DateVMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo12UIScrollViewC, _$sSo13RTCVideoTrackCSg, _$sSo16RTCVideoRenderer_pSg, _$sySbcSg, __C.CGSize;

@interface CallUI.ParticipantVideoView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    ((Swift.Bool) -> ())? isReceivingFramesDidChange;
    CallUI.CallVideoFraming framing;
    __C.UIScrollView scrollView;
    CallUI.CallPixelBufferVideoView renderer;
    CallModels.CallVideoSource source;
    __C.RTCVideoTrack? attachedTrack;
    __C.RTCVideoRenderer? frameSink;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    __C.CGSize layoutSize;
    nominal type descriptor for Foundation.Date ? lastFrameAt;
    nominal type descriptor for Foundation.Date ? ignoresFramesUntil;
}

/* instance methods */
- (id)viewForZoomingInScrollView:(id)view;
- (void)scrollViewDidZoom:(id)zoom;
- (void)scrollViewDidEndZooming:(id)zooming withView:(id)view atScale:(double)scale;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6CallUI20ParticipantVideoView_h */

//
#ifndef _TtC6CallUI24CallPixelBufferVideoView_h
#define _TtC6CallUI24CallPixelBufferVideoView_h
@import Foundation;

#include "RTCVideoRenderer-Protocol.h"

@class CallUI.CallI420PixelBufferConverter, CallUI.CallPixelBufferVideoView.FrameSink ?, Swift.Bool, UIView, _$sSo26AVSampleBufferDisplayLayerC, _$syycSg, __C.CGSize, __C.CMFormatDescription ?, __C.RTCVideoRotation;

@interface CallUI.CallPixelBufferVideoView : UIView <RTCVideoRenderer> { // (Swift)
    /* instance variables */
    (() -> ())? displaySizeDidChange;
    (() -> ())? didRenderFrame;
    __C.CGSize displaySize;
    Swift.Bool fillsBounds;
    __C.AVSampleBufferDisplayLayer displayLayer;
    CallUI.CallI420PixelBufferConverter i420Converter;
    __C.CMFormatDescription ? formatDescription;
    __C.RTCVideoRotation rotation;
    CallUI.CallPixelBufferVideoView.FrameSink ? frameSink;
}

/* instance methods */
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)setSize:(struct CGSize { double x0; double x1; })size;
- (void)renderFrame:(id)frame;

@end

#endif /* _TtC6CallUI24CallPixelBufferVideoView_h */

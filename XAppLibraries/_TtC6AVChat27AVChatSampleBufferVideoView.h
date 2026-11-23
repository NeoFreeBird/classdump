//
#ifndef _TtC6AVChat27AVChatSampleBufferVideoView_h
#define _TtC6AVChat27AVChatSampleBufferVideoView_h
@import Foundation;

#include "RTCVideoRenderer-Protocol.h"

@class UIView, _$sSo26AVSampleBufferDisplayLayerC, __C.RTCVideoRotation;

@interface AVChat.AVChatSampleBufferVideoView : UIView <RTCVideoRenderer> { // (Swift)
    /* instance variables */
    __C.AVSampleBufferDisplayLayer _videoLayer;
    __C.RTCVideoRotation _rotation;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSublayersOfLayer:(id)layer;
- (void)renderFrame:(id)frame;
- (void)setSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* _TtC6AVChat27AVChatSampleBufferVideoView_h */

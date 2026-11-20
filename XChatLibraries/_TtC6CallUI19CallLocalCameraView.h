//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6CallUI19CallLocalCameraView_h
#define _TtC6CallUI19CallLocalCameraView_h
@import Foundation;

@class CallUI.CallCameraPreviewView, CallUI.CallPixelBufferVideoView, UIView, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo13RTCVideoTrackCSg, _$sSo26AVCaptureVideoPreviewLayerCSg, _$sSo6UIViewC;

@interface CallUI.CallLocalCameraView : UIView { // (Swift)
    /* instance variables */
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    __C.UIView contentView;
    CallUI.CallCameraPreviewView previewView;
    CallUI.CallPixelBufferVideoView trackRenderer;
    __C.AVCaptureVideoPreviewLayer? previewLayer;
    __C.RTCVideoTrack? cameraTrack;
    __C.RTCVideoTrack? renderedTrack;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6CallUI19CallLocalCameraView_h */

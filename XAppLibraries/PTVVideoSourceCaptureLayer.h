//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVVideoSourceCaptureLayer_h
#define PTVVideoSourceCaptureLayer_h
@import Foundation;

#include "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#include "PTVVideoSourceCaptureLayerCaptureDelegate-Protocol.h"
#include "PTVVideoSourcePreviewLayer-Protocol.h"

@class AVCaptureConnection, AVCaptureSession, AVCaptureVideoDataOutput, CALayer, NSString;

@interface PTVVideoSourceCaptureLayer : CALayer <AVCaptureVideoDataOutputSampleBufferDelegate, PTVVideoSourcePreviewLayer> {
    /* instance variables */
    AVCaptureVideoDataOutput *_output;
    struct opaqueCMSampleBuffer * _lastOutputFrame;
}

@property (weak, nonatomic) id <PTVVideoSourceCaptureLayerCaptureDelegate> captureDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AVCaptureSession *session;
@property (copy) NSString *videoGravity;
@property (readonly, nonatomic) AVCaptureConnection *connection;

/* instance methods */
- (id)initWithSession:(id)session output:(id)output;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })captureVideoRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })captureVideoRectWithTraitCollection:(id)collection;
- (struct CGPoint { double x0; double x1; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x0; double x1; })point;
- (void)redrawLastFrame;
- (void)captureOutput:(id)output didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)buffer fromConnection:(id)connection;
- (void)_drawFrame:(struct opaqueCMSampleBuffer *)frame completion:(id /* block */)completion;
- (_Bool)_setFrame:(struct opaqueCMSampleBuffer *)frame;

@end

#endif /* PTVVideoSourceCaptureLayer_h */

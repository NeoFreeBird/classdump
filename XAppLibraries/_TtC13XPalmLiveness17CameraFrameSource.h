//
#ifndef _TtC13XPalmLiveness17CameraFrameSource_h
#define _TtC13XPalmLiveness17CameraFrameSource_h
@import Foundation;

#include "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class DispatchQueue, NSObject, Swift.Bool, XPalmLiveness.LivenessFrameSourceDelegate ?, _$sSo15AVCaptureDeviceCSg, _$sSo16AVCaptureSessionC;

@interface XPalmLiveness.CameraFrameSource : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> { // (Swift)
    /* instance variables */
    XPalmLiveness.LivenessFrameSourceDelegate ? delegate;
    DispatchQueue sessionQueue;
    DispatchQueue videoQueue;
    __C.AVCaptureSession session;
    Swift.Bool isConfigured;
    __C.AVCaptureDevice? captureDevice;
    Swift.Bool torchCommandedOn;
    Swift.Bool didLockCaptureSettings;
}

/* instance methods */
- (void)captureOutput:(id)output didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)buffer fromConnection:(id)connection;
- (id)init;

@end

#endif /* _TtC13XPalmLiveness17CameraFrameSource_h */

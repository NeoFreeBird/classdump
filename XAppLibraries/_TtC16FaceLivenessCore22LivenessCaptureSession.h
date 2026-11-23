//
#ifndef _TtC16FaceLivenessCore22LivenessCaptureSession_h
#define _TtC16FaceLivenessCore22LivenessCaptureSession_h
@import Foundation;

@class DispatchQueue, FaceLivenessCore.LivenessCaptureDevice, _$sSo16AVCaptureSessionCSg, _$sSo44AVCaptureVideoDataOutputSampleBufferDelegate_p, _TtCs12_SwiftObject;

@interface FaceLivenessCore.LivenessCaptureSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    FaceLivenessCore.LivenessCaptureDevice captureDevice;
    DispatchQueue captureQueue;
    DispatchQueue configurationQueue;
    __C.AVCaptureVideoDataOutputSampleBufferDelegate outputDelegate;
    __C.AVCaptureSession? captureSession;
}

@end

#endif /* _TtC16FaceLivenessCore22LivenessCaptureSession_h */

//
#ifndef _TtC14T1TwitterSwift21RecorderCameraSession_h
#define _TtC14T1TwitterSwift21RecorderCameraSession_h
@import Foundation;

#include "PTVTwitterCameraCaptureDelegate-Protocol.h"
#include "PTVTwitterCameraCommonDelegate-Protocol.h"

@class NSObject, _$s14XVideoRecorder20CameraFrameObservingMp ?, _$s14XVideoRecorder27CameraCaptureEventObservingMp ?, _$sSo30PTVTwitterCameraViewControllerC, __C.Position ?;

@interface T1TwitterSwift.RecorderCameraSession : NSObject <PTVTwitterCameraCaptureDelegate, PTVTwitterCameraCommonDelegate> { // (Swift)
    /* instance variables */
    __C.PTVTwitterCameraViewController ptvCamera;
    __C.Position ? cameraPositionToRestore;
    protocol descriptor for XVideoRecorder.CameraFrameObserving ? frameObserver;
    protocol descriptor for XVideoRecorder.CameraCaptureEventObserving ? captureEventObserver;
}

/* instance methods */
- (void)twitterCameraCaptureVideoTimeDidTickWithDuration:(float)duration;
- (void)twitterCameraCaptureDidRunOutOfDiskSpace;
- (void)twitterCameraCaptureShouldBeginPostCaptureTransition:(id)transition;
- (void)twitterCameraCaptureDidRenderVideoURL:(id)url error:(id)error;
- (void)twitterCameraCaptureDidChangeCameraDevicePosition:(long long)position;
- (void)twitterCameraCaptureDidCapturePhoto:(id)photo error:(id)error;
- (void)twitterCameraCommonWillProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;
- (void)twitterCameraCommonCaptureSessionDidStart;
- (void)twitterCameraCommonCaptureSessionDidStop;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift21RecorderCameraSession_h */

//
#ifndef T1CameraCaptureCameraModeRecordViewControllerDelegate_Protocol_h
#define T1CameraCaptureCameraModeRecordViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CameraCaptureCameraModeRecordViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)cameraCaptureCameraModeRecordViewControllerDidStartRecording:(id)recording;
- (void)cameraCaptureCameraModeRecordViewController:(id)controller didChangeZoomScale:(double)scale;
- (void)cameraCaptureCameraModeRecordViewControllerDidStopRecording:(id)recording;

@end

#endif /* T1CameraCaptureCameraModeRecordViewControllerDelegate_Protocol_h */

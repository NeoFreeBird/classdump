//
#ifndef PTVTwitterCameraCaptureDelegate_Protocol_h
#define PTVTwitterCameraCaptureDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTwitterCameraCaptureDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)twitterCameraCaptureShouldBeginPostCaptureTransition:(id)transition;
- (void)twitterCameraCaptureVideoReachedMinimumThreshold;
- (void)twitterCameraCaptureVideoTimeDidTickWithDuration:(float)duration;
- (void)twitterCameraCaptureVideoTimeDidTickWithDuration:(float)duration;
- (void)twitterCameraCaptureDidCapturePhoto:(id)photo error:(id)error;
- (void)twitterCameraCaptureDidRenderVideoURL:(id)url error:(id)error;
- (void)twitterCameraCaptureDidRunOutOfDiskSpace;
- (void)twitterCameraCaptureRecordingDidFailWithError:(id)error;
- (void)twitterCameraCaptureDidChangeCameraDevicePosition:(long long)position;

@end

#endif /* PTVTwitterCameraCaptureDelegate_Protocol_h */

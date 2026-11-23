//
#ifndef PTVTwitterCameraCommonDelegate_Protocol_h
#define PTVTwitterCameraCommonDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTwitterCameraCommonDelegate <NSObject>

@required

/* required instance methods */
- (void)twitterCameraCommonWillProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;
- (void)twitterCameraCommonWillProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;

@optional

/* optional instance methods */
- (void)twitterCameraCommonCaptureSessionDidStart;
- (void)twitterCameraCommonCaptureSessionDidStop;
- (void)twitterCameraCommonLiveCameraSessionDidStart;
- (void)twitterCameraCommonMotioDidChangeCaptureOrientation:(long long)orientation;
- (void)twitterCameraCommonMotioDidChangeCaptureOrientation:(long long)orientation;

@end

#endif /* PTVTwitterCameraCommonDelegate_Protocol_h */

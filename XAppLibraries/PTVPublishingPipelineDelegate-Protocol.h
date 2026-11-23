//
#ifndef PTVPublishingPipelineDelegate_Protocol_h
#define PTVPublishingPipelineDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVPublishingPipelineDelegate <NSObject>

@required

/* required instance methods */
- (void)cameraStartComplete;
- (void)cameraStartFailed;
- (void)imageRotation:(double)rotation immediate:(_Bool)immediate;
- (void)updateVideoOrientation;
- (void)noteCameraChange;
- (void)onCameraTypeChange:(long long)change;
- (void)attemptReconnect;
- (void)didChangeLocalAudioSource:(_Bool)source isUsingHeadphones:(_Bool)headphones;
- (void)publishingPipeline:(id)pipeline willProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;

@optional

/* optional instance methods */
- (void)publishingPipeline:(id)pipeline didReceiveLogEntry:(id)entry;
- (void)cameraRuntimeError;
- (_Bool)publishingPipelineDefaultsInFrontPosition;
- (void)publishingPipelineDidUpdateInterruptState:(id)state;

@end

#endif /* PTVPublishingPipelineDelegate_Protocol_h */

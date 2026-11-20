//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPublishingPipeline_h
#define PTVPublishingPipeline_h
@import Foundation;

#include "PTVAudioVisualizerModel.h"
#include "PTVBitrateController.h"
#include "PTVCompositedVideoDelegate-Protocol.h"
#include "PTVDisplayView-Protocol.h"
#include "PTVEncodePipeline.h"
#include "PTVEncodedOutputDelegate-Protocol.h"
#include "PTVMotionDelegate-Protocol.h"
#include "PTVPublishingPipelineDelegate-Protocol.h"
#include "PTVSharedDeviceMotionObserver-Protocol.h"
#include "PTVSketchPointReceivable-Protocol.h"
#include "PTVVideoSource-Protocol.h"
#include "PTVVideoSourceDelegate-Protocol.h"

@class NSDate, NSObject, NSString, UIView;

@interface PTVPublishingPipeline : NSObject <PTVEncodedOutputDelegate, PTVVideoSourceDelegate, PTVSharedDeviceMotionObserver, PTVSketchPointReceivable> {
    /* instance variables */
    id _weakSelf;
    _Bool _shouldMute;
    _Bool _isObservingEncodePipeline;
    _Bool _customPreviewEnabled;
    NSString *_videoGravity;
}

@property (retain, nonatomic) id <PTVVideoSource> videoCamera;
@property (retain, nonatomic) PTVEncodePipeline *pipeline;
@property struct CGSize { double x0; double x1; } videoSize;
@property (nonatomic) int gopLen;
@property (nonatomic) int frameRate;
@property (nonatomic) long long cameraType;
@property (nonatomic) _Bool isObservingRotation;
@property (nonatomic) double lastAngle;
@property (nonatomic) double imageRotation;
@property _Bool waitingToRestart;
@property _Bool suspendForSwitch;
@property _Bool hasResetForSilence;
@property (nonatomic) _Bool saveAsHQEnabled;
@property (nonatomic) _Bool stabilizationEnabled;
@property (nonatomic) _Bool disableBFrames;
@property (nonatomic) _Bool locksCaptureOrientationToPortrait;
@property (nonatomic) _Bool capturesAudioOnlyWhenAuthorized;
@property (nonatomic) _Bool isHEVCEnabled;
@property (retain, nonatomic) PTVBitrateController *bitrateControl;
@property (weak, nonatomic) id <PTVPublishingPipelineDelegate> delegate;
@property (weak, nonatomic) id <PTVEncodedOutputDelegate> outputDelegate;
@property (weak, nonatomic) id <PTVCompositedVideoDelegate> compositedDelegate;
@property (readonly) UIView<PTVDisplayView> *cameraPreview;
@property float zoomFactor;
@property (readonly) float maxZoomFactor;
@property (readonly) _Bool isInterrupted;
@property (weak) id <PTVMotionDelegate> motionDelegate;
@property (readonly) double viewOrientation;
@property (readonly) _Bool isCameraActive;
@property (readonly) struct CGSize { double x0; double x1; } sourceSize;
@property (readonly) _Bool isBroadcasting;
@property (readonly) _Bool isEncoding;
@property _Bool audioPresent;
@property (readonly) long long cameraPreferredOrientation;
@property long long interfaceOrientation;
@property (nonatomic) int inputsExpected;
@property _Bool isFirstFrame;
@property (readonly, nonatomic) long long positionForCameraType;
@property (nonatomic) int videoKBytesPerSecond;
@property (nonatomic) int audioKBitsPerSecond;
@property (retain) NSDate *startSwitchCamera;
@property (readonly) double encodedOrientation;
@property (nonatomic) _Bool mute;
@property (nonatomic) _Bool didResignActive;
@property (readonly, nonatomic) PTVAudioVisualizerModel *audioVisualizerModel;
@property double freeSpaceLimitinMB;
@property (readonly) _Bool isRecording;
@property (nonatomic) _Bool mirrorRecordedVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate stabilizationEnabled:(_Bool)enabled saveAsHQEnabled:(_Bool)hqenabled customPreviewEnabled:(_Bool)enabled videoSize:(struct CGSize { double x0; double x1; })size;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (_Bool)_observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)shutdown;
- (void)startShutdown;
- (void)startCameraWithAudioOutputMode:(long long)mode;
- (void)createCameraWithAudioOutputMode:(long long)mode;
- (void)cameraStartComplete;
- (void)cameraStartFailed;
- (void)cameraRuntimeError;
- (void)setVideoSize:(struct CGSize { double x0; double x1; })size frameRate:(int)rate;
- (void)setHQVideoSize:(struct CGSize { double x0; double x1; })size frameRate:(int)rate bitrate:(int)bitrate gopLength:(int)length;
- (void)setupPipelineForCurrentBitrate:(id)bitrate;
- (void)setVideoGravity:(id)gravity;
- (_Bool)resumeCamera;
- (void)pauseCamera;
- (void)motionManagerDidDetectMotion:(id)motion error:(id)error;
- (void)observeDeviceMotionAndOrientationChanges;
- (void)unobserveMotionAndOrientationChanges;
- (_Bool)isObservingDeviceMotionFromGyro;
- (void)onOrientation:(id)orientation;
- (void)onDeviceRotation:(double)rotation;
- (void)onCameraOrientation:(double)orientation;
- (void)ptv_updateCaptureOrienation;
- (long long)captureOrientation;
- (_Bool)startBroadcasting;
- (void)stopBroadcasting;
- (void)setDimmingCameraPreview:(_Bool)preview;
- (void)selectCamera:(long long)camera;
- (void)_ptv_selectCamera:(long long)camera;
- (_Bool)selectNextPhoneCamera;
- (void)_selectNextPhoneCameraOnPipelineQueue;
- (void)pipeline:(id)pipeline videoParams:(id)params;
- (void)pipeline:(id)pipeline videoData:(id)data pts:(double)pts dts:(double)dts;
- (void)pipeline:(id)pipeline audioParams:(id)params;
- (void)pipeline:(id)pipeline audioData:(id)data pts:(double)pts;
- (_Bool)pipeline:(id)pipeline shouldEncodeVideo:(double)video;
- (void)pipeline:(id)pipeline pushMetadata:(id)metadata pts:(double)pts;
- (void)didChangeLocalAudioSource:(_Bool)source isUsingHeadphones:(_Bool)headphones;
- (void)source:(id)source videoParams:(id)params;
- (void)videoSource:(id)source didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)buffer captureContext:(struct { long long x0; })context;
- (void)videoSource:(id)source didReceiveMetadataObjects:(id)objects;
- (void)videoSource:(id)source didReceiveLogEntry:(id)entry;
- (void)videoSourceDidUpdateInterruptState:(id)state;
- (void)source:(id)source audioParams:(id)params format:(struct opaqueCMFormatDescription *)format;
- (void)onAudioData:(id)data pts:(double)pts;
- (void)videoSource:(id)source videoPreviewLayerDidChange:(id)change;
- (void)videoSource:(id)source willProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;
- (void)videoSource:(id)source didReceiveAudioBufferPeak:(id)peak;
- (void)capture:(id /* block */)capture;
- (void)capturePhotoUsePhotoProcessing:(_Bool)processing completion:(id /* block */)completion;
- (void)setPhotoFlashMode:(long long)mode;
- (void)setTorchMode:(long long)mode;
- (void)setRecordingDelegate:(id)delegate;
- (void)startLocalRecording;
- (void)pauseLocalRecording;
- (void)redrawLastFrame;
- (void)renderVideo:(id)video withWorkingFolder:(id)folder muteAudio:(_Bool)audio captureOrientation:(long long)orientation completion:(id /* block */)completion;
- (void)finishRecordingWithCompletionHandler:(id /* block */)handler;
- (void)deleteSavedClips;
- (id)currentClipURLs;
- (id)removeLastSavedClip;
- (double)totalRecordedDuration;
- (double)videoDuration;
- (void)sendMetadata:(id)metadata immediate:(_Bool)immediate;
- (double)makeNTPfor:(double)ntpfor;
- (void)requestKeyFrame;
- (void)setFocusAndExposure:(struct CGPoint { double x0; double x1; })exposure;
- (_Bool)canSetFocusPoint;
- (void)resetFocusAndExposure;
- (void)enqueueSketchPoints:(id)points;
- (void)clearCanvasAnimated:(_Bool)animated;
- (void)captureNextSampleBuffer:(id /* block */)buffer;
- (void)captureNextJPEG:(id /* block */)jpeg;
- (void)displaySwitchboardAsset:(id)asset withAttributes:(struct PTVSwitchboardAssetAttributes { long long x0; double x1; })attributes;
- (void)updateSwitchboardAssetAttributes:(struct PTVSwitchboardAssetAttributes { long long x0; double x1; })attributes;
- (void)removeSwitchboardAsset;
- (void)requestColorSampleAtNormalizedPoint:(struct CGPoint { double x0; double x1; })point withCallback:(id /* block */)callback;
- (void)observeEncodePipelineChanges;
- (void)unobserveEncodePipelineChanges;

@end

#endif /* PTVPublishingPipeline_h */

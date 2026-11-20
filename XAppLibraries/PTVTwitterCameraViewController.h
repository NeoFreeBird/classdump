//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTwitterCameraViewController_h
#define PTVTwitterCameraViewController_h
@import Foundation;

#include "PTVBroadcastViewController.h"
#include "PTVBroadcastViewControllerDelegate-Protocol.h"
#include "PTVBroadcasterEngine-Protocol.h"
#include "PTVBroadcasterEngineDelegate-Protocol.h"
#include "PTVCameraGridView.h"
#include "PTVCustomTwitterViewDelegate-Protocol.h"
#include "PTVFocusIndicator.h"
#include "PTVFocusIndicatorDelegate-Protocol.h"
#include "PTVMotionDelegate-Protocol.h"
#include "PTVPipelineContainerViewController.h"
#include "PTVPipelineContainerViewControllerDelegate-Protocol.h"
#include "PTVPublishingViewController.h"
#include "PTVTwitterCameraBroadcastStateDelegate-Protocol.h"
#include "PTVTwitterIntegrationDelegate-Protocol.h"

@class NSArray, NSOperationQueue, NSString, UIImage, UIViewController;
@protocol PTVTwitterCameraCaptureDelegate, PTVTwitterCameraCommonDelegate, PTVTwitterCameraLiveDelegate;

@interface PTVTwitterCameraViewController : UIViewController <PTVTwitterIntegrationDelegate, PTVCustomTwitterViewDelegate, PTVTwitterCameraBroadcastStateDelegate, PTVMotionDelegate, PTVFocusIndicatorDelegate, PTVBroadcastViewControllerDelegate, PTVBroadcasterEngineDelegate, PTVPipelineContainerViewControllerDelegate> {
    /* instance variables */
    id _weakSelf;
}

@property (retain, nonatomic) PTVPipelineContainerViewController *pipelineContainerViewController;
@property (retain, nonatomic) PTVBroadcastViewController *broadcastViewController;
@property (retain, nonatomic) id <PTVBroadcasterEngine> broadcaster;
@property (retain, nonatomic) PTVPublishingViewController *publishingViewController;
@property (nonatomic) double videoDuration;
@property (nonatomic) double videoConcatDuration;
@property (nonatomic) _Bool waitingOnNewClip;
@property (nonatomic) _Bool didSendMinimumTimeMessage;
@property (nonatomic) _Bool didNotifyRecordingInterrupted;
@property (retain, nonatomic) NSString *renderedVideoWorkingFolder;
@property (nonatomic) long long liveBroadcastCapabilityStatus;
@property (nonatomic) _Bool isApplicationInBackground;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (retain, nonatomic) NSOperationQueue *cameraInitializationQueue;
@property (nonatomic) long long currentCaptureOrientation;
@property (nonatomic) long long initialCaptureOrientation;
@property (retain, nonatomic) id idleTimerToken;
@property (retain, nonatomic) PTVCameraGridView *cameraGridView;
@property (retain, nonatomic) PTVFocusIndicator *focusIndicator;
@property (nonatomic) _Bool internalAudioScopeEnabledState;
@property (nonatomic) _Bool internalGuestBroadcastingEnabledState;
@property (retain, nonatomic) UIImage *snapshotTransitionImage;
@property (readonly, nonatomic) _Bool customPreviewEnabled;
@property (nonatomic) int frameRate;
@property (nonatomic) int bitrate;
@property (nonatomic) int gopLength;
@property (nonatomic) struct CGSize { double x0; double x1; } defaultLiveVideoSize;
@property (nonatomic) struct CGSize { double x0; double x1; } defaultHQVideoSize;
@property (nonatomic) _Bool mute;
@property (retain) NSArray *recordedClips;
@property (copy, nonatomic) id /* block */ broadcasterEngineFactory;
@property (weak, nonatomic) id <PTVTwitterCameraCommonDelegate> commonDelegate;
@property (weak, nonatomic) id <PTVTwitterCameraCaptureDelegate> captureDelegate;
@property (weak, nonatomic) id <PTVTwitterCameraLiveDelegate> liveDelegate;
@property (nonatomic) _Bool cameraGridViewEnabled;
@property (nonatomic) _Bool disableBFrames;
@property (nonatomic) _Bool isHEVCEnabled;
@property (nonatomic) _Bool locksCaptureOrientationToPortrait;
@property (nonatomic) _Bool requiresMicrophoneAccess;
@property (nonatomic) long long cameraMode;
@property (nonatomic) double captureStopDelay;
@property (retain, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } captureSize;
@property (readonly, nonatomic) NSArray *recordedClipURLs;
@property (readonly, nonatomic) double totalRecordedDuration;
@property (readonly, nonatomic) _Bool pausedRecording;
@property (nonatomic) _Bool audioScopeEnabled;
@property (nonatomic) _Bool guestBroadcastingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)resetGuestBroadcastingOnboarding;

/* instance methods */
- (_Bool)ptv_hasBroadcastingSession;
- (id)initWithCustomPreviewEnabled:(_Bool)enabled;
- (void)ptv_commonInit;
- (void)dealloc;
- (void)loadView;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)captureCurrentCameraFrame:(id /* block */)frame;
- (void)applicationWillResignActive:(id)active;
- (void)applicationDidBecomeActive:(id)active;
- (void)beginBackgroundTask;
- (void)backgroundTaskDidExpire;
- (void)endBackgroundTask;
- (void)ptv_syncActiveBackgroundStateIfNeeded;
- (void)disableIdleTimer;
- (void)enableIdleTimer;
- (void)ptv_captureSnapshotTransitionImageAndNotify:(_Bool)notify;
- (_Bool)hasCameraAndMicrophoneAccess;
- (_Bool)hasCaptureSessionAccess;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })captureRect;
- (void)startCaptureSession;
- (void)ptv_synchronizeInternalBroadcastState;
- (void)ptv_startCaptureSession;
- (void)ptv_startCaptureSessionFinal;
- (void)stopCaptureSession;
- (void)ptv_stopCaptureSession;
- (void)ptv_didStopCaptureSession;
- (id)ptv_publishingViewController;
- (id)ptv_publishingPipeline;
- (id)ptv_publishingPipelineIfLoaded;
- (void)setCameraDevicePosition:(long long)position;
- (long long)cameraDevicePosition;
- (void)lockFocusExposureAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)unlockFocusExposure;
- (void)resetCamera;
- (void)focusIndicatorDidFinishAnimating:(id)animating;
- (void)setZoomValue:(float)value;
- (float)zoomValue;
- (void)setPhotoFlashMode:(long long)mode;
- (void)setTorchMode:(long long)mode;
- (void)ptv_createPublishingViewControllerIfNeeded;
- (void)ptv_createPipelineViewControllerIfNeeded;
- (void)ptv_createLocalCameraController;
- (void)ptv_tearDownLocalCameraController;
- (void)ptv_renderVideo;
- (void)ptv_startVideoRecording;
- (void)startVideoRecordingWithWorkingFolder:(id)folder;
- (void)pauseRecording;
- (void)continueRecording;
- (void)finalizeCurrentClipWithCompletion:(id /* block */)completion;
- (void)renderVideo;
- (void)redrawLastFrame;
- (void)removeAllClips;
- (void)removeLastClipWithCompletion:(id /* block */)completion;
- (void)ptv_setDefaultVideoFormat;
- (void)ptv_setVideoEncoderHQBitrate:(int)hqbitrate videoHQSize:(struct CGSize { double x0; double x1; })hqsize videoSize:(struct CGSize { double x0; double x1; })size frameRate:(int)rate gopLength:(int)length;
- (void)ptv_handleAccelerometerData:(double)data;
- (void)ptv_notifyDelegateOnCaptureShouldBeginPostCaptureTransition;
- (long long)ptv_twitterCameraLiveClient;
- (void)stopVideoRecording;
- (void)abortVideoRecording;
- (_Bool)isRecording;
- (_Bool)isPausedRecording;
- (_Bool)broadcastIsOnline;
- (void)ptv_didRenderVideoURL:(id)url error:(id)error;
- (void)segmentCompleted:(id)completed;
- (void)recordingDurationTimerTick:(struct { long long x0; int x1; unsigned int x2; long long x3; })tick;
- (void)localVideoReachedMinimumThreshold;
- (void)outOfSpace;
- (void)recordingFailedWithError:(id)error;
- (void)capturePhotoUsePhotoProcessing:(_Bool)processing;
- (void)ptv_didCapturePhoto:(id)photo error:(id)error;
- (void)ptv_tearDownBroadcastingCameraController;
- (void)startBroadcastingSessionWithAccount:(id)account;
- (void)ptv_startBroadcastingSessionWithAccount:(id)account;
- (void)ptv_startHeadlessBroadcastingSessionWithPublisher:(id)publisher;
- (void)ptv_startLegacyBroadcastingSessionWithPublisher:(id)publisher;
- (void)ptv_didStartBroadcastingSession;
- (void)startBroadcastWithParams:(id)params;
- (void)stopBroadcast;
- (void)cleanupPostBroadcastIfNeeded;
- (void)deleteBroadcastID:(id)id account:(id)account completion:(id /* block */)completion;
- (void)didDoubleTapPreBroadcast;
- (void)associateTweetIDWithCurrentBroadcast:(id)broadcast amplifyProgramID:(id)id;
- (void)showInformationalChatMessage:(id)message;
- (void)ingestLiveChatMessage:(id)message;
- (_Bool)shouldHideOverflowMenu;
- (_Bool)shouldHidePostBroadcast;
- (void)broadcastCameraDidStart;
- (void)preBroadcastStateDidChange:(unsigned long long)change;
- (void)broadcastStateDidChange:(id)change;
- (_Bool)canShareBroadcast;
- (void)composeTweetForBroadcast:(id)broadcast atTimecode:(double)timecode initialTimecode:(double)timecode screenshot:(id)screenshot fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view withCompletion:(id /* block */)completion;
- (void)composeDirectMessageForBroadcast:(id)broadcast atTimecode:(double)timecode initialTimecode:(double)timecode fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view withCompletion:(id /* block */)completion;
- (void)shareURLOfBroadcast:(id)broadcast atTimecode:(double)timecode initialTimecode:(double)timecode fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view withCompletion:(id /* block */)completion;
- (_Bool)shouldSaveToCameraRoll;
- (void)reportBroadcast:(id)broadcast;
- (_Bool)canRetweetBroadcast:(id)broadcast;
- (void)retweetBroadcast:(id)broadcast withCompletion:(id /* block */)completion;
- (void)didBlockUser:(id)user;
- (void)didUnblockUser:(id)user;
- (void)processVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;
- (id)blockedTwitterIDs;
- (void)didStartBroadcast:(id)broadcast;
- (void)didSendChatMessage:(id)message;
- (void)didStopBroadcast:(id)broadcast;
- (void)deleteBroadcast:(id)broadcast;
- (id)viewControllerForProfileFollow:(id)follow;
- (void)didDetectCopyrightViolation;
- (id)copyrightViolationLearnMoreURL;
- (void)didObserveAuthErrorWithInfo:(id)info;
- (void)didDismissCopyrightViewController;
- (double)guestViewsTopMargin;
- (_Bool)isGuestBroadcastingCreationEnabled;
- (_Bool)isUserProfileSheetEnabled;
- (void)willAddUserAsGuestFromScreen:(id)screen;
- (void)didSelectReplyToMessage:(id)message isInScrollbackMode:(_Bool)mode;
- (void)willBlockUserForMessage:(id)message isInScrollbackMode:(_Bool)mode;
- (void)willPresentUserModalFromMessage:(id)message isInScrollbackMode:(_Bool)mode;
- (void)didRequestToReportMessage:(id)message withReportType:(unsigned long long)type isInScrollbackMode:(_Bool)mode;
- (void)ptv_logChatMessageActionSheetAction:(id)action;
- (void)ptv_logAction:(id)action element:(id)element;
- (_Bool)isSubscribedToPremium;
- (void)broadcasterEngine:(id)engine didReceiveBroadcastViewersAndStats:(id)stats;
- (void)broadcasterEngine:(id)engine didFailToStartBroadcastWithError:(id)error;
- (void)captureSessionDidStart;
- (void)onConnectionFailure;
- (void)didSuccessfullyPublishAfterNInternalReconnects:(unsigned long long)reconnects;
- (void)didStartBroadcastCamera;
- (void)publishingViewControllerWillProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;
- (void)onCameraTypeChange:(long long)change;
- (void)didChangeLocalAudioSource:(_Bool)source isUsingHeadphones:(_Bool)headphones;
- (void)setVideoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)accelerometerDidUpdateAngle:(double)angle;

@end

#endif /* PTVTwitterCameraViewController_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XGoLiveBroadcasterEngine_h
#define XGoLiveBroadcasterEngine_h
@import Foundation;

#include "LHLSLogListener-Protocol.h"
#include "PTVBroadcast.h"
#include "PTVBroadcastPublisherDelegate-Protocol.h"
#include "PTVBroadcasterEngine-Protocol.h"
#include "PTVChatControllerObserver-Protocol.h"
#include "PTVPhoneCallObserver-Protocol.h"
#include "PTVPipelineContainerViewControllerDelegate-Protocol.h"
#include "PTVPublishingViewControllerDelegate-Protocol.h"

@class CLLocation, NSObject;

@interface XGoLiveBroadcasterEngine : NSObject <LHLSLogListener, PTVPhoneCallObserver, PTVChatControllerObserver, PTVBroadcastPublisherDelegate, PTVPublishingViewControllerDelegate, PTVPipelineContainerViewControllerDelegate, PTVBroadcasterEngine> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 publisher;
    @40@0:8:16@24@32 liveMediaClient;
    @40@0:8:16@24@32 liveMediaSetupTicket;
    @40@0:8:16@24@32 pipelineContainerViewController;
    @40@0:8:16@24@32 startOrdering;
    @40@0:8:16@24@32 isActive;
    @40@0:8:16@24@32 hasStartedBroadcastCreationBefore;
    @40@0:8:16@24@32 hasHandledBroadcastStateChangeToOffline;
    @40@0:8:16@24@32 isPerformingSpeedTest;
    @40@0:8:16@24@32 isCreatingBroadcast;
    @40@0:8:16@24@32 isVideoConnected;
    @40@0:8:16@24@32 isDeviceOnThePhone;
    @40@0:8:16@24@32 publishingRegion;
    @40@0:8:16@24@32 bytesPerSecond;
    @40@0:8:16@24@32 isWaitingForCaptureSession;
    @40@0:8:16@24@32 isWaitingToCreateBroadcast;
    @40@0:8:16@24@32 hasPassedSpeedTest;
    @40@0:8:16@24@32 speedTestRetryCount;
    @40@0:8:16@24@32 speedTestSizeInBytes;
    @40@0:8:16@24@32 speedTestDuration;
    @40@0:8:16@24@32 creationAttemptDate;
    @40@0:8:16@24@32 rtmpBeginConnectDate;
    @40@0:8:16@24@32 rtmpConnectTimeMS;
    @40@0:8:16@24@32 rtmpConnectSuccess;
    @40@0:8:16@24@32 stopBroadcastFromBackgroundTimer;
    @40@0:8:16@24@32 liveMediaStateTimer;
}

@property (nonatomic, readonly) PTVBroadcast *broadcast;
@property (nonatomic) _Bool broadcastIsOnline;
@property (nonatomic) _Bool isAudioScopeSelected;
@property (nonatomic, retain) CLLocation *twitterLocation;
@property (nonatomic) _Bool isApplicationInBackground;

/* instance methods */
- (void)lhls_logWithLevel:(long long)level file:(id)file line:(int)line message:(id)message;
- (void)phoneCallMonitorDidReceiveIncomingPhoneCall:(id)call;
- (void)phoneCallMonitorDidAcceptIncomingPhoneCall:(id)call;
- (void)phoneCallMonitorDidDisconnectIncomingPhoneCall:(id)call;
- (void)chatController:(id)controller didReceiveBroadcastViewersAndStats:(id)stats;
- (unsigned long long)broadcastControllerNTPForCurrentFrame:(id)frame;
- (unsigned long long)broadcastControllerNTPForNow:(id)now;
- (id)broadcastControllerProgramDateTime:(id)time;
- (double)broadcastControllerCurrentReplayTimeInterval:(id)interval;
- (double)broadcastControllerReplayDuration:(id)duration;
- (_Bool)broadcastController:(id)controller didReceiveMessage:(id)message isForReplay:(_Bool)replay;
- (void)broadcastControllerBroadcastStateDidChange:(id)change;
- (void)broadcastControllerDidDetectCopyrightViolation:(id)violation;
- (_Bool)broadcastControllerShouldFetchBroadcastRegularly:(id)regularly;
- (void)broadcastController:(id)controller didObserveAuthErrorWithInfo:(id)info;
- (_Bool)broadcastPublisherShouldUploadLogs:(id)logs;
- (void)onConnectionFailure;
- (void)didStartBroadcastCamera;
- (void)publishingViewControllerWillProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;
- (void)setVideoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)captureSessionDidStart;
- (void)pipelineContainerViewControllerPublishingStateDidChange:(id)change;
- (id)initWithPublisher:(id)publisher pipelineContainerViewController:(id)controller delegate:(id)delegate liveMediaClient:(id)client;
- (void)dealloc;
- (void)startBroadcastCreation;
- (void)startBroadcastWithParams:(id)params;
- (void)stopBroadcast;
- (void)forceStopBroadcast;
- (void)releasePublishingViewController;
- (void)flipCamera;
- (void)associateTweetIDWithCurrentBroadcast:(id)broadcast amplifyProgramID:(id)id;
- (void)showInformationalChatMessage:(id)message;
- (id)init;

@end

#endif /* XGoLiveBroadcasterEngine_h */

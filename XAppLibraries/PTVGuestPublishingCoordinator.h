//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestPublishingCoordinator_h
#define PTVGuestPublishingCoordinator_h
@import Foundation;

#include "PTVCompositedVideoDelegate-Protocol.h"
#include "PTVGuestBroadcastingStatsCollector.h"
#include "PTVGuestBroadcastingStatsCollectorDelegate-Protocol.h"
#include "PTVGuestCallerController.h"
#include "PTVGuestCallerControllerObserver-Protocol.h"
#include "PTVGuestCoordinator-Protocol.h"
#include "PTVGuestCoordinatorDelegate-Protocol.h"
#include "PTVGuestRoomConfiguration.h"
#include "PTVGuestView.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVPipelineOwner-Protocol.h"
#include "PTVPipelineUser-Protocol.h"
#include "PTVWebRTCClient-Protocol.h"
#include "PTVWebRTCClientDelegate-Protocol.h"
#include "TAVSharedAudioSessionConfigurationToken.h"

@class NSArray, NSMutableArray, NSObject, NSString, NSTimer, RTCAudioTrack, RTCVideoCapturer, RTCVideoSource, RTCVideoTrack;

@interface PTVGuestPublishingCoordinator : NSObject <PTVCompositedVideoDelegate, PTVGuestBroadcastingStatsCollectorDelegate, PTVGuestCallerControllerObserver, PTVWebRTCClientDelegate, PTVGuestCoordinator, PTVPipelineUser> {
    /* instance variables */
    PTVGuestPublishingCoordinator *_weakSelf;
    unsigned long long _publisherRole;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    NSMutableArray *_guestMediaStreams;
    PTVGuestView *_localGuestView;
    PTVGuestView *_dummyGuestView;
    PTVGuestBroadcastingStatsCollector *_statsCollector;
    TAVSharedAudioSessionConfigurationToken *_sharedAudioSessionToken;
    _Bool _isObservingAVAudioSession;
}

@property (retain, nonatomic) id <PTVWebRTCClient> webRTCClient;
@property (retain) RTCVideoSource *localVideoSource;
@property (retain) RTCVideoCapturer *localCapturer;
@property (retain, nonatomic) RTCVideoTrack *localVideoTrack;
@property (retain, nonatomic) RTCAudioTrack *localAudioTrack;
@property long long rtcVideoRotation;
@property double currentRotation;
@property (retain, nonatomic) PTVGuestCallerController *guestCallerController;
@property (retain, nonatomic) NSString *primaryUserId;
@property (retain, nonatomic) NSTimer *frameTimer;
@property (readonly, nonatomic) struct { unsigned long long x0; double x1; _Bool x2; _Bool x3; _Bool x4; _Bool x5; _Bool x6; _Bool x7; _Bool x8; _Bool x9; _Bool x10; _Bool x11; _Bool x12; _Bool x13; _Bool x14; } features;
@property (readonly, nonatomic) _Bool isPublishing;
@property (readonly, nonatomic) _Bool isDisconnectedWithError;
@property (nonatomic) _Bool isAudioScopeEnabled;
@property (nonatomic) _Bool isSaveInHQEnabled;
@property (retain, nonatomic) PTVGuestRoomConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id <PTVGuestCoordinatorDelegate> delegate;
@property (nonatomic) long long loggedInUserParticipantIndex;
@property (nonatomic) _Bool locallyMuted;
@property (nonatomic) _Bool locallyCameraDisabled;
@property (retain, nonatomic) NSArray *guestReconciliationArray;
@property (retain) NSObject<PTVPipelineOwner> *pipelineOwner;

/* instance methods */
- (void)dealloc;
- (void)viewerDidCompleteCountdown:(id)countdown;
- (void)setRTPForwardParametersOnGuestCallerSession:(id)session;
- (void)broadcasterWillHangUpOnGuestCallerSession:(id)session;
- (void)broadcasterDidRevertHangUpForGuestCallerSession:(id)session;
- (void)broadcasterDidUpdateStateForGuestCallerSession:(id)session fromState:(unsigned long long)state;
- (void)broadcasterDidUpdateIsMutedForGuestCallerSession:(id)session isMuted:(_Bool)muted;
- (void)didReconcileAndRemoveUserIDs:(id)ids;
- (void)viewerCountdownWillBeCancelled;
- (void)viewerCountdownWasCancelledByBroadcaster;
- (void)guestCallerControllerDidAddOrRemoveLoggedInUserSession;
- (void)didCreateLocalVideoSource:(id)source;
- (void)didReceiveLocalVideoTrack:(id)track;
- (void)didReceiveLocalAudioTrack:(id)track;
- (id)existingMediaStreamForUserId:(id)id;
- (id)endedMediaStream;
- (void)didUpdateRemoteMediaStream:(id)stream userId:(id)id;
- (void)didRemoveRemoteMediaStream:(id)stream userId:(id)id;
- (void)didUpdateRemoteAudioLevel:(id)level forUserId:(id)id;
- (void)didUpdateLocalAudioLevel:(id)level;
- (void)didChangeWebRTCClientState:(long long)state;
- (void)didChangePublishingState;
- (void)didChangeWebRTCActiveState;
- (void)didUpdateIsFullyConnectedForUserId:(id)id;
- (void)didDestroyVideoRoom;
- (void)didReceiveVideoRoomIsFull;
- (void)didTriggerICERestartAndShouldNotify:(_Bool)notify;
- (void)didUpdateActiveSpeaker:(id)speaker;
- (void)didStoreAndOutputLogEntry:(id)entry;
- (void)guestBroadcastingStatsCollector:(id)collector didCollectPeriodicPublishingStats:(id)stats;
- (void)guestBroadcastingStatsCollector:(id)collector didCollectPeriodicPlaybackStats:(id)stats;
- (void)guestBroadcastingStatsCollector:(id)collector didCollectEndOfStreamStats:(id)stats;
- (void)onStatsCollection:(id)collection fromJanusClient:(id)client;
- (id)initWithBroadcastWithPublisherRole:(unsigned long long)role guestCallerController:(id)controller loggedInUser:(id)user locallyMuted:(_Bool)muted features:(struct { unsigned long long x0; double x1; _Bool x2; _Bool x3; _Bool x4; _Bool x5; _Bool x6; _Bool x7; _Bool x8; _Bool x9; _Bool x10; _Bool x11; _Bool x12; _Bool x13; _Bool x14; })features;
- (id)sourcePipeline;
- (id)userIDForMediaStream:(id)stream;
- (id)usernameForUserID:(id)id;
- (long long)participantIndexForUserID:(id)id;
- (void)joinBroadcast;
- (_Bool)isMultistreamEnabled;
- (void)createAndJoinJanusClient;
- (void)leaveBroadcastWithCompletion:(id /* block */)completion;
- (void)removeViews;
- (void)shutdownWithCompletion:(id /* block */)completion;
- (void)finishShutdownAfterLeaving;
- (void)collectEndOfStreamStatsIfNeeded;
- (_Bool)isSoloVideoModeEnabled;
- (_Bool)isSoloVideoMode;
- (void)switchSoloModeIfNeeded;
- (void)addOrUpdateGuestMediaStream:(id)stream withUserID:(id)id;
- (void)removeGuestMediaStream:(id)stream withUserID:(id)id shouldReshuffleGuestViews:(_Bool)views;
- (void)insertVideoView;
- (void)removeLocalView;
- (void)startPipeline;
- (void)disableWebRTCAudioSessionIfNeeded;
- (long long)audioOutputMode;
- (void)attemptReconnect;
- (void)cameraStartComplete;
- (void)cameraStartFailed;
- (void)cameraRuntimeError;
- (void)didChangeLocalAudioSource:(_Bool)source isUsingHeadphones:(_Bool)headphones;
- (void)publishingPipeline:(id)pipeline willProcessVisualFrame:(struct opaqueCMSampleBuffer *)frame captureOrientation:(long long)orientation completionBlock:(id /* block */)block;
- (void)publishingPipelineDidUpdateInterruptState:(id)state;
- (void)imageRotation:(double)rotation immediate:(_Bool)immediate;
- (void)noteCameraChange;
- (void)onCameraTypeChange:(long long)change;
- (void)updateVideoOrientation;
- (void)publishingPipeline:(id)pipeline didReceiveLogEntry:(id)entry;
- (void)pipeline:(id)pipeline videoFrame:(struct __CVBuffer *)frame at:(struct { long long x0; int x1; unsigned int x2; long long x3; })at captureContext:(struct { long long x0; })context;
- (void)publishPixelBuffer:(struct __CVBuffer *)buffer timeStampNs:(unsigned long long)ns;
- (void)handleInterfaceOrientation:(long long)orientation;
- (void)rtcVideoRotationStateChanged;
- (void)sourcePipelineBroadcastingStateDidChange;
- (void)restartSourcePipeline;
- (id)loggedInUserGuestCallerSession;
- (id)guestCallerSessionForUserID:(id)id;
- (id)guestParticipantUserForUserID:(id)id;
- (void)broadcasterDidCancelCountdownForViewerID:(id)id;
- (void)broadcasterDidHangUpOnGuestID:(id)id;
- (void)renderingDidChange:(_Bool)change withUserID:(id)id;
- (_Bool)isFullyConnectedToUserID:(id)id;
- (_Bool)isLoggedInUserMuted;
- (_Bool)isUserMutedWithUserID:(id)id;
- (void)executeMutedState;
- (void)executeCameraDisabledState;
- (void)didSetPrimaryView:(id)view;
- (void)enforceAVAudioSessionVideoChatModeIfNeeded;
- (void)observeAVAudioSessionRouteChanges;
- (void)unobserveAVAudioSessionRouteChanges;
- (_Bool)canToggleAudioVideoForUserID:(id)id;
- (void)toggleAudioVideoForUserID:(id)id;
- (void)resume;
- (void)_ptv_startSendingFrames;
- (void)_ptv_stopSendingFrames;
- (void)_ptv_generateAndPublishPixelBuffer;
- (_Bool)isLocallyMuted;
- (_Bool)isLocallyCameraDisabled;

@end

#endif /* PTVGuestPublishingCoordinator_h */

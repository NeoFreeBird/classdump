//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVVideoContainerViewController_h
#define PTVVideoContainerViewController_h
@import Foundation;

#include "AVRRenderView.h"
#include "PTVAccessVideo.h"
#include "PTVBroadcast.h"
#include "PTVExternalVideoPlayer.h"
#include "PTVExternalVideoPlayerDelegate-Protocol.h"
#include "PTVGuestPublishingViewController.h"
#include "PTVGuestPublishingViewControllerDelegate-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVPipelineContainerViewController.h"
#include "PTVTimingUtilDataSource-Protocol.h"
#include "PTVVideoContainerView.h"
#include "PTVVideoContainerViewControllerDelegate-Protocol.h"
#include "PTVVideoPlayerDelegate-Protocol.h"
#include "PTVVideoPosition.h"

@class NSObject, NSString, NSTimer, NSURL, UILayoutGuide, UIViewController;

@interface PTVVideoContainerViewController : UIViewController <PTVVideoPlayerDelegate, PTVGuestPublishingViewControllerDelegate, PTVExternalVideoPlayerDelegate, PTVTimingUtilDataSource> {
    /* instance variables */
    PTVVideoContainerViewController *_weakSelf;
    _Bool _shouldShowPlaceholderThumbnail;
    _Bool _observingGuestPublishingCoordinator;
    _Bool _observingGuestVideoPlayer;
}

@property (retain, nonatomic) NSTimer *imageCaptureTimer;
@property (nonatomic) _Bool lowLatencyConnectSuccess;
@property (nonatomic) long long lowLatencyConnectTimeMS;
@property (retain, nonatomic) NSObject *seekNonce;
@property (retain, nonatomic) PTVVideoPosition *positionBeingSeekedTo;
@property (weak, nonatomic) id <PTVVideoContainerViewControllerDelegate> delegate;
@property (readonly, nonatomic) PTVVideoContainerView *videoContainerView;
@property (retain, nonatomic) PTVBroadcast *broadcast;
@property (retain, nonatomic) PTVAccessVideo *videoAccess;
@property (retain, nonatomic) id <PTVLoggedInUserProtocol> loggedInUser;
@property (retain, nonatomic) NSString *scribePage;
@property (retain, nonatomic) UILayoutGuide *videoContentAreaGuide;
@property (readonly, nonatomic) UILayoutGuide *videoAreaLayoutGuide;
@property (nonatomic) _Bool shouldVideoTakeOverEntireUX;
@property (nonatomic) _Bool aspectFill;
@property (readonly, nonatomic) NSURL *placeholderImageURL;
@property (readonly, nonatomic) UIViewController *currentVideoViewController;
@property (readonly, nonatomic) AVRRenderView *currentRenderView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } currentVideoPlayerSize;
@property (readonly, nonatomic) PTVExternalVideoPlayer *externalVideoPlayer;
@property (retain, nonatomic) PTVPipelineContainerViewController *pipelineContainerViewController;
@property (readonly, nonatomic) PTVGuestPublishingViewController *guestVideoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (_Bool)_observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (id)initWithCoder:(id)coder;
- (void)videoViewControllerWillShowVideoView:(id)view;
- (void)videoViewControllerDidShowVideoView:(id)view;
- (void)videoViewControllerDidUpdateVideoDimensions:(id)dimensions;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (id)init;
- (void)didUpdateVideoDimensions;
- (void)didUpdateChatSectionBottomBarHeight:(double)height;
- (void)didUpdateGuestViewsMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (void)videoConnectionStatusDidChange;
- (void)videoDurationDidChange;
- (void)videoDidReachEndOfStream;
- (void)videoDidReceiveMetadata;
- (void)guestPublishingStateDidChange;
- (void)playVideo;
- (void)pauseVideo;
- (void)disconnectVideo;
- (void)broadcastEndPending;
- (_Bool)shouldAutoPlayVideo;
- (_Bool)isPlayingVideo;
- (_Bool)isPausedOrPlayingVideo;
- (_Bool)inGoodPlaybackState;
- (void)handleFadeForTheaterModeBackground:(_Bool)background withDuration:(double)duration;
- (unsigned long long)videoConnectionErrorType;
- (void)setSupportsBackgroundAudio:(_Bool)audio;
- (void)handleInterfaceOrientation:(long long)orientation;
- (id)deliveryDateForMessage:(id)message;
- (id)deliveryDateForNTP:(unsigned long long)ntp;
- (id)programDateTime;
- (unsigned long long)ntpForCurrentFrame;
- (unsigned long long)ntpForBroadcasterFrame;
- (unsigned long long)ntpToSeekTo;
- (double)currentReplayTimeInterval;
- (double)replayDuration;
- (void)seekToPosition:(id)position completion:(id /* block */)completion;
- (void)seekToTime:(double)time completion:(id /* block */)completion;
- (void)seekToNTPTime:(unsigned long long)ntptime completion:(id /* block */)completion;
- (_Bool)isSeekingToNTPTime;
- (_Bool)canSeekToTime;
- (_Bool)canProvideTimingDataForSyncingComments;
- (void)setPlaceholderImageURL:(id)url shouldShowThumbnail:(_Bool)thumbnail;
- (void)updatePlaceholderImageView;
- (_Bool)shouldCaptureStillImageOfVideoPlayer;
- (void)updateCaptureStillImageState;
- (void)startCapturingStillImagesOfVideoPlayer;
- (void)stopCapturingStillImagesOfVideoPlayer;
- (void)captureStillImageOfVideoPlayer;
- (void)didCaptureStillImageOfVideoPlayer:(id)player;
- (void)willReplaceCurrentVideoViewControllerWithViewController:(id)controller;
- (void)didReplaceCurrentVideoViewController:(id)controller;
- (void)createOrUpdateGuestWatchingCoordinatorIfNeeded;
- (void)insertCurrentVideoView;
- (id)videoViewController;
- (_Bool)isUsingVideoPlayer;
- (id)videoPlayer;
- (id)videoPlayerDelegate;
- (void)showVideoPlayer:(id)player;
- (void)videoPlayerDidReceiveTimedMetadataWithDescription:(id)description value:(id)value;
- (void)videoPlayerDidBecomeReadyForDisplay:(_Bool)display receivedRotation:(_Bool)rotation;
- (void)videoPlayerDidChangePlayerStatus:(unsigned long long)status;
- (void)videoPlayerDidUpdateDuration:(double)duration;
- (void)videoPlayerDidReceiveMetadata;
- (void)videoPlayerDidReachEndOfVideo;
- (void)showExternalVideoPlayer:(id)player;
- (_Bool)isUsingExternalVideoPlayer;
- (void)startObservingExternalVideoPlayer;
- (void)stopObservingExternalVideoPlayer;
- (void)externalVideoPlayer:(id)player didChangePlaybackState:(unsigned long long)state;
- (void)externalVideoPlayer:(id)player didReceiveTimedMetadataWithDescription:(id)description value:(id)value;
- (void)externalVideoPlayerDidReachEndOfVideo:(id)video;
- (void)externalVideoPlayerDidReceiveMetadata:(id)metadata;
- (void)externalVideoPlayerDidReceiveVideoDuration:(id)duration;
- (unsigned long long)ntpForExternalVideoPlayerCurrentFrame;
- (id)renderTimeForExternalVideoPlayerNTP:(unsigned long long)ntp;
- (id)guestPublishingCoordinator;
- (id)guestWatchingCoordinator;
- (_Bool)isUsingGuestVideoPlayer;
- (_Bool)isUsingGuestPublishingCoordinator;
- (void)becomeGuestBroadcasterWithGuestCallerController:(id)controller configuration:(id)configuration;
- (void)stopGuestBroadcastingShouldResumeVideoAfterShutdown:(_Bool)shutdown;
- (_Bool)isGuestPublishing;
- (void)guestPublishingViewControllerGuestDidPressHangUpButton:(id)button;
- (void)guestPublishingViewControllerDidRequestCameraFlip:(id)flip;
- (void)guestPublishingViewControllerDidSetPrimaryView:(id)view;
- (void)guestPublishingViewControllerDidDetectEndOfBroadcast:(id)broadcast;
- (void)guestPublishingViewController:(id)controller didTapUsernameOfUser:(id)user;
- (void)guestPublishingViewController:(id)controller didCollectPeriodicPublishingStats:(id)stats;
- (void)guestPublishingViewController:(id)controller didCollectPeriodicPlaybackStats:(id)stats;
- (void)guestPublishingViewController:(id)controller didCollectEndOfStreamStats:(id)stats;
- (void)didReceiveGuestPublishingLogEntry:(id)entry;
- (void)willTransitionFromGuestCoordinator:(id)coordinator;
- (void)didTransitionToGuestCoordinator:(id)coordinator;
- (id)tavVideoViewController;
- (void)observePowerStateChanges;
- (void)powerStateDidChange;
- (id)videoPlayerStatistics;
- (id)replayVideoPlayerStatistics;
- (void)updateAudioIndicatorsState;
- (void)startObservingGuestVideoPlayer;
- (void)stopObservingGuestVideoPlayer;
- (void)startObservingGuestPublishingCoordinator;
- (void)stopObservingGuestPublishingCoordinator;

@end

#endif /* PTVVideoContainerViewController_h */

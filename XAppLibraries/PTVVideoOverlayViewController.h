//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVVideoOverlayViewController_h
#define PTVVideoOverlayViewController_h
@import Foundation;

#include "PTVActionSheetDelegate-Protocol.h"
#include "PTVBroadcastController.h"
#include "PTVBroadcastControllerObserver-Protocol.h"
#include "PTVChatControllerObserver-Protocol.h"
#include "PTVChatReplayModel.h"
#include "PTVChatSectionCompositeViewController.h"
#include "PTVChatSectionCompositeViewControllerDelegate-Protocol.h"
#include "PTVCustomTwitterViewDelegate-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVModalPresentationManagerDelegate-Protocol.h"
#include "PTVVideoContainerViewController.h"
#include "PTVVideoContainerViewControllerDelegate-Protocol.h"
#include "PTVVideoOverlayViewControllerBroadcasterDelegate-Protocol.h"
#include "PTVVideoOverlayViewControllerCameraDelegate-Protocol.h"
#include "PTVVideoOverlayViewControllerChatDelegate-Protocol.h"
#include "PTVVideoReplayDelegate-Protocol.h"
#include "PTVViewController.h"

@class NSLayoutConstraint, NSObject, NSString, UIViewController;
@protocol PTVVideoOverlaySubscriberBlockReportingDelegate, PTVVideoOverlayViewControllerDelegate;

@interface PTVVideoOverlayViewController : PTVViewController <PTVActionSheetDelegate, PTVBroadcastControllerObserver, PTVChatControllerObserver, PTVVideoContainerViewControllerDelegate, PTVChatSectionCompositeViewControllerDelegate> {
    /* instance variables */
    PTVVideoOverlayViewController *_weakSelf;
    _Bool _hasPlayedReplay;
    _Bool _hasGottenFramesBefore;
    _Bool _needsExecuteBeginReplay;
    _Bool _idleTimerDisabled;
    _Bool _needsToRemoveScrubbing;
    double _currentReplayStartTime;
}

@property (readonly, nonatomic) PTVChatReplayModel *chatReplayModel;
@property (nonatomic) _Bool chatModelNeedsBegin;
@property (retain, nonatomic) NSLayoutConstraint *currentOverlayContentHeightConstraint;
@property (weak, nonatomic) id <PTVVideoOverlayViewControllerDelegate> videoOverlayDelegate;
@property (weak, nonatomic) id <PTVVideoOverlayViewControllerCameraDelegate> cameraDelegate;
@property (weak, nonatomic) id <PTVVideoOverlayViewControllerBroadcasterDelegate> broadcasterDelegate;
@property (weak, nonatomic) id <PTVVideoOverlaySubscriberBlockReportingDelegate> blockReportingDelegate;
@property (weak, nonatomic) id <PTVCustomTwitterViewDelegate> twitterCustomViewDelegate;
@property (weak, nonatomic) id <PTVModalPresentationManagerDelegate> modalDelegate;
@property (weak, nonatomic) id <PTVVideoOverlayViewControllerChatDelegate> chatDelegate;
@property (weak, nonatomic) id <PTVVideoReplayDelegate> replayDelegate;
@property (readonly, nonatomic) PTVBroadcastController *broadcastController;
@property (nonatomic) long long moderationVotingState;
@property (readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (readonly, nonatomic) PTVChatSectionCompositeViewController *chatSectionController;
@property (readonly, nonatomic) UIViewController *currentOverlayViewController;
@property (nonatomic) unsigned long long replayControlsState;
@property (nonatomic) unsigned long long replayAvailabilityState;
@property (retain, nonatomic) PTVVideoContainerViewController *replayVideoViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)ptv_keyboardWillShowWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame curve:(long long)curve duration:(float)duration;
- (void)ptv_keyboardWillHideWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame curve:(long long)curve duration:(float)duration;
- (void)broadcastController:(id)controller didUpdatePlaybackPointFrom:(id)from;
- (void)broadcastControllerDidUpdateTheaterModeEnabled:(id)enabled;
- (void)chatController:(id)controller didChangeChatState:(unsigned long long)state error:(id)error;
- (void)videoContainerViewControllerVideoConnectionStatusDidChange:(id)change;
- (void)videoContainerViewControllerMetadataStatusDidChange:(id)change;
- (void)videoContainerViewControllerDurationDidChange:(id)change;
- (void)videoContainerViewControllerDidReachEndOfVideo:(id)video;
- (void)videoContainerViewControllerDidTapUsernameOfGuestUser:(id)user;
- (void)pauseReplay;
- (void)playReplay;
- (void)chatSectionCompositeViewController:(id)controller didSelectReportGuestUser:(id)user;
- (void)chatSectionCompositeViewController:(id)controller didRequestToReportMessage:(id)message withReportType:(unsigned long long)type;
- (void)chatSectionCompositeViewController:(id)controller didBlockUser:(id)user;
- (void)chatSectionCompositeViewController:(id)controller willBlockUserForMessage:(id)message;
- (void)chatSectionCompositeViewController:(id)controller didUnblockUser:(id)user;
- (void)chatSectionCompositeViewControllerDidExitTheaterMode;
- (void)chatSectionCompositeViewControllerDidRequestSendHeart:(id)heart;
- (void)chatSectionCompositeViewControllerDidRequestRetweet:(id)retweet;
- (void)chatSectionCompositeViewControllerDidToggleCallInToBroadcast:(id)broadcast;
- (void)chatSectionCompositeViewController:(id)controller didCastModerationVote:(unsigned long long)vote;
- (void)chatSectionCompositeViewControllerDidRequestModerationLearnMore:(id)more;
- (void)chatSectionCompositeViewControllerDidSelectShowBroadcastDetails:(id)details;
- (void)chatSectionCompositeViewControllerDidSelectEditBroadcast:(id)broadcast;
- (void)chatSectionCompositeViewController:(id)controller didSelectShowSurvey:(id)survey;
- (void)chatSectionCompositeViewControllerDidSelectModerationReport:(id)report;
- (void)chatSectionCompositeViewControllerDidSelectPrivacySettings:(id)settings;
- (void)chatSectionCompositeViewControllerDidSelectReadOnly:(id)only;
- (void)chatSectionCompositeViewController:(id)controller didSelectSendMessage:(id)message keyboardLanguage:(id)language;
- (void)chatSectionCompositeViewControllerDidSelectPauseReplay:(id)replay;
- (void)chatSectionCompositeViewControllerDidSelectPlayReplay:(id)replay;
- (void)chatSectionCompositeViewController:(id)controller didPinchToScale:(double)scale velocity:(double)velocity;
- (void)chatSectionCompositeViewControllerDidSelectFlipCamera:(id)camera;
- (void)chatSectionCompositeViewControllerDidSelectShareBroadcast:(id)broadcast fromBroadcasterAction:(_Bool)action;
- (void)chatSectionCompositeViewControllerDidSelectShareFromScreenshotPrompt:(id)prompt sourceViewForActivityViewController:(id)controller;
- (void)chatSectionCompositeViewControllerWillBeginScrubbing:(id)scrubbing;
- (void)chatSectionCompositeViewControllerDidCancelScrubbing:(id)scrubbing;
- (void)chatSectionCompositeViewController:(id)controller didFinishScrubbingAtSeekTime:(double)time;
- (void)chatSectionCompositeViewControllerDidSelectAudioScopeButton:(id)button;
- (void)chatSectionCompositeViewControllerDidSelectActionButton:(id)button;
- (void)chatSectionCompositeViewControllerDidSelectShareBroadcastButton:(id)button;
- (void)chatSectionCompositeViewControllerDidSelectGiftHeartActionButton:(id)button;
- (void)chatSectionCompositeViewControllerDidTapOnContributors:(id)contributors withContributorWatcher:(id)watcher presentUserIDs:(id)ids;
- (void)chatSectionCompositeViewControllerDidBeginComposingMessage:(id)message;
- (void)chatSectionCompositeViewControllerDidChangeMessage:(id)message;
- (void)chatSectionCompositeViewControllerDidEndComposingMessage:(id)message;
- (void)chatSectionCompositeViewControllerDidSelectWatchLive:(id)live;
- (void)actionSheetWillDisappear:(id)disappear;
- (void)presentPalette:(id)palette;
- (void)dismissPalette;
- (void)enterPaletteModeWithPadding:(double)padding disableInteraction:(_Bool)interaction animations:(id /* block */)animations completion:(id /* block */)completion;
- (void)leavePaletteMode:(id /* block */)mode completion:(id /* block */)completion;
- (void)messageSent:(id)sent;
- (void)messageReceived:(id)received;
- (void)clearAllChat;
- (_Bool)canReply;
- (void)replyToUsername:(id)username;
- (id)broadcast;
- (void)addOverlayViewController:(id)controller;
- (void)removeOverlayViewController:(id)controller;
- (void)didSelectShareBroadcastWithShareHighlightSelectedByDefault:(_Bool)_default;
- (void)didSelectShareScreenshot:(id)screenshot;
- (void)willBeginScrubbing;
- (void)didFinishScrubbingAtSeekTime:(double)time;
- (void)didCancelScrubbing;
- (id)initWithBroadcastController:(id)controller chatSectionCompositeViewController:(id)controller;
- (id)videoOverlayView;
- (id)chatController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfChatSectionBottomBarView;
- (id)cameraFlipTapGestureRecognizer;
- (_Bool)isEligibleJurorForMessage:(id)message broadcast:(id)broadcast isAppActive:(_Bool)active isOnPhone:(_Bool)phone viewedModerationMessages:(id)messages;
- (_Bool)canExecuteBeginReplay;
- (void)setIdleTimerDisabled:(_Bool)disabled;
- (void)setIsAudioScopeSupported:(_Bool)supported;
- (void)setIsAudioScopeSelected:(_Bool)selected;
- (void)setFlaggedMessage:(id)message;
- (void)setReportType:(unsigned long long)type;
- (void)setModerationVotingDuration:(double)duration;
- (id)getCurrentBlurredBackground;
- (void)videoStreamingDidBeginInController:(id)controller;
- (void)didSelectOverflowMenu;
- (void)overflowViewController:(id)controller willAppearWithAnimationDuration:(double)duration;
- (void)overflowViewController:(id)controller willDisappearWithAnimationDuration:(double)duration;
- (void)animateForOverflowMenu:(id)menu appearing:(_Bool)appearing animationDuration:(double)duration;
- (void)didFinishSeekingToPosition:(id)position;
- (void)removeMoviePlayer;
- (void)playbackStateDidChange;
- (void)setPlayAnimation;
- (void)gotMovieDuration;
- (void)executeBeginReplay;
- (void)didReachEndOfVideo;
- (void)saveBroadcastViewersAndStats:(id)stats;
- (void)setCurrentMessagesInQueue:(unsigned long long)queue;
- (void)setPostBroadcastSnapshotView:(id)view;
- (void)updatePostBroadcastViewsAnimated:(_Bool)animated;
- (void)showOverlayViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)hideOverlayViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)setOverlayContentVisible:(_Bool)visible animated:(_Bool)animated animations:(id /* block */)animations completion:(id /* block */)completion;

@end

#endif /* PTVVideoOverlayViewController_h */

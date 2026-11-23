//
#ifndef PTVBroadcastWatcher_h
#define PTVBroadcastWatcher_h
@import Foundation;

#include "PTVAccessChat.h"
#include "PTVAccessVideo.h"
#include "PTVBroadcastController.h"
#include "PTVChatAccessManager.h"
#include "PTVChatAccessManagerDelegate-Protocol.h"
#include "PTVGuestAnalyticsManager.h"
#include "PTVGuestAnalyticsManagerDelegate-Protocol.h"
#include "PTVVideoAccessManager.h"
#include "PTVVideoAccessManagerDelegate-Protocol.h"
#include "PTVWatchBroadcastAnalyticsManager.h"
#include "PTVWatchBroadcastLifecycleManager.h"
#include "PTVWatchContext.h"
#include "PTVWatchVideoLifecycleManagerDelegate-Protocol.h"

@class NSDate, NSNumber, NSString, NSTimer;

@interface PTVBroadcastWatcher : PTVBroadcastController <PTVWatchVideoLifecycleManagerDelegate, PTVVideoAccessManagerDelegate, PTVChatAccessManagerDelegate, PTVGuestAnalyticsManagerDelegate> {
    /* instance variables */
    PTVBroadcastWatcher *_weakSelf;
    unsigned long long _replayRetryCount;
}

@property (retain, nonatomic) NSDate *dateWhenPreviewBegan;
@property (nonatomic) _Bool hasErrorChatting;
@property (retain, nonatomic) NSTimer *videoBufferingTimer;
@property (readonly, nonatomic) PTVVideoAccessManager *videoAccessManager;
@property (readonly, nonatomic) PTVChatAccessManager *chatAccessManager;
@property (readonly, nonatomic) PTVAccessChat *chatAccess;
@property (retain, nonatomic) NSNumber *transitioningFromState;
@property (retain, nonatomic) NSNumber *transitioningToState;
@property (readonly, nonatomic) long long watchingState;
@property (readonly, nonatomic) _Bool isTransitioningToWatchBroadcastState;
@property (readonly, nonatomic) PTVAccessVideo *videoAccess;
@property (nonatomic) _Bool didEverStartWatching;
@property (readonly, nonatomic) double timeIntervalSincePreviewBegan;
@property (readonly, nonatomic) _Bool isPlayingClip;
@property (readonly, nonatomic) _Bool hasWatchedReplay;
@property (nonatomic) _Bool isVideoBuffering;
@property (nonatomic) _Bool hasVideoPlaybackFailed;
@property (readonly, nonatomic) PTVWatchBroadcastLifecycleManager *lifecycleManager;
@property (readonly, nonatomic) PTVWatchContext *watchContext;
@property (readonly, nonatomic) PTVWatchBroadcastAnalyticsManager *analyticsManager;
@property (readonly, nonatomic) PTVGuestAnalyticsManager *guestAnalyticsManager;
@property (nonatomic) _Bool inBackground;
@property (nonatomic) _Bool isGuestBroadcasting;
@property (nonatomic) _Bool hasConfirmedFirstGuestBroadcastingCallIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (id)watchVideoLifecycleManagerMetaDataForLiveBroadcast:(id)broadcast;
- (id)watchVideoLifecycleManagerMetaDataForReplay:(id)replay;
- (id)watchVideoLifecycleManagerStopWatchingMetaData:(id)data;
- (void)watchVideoLifecycleManagerDidCompletePingWatchingRemotely:(id)remotely withBroadcastData:(id)data error:(id)error;
- (_Bool)watchVideoLifecycleManagerShouldLog:(id)log;
- (void)chatControllerConnectionDidFail:(id)fail;
- (void)chatController:(id)controller didReceiveAuthenticationError:(id)error;
- (void)chatController:(id)controller didReceiveBroadcastEndedMessage:(id)message;
- (void)chatController:(id)controller didReceiveQueuedMessage:(id)message deliveryQueueSize:(unsigned long long)size;
- (void)videoAccessManager:(id)manager didLogEvent:(id)event;
- (void)videoAccessManager:(id)manager didUpdateVideoAccess:(id)access previousVideoAccess:(id)access;
- (void)videoAccessManager:(id)manager didFailToFetchVideoAccessWithError:(id)error;
- (void)chatAccessManager:(id)manager didLogEvent:(id)event;
- (void)chatAccessManager:(id)manager didUpdateChatAccess:(id)access previousChatAccess:(id)access;
- (void)broadcastAvailableForReplayDidChange;
- (_Bool)shouldShowRetweetButton;
- (_Bool)isIncognito;
- (id)initWithBroadcast:(id)broadcast loggedInUser:(id)user videoAccessManager:(id)manager;
- (id)initWithBroadcast:(id)broadcast loggedInUser:(id)user twitterIntegrationDelegate:(id)delegate twitterAuthenticationModel:(id)model watchContext:(id)context videoAccessManager:(id)manager startingPosition:(id)position playingClip:(_Bool)clip;
- (id)broadcastWatcherDelegate;
- (void)notifyWatcherObserversWithBlock:(id /* block */)block;
- (void)logEvent:(id)event;
- (void)loadAnalyticsManager;
- (void)clearGuestAnalyticsManager;
- (void)loadGuestAnalyticsManager;
- (void)guestAnalyticsManagerDidReportBeginGuestBroadcasting:(id)broadcasting;
- (void)guestAnalyticsManagerDidReportEndCondition:(id)condition;
- (void)reportBeginPreviewingToAnalyticsManager;
- (void)reportEndPreviewingWithoutWatchingWithTimeSpentPreviewing:(double)previewing;
- (void)reportBeginWatchingToAnalyticsManagerWithTimeSpentPreviewing:(double)previewing;
- (void)reportEndWatchingToAnalyticsManager;
- (void)observeLoggedInUser;
- (void)unobserveLoggedInUser;
- (_Bool)canTransitionToWatchBroadcastState:(long long)state;
- (_Bool)transitionToWatchBroadcastState:(long long)state;
- (void)willTransitionToWatchBroadcastState:(long long)state;
- (void)didTransitionFromWatchBroadcastState:(long long)state;
- (void)fetchVideoAccessWithCachePolicy:(long long)policy;
- (void)fetchReplayURLIfNeeded;
- (void)didUpdateVideoAccess:(id)access previousVideoAccess:(id)access;
- (void)updatePlaybackPointIfNeededFromUpdatedVideoAccess:(id)access;
- (void)updateBroadcastAvailableForReplayFromUpdatedVideoAccess:(id)access;
- (void)updateBroadcastShareURLFromUpdatedVideoAccess:(id)access;
- (void)didFailToFetchVideoAccessWithError:(id)error;
- (void)updateVideoBufferingTimer;
- (_Bool)connectChat;
- (void)didUpdateChatAccess:(id)access previousChatAccess:(id)access;
- (void)didFetchChatAccess:(id)access;
- (void)didChangeUserPermissionForLoggedOutChat;
- (void)sendChatMessage:(id)message keyboardLanguage:(id)language;
- (void)sendChatMessage:(id)message keyboardLanguage:(id)language replyingTo:(id)to;
- (void)sendSharedOnTwitterMessage;
- (void)sendRetweetedOnTwitterMessage;
- (void)sendSharedOnXWithMessage:(id)message;
- (void)sendJoinMessage;
- (id)sendHeartMessage;
- (void)sendScreenshotHeartMessage;
- (void)sendUserIsTypingMessage;
- (void)sendLocalScrubbingPromptMessage;
- (void)sendLocalCommentTipMessage;
- (void)sendLocalModerationConfirmationForMessage:(id)message;
- (void)sendLocalSentenceMessageWithSentenceType:(unsigned long long)type duration:(double)duration;
- (void)sendLocalBanMessageWithType:(unsigned long long)type duration:(double)duration;
- (void)sendLocalFollowBroadcasterMessage;
- (void)sendLocalShareScreenshotPrompt;
- (void)sendLocalRequestToCallInPrompt;
- (void)sendLocalModeratorWelcome;
- (void)sendLocalModerationAdvisory;
- (unsigned long long)chatRoomPermissionType;
- (void)uploadWatcherMetricsWithVidManStats:(id)stats;
- (void)didReceiveQueuedMessage:(id)message deliveryQueueSize:(unsigned long long)size;
- (void)willUpdatePlaybackPointTo:(id)to;
- (void)didUpdatePlaybackPointFrom:(id)from;
- (void)didReceiveBroadcastEndedMessage;
- (_Bool)isGuestBroadcastingSupported;
- (void)chatController:(id)controller viewerDidReceiveCallInsListEnabledDisabledMessage:(id)message;
- (void)viewerRequestToCallInWasCancelledBecauseCallsInAreDisabled;
- (_Bool)isCallInsListDisabled;
- (void)setIsCallInsListDisabled:(_Bool)disabled;
- (void)guestCallerControllerDidAddOrRemoveLoggedInUserSession;
- (_Bool)hasCalledIn;
- (void)setHasDisplayedGuestBroadcastingOnboardingModal:(_Bool)modal;
- (_Bool)hasDisplayedGuestBroadcastingOnboardingModal;

@end

#endif /* PTVBroadcastWatcher_h */

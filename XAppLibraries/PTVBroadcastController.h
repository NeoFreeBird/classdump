//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastController_h
#define PTVBroadcastController_h
@import Foundation;

#include "PTVAPIResponseErrorInfo.h"
#include "PTVAuthErrorObserver.h"
#include "PTVAuthErrorObserverDelegate-Protocol.h"
#include "PTVBroadcast.h"
#include "PTVBroadcastAnalyticsManager.h"
#include "PTVBroadcastControllerDelegate-Protocol.h"
#include "PTVBroadcastThumbnailManager.h"
#include "PTVChatController.h"
#include "PTVCopyrightViolation.h"
#include "PTVGuestCallerController.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVMergeParticipantUser.h"
#include "PTVPlaybackPoint.h"
#include "PTVTwitterAuthenticationModel.h"
#include "PTVTwitterIntegrationDelegate-Protocol.h"
#include "PTVUserModelController.h"
#include "PTVUserModelControllerDelegate-Protocol.h"
#include "PTVVideoPosition.h"
#include "PTVWeakSet.h"

@class NSDate, NSObject, NSString, NSTimer;

@interface PTVBroadcastController : NSObject <PTVUserModelControllerDelegate, PTVAuthErrorObserverDelegate> {
    /* instance variables */
    PTVBroadcastController *_weakSelf;
    PTVAuthErrorObserver *_authErrorObserver;
    PTVWeakSet *_observers;
    PTVUserModelController *_loadBroadcasterModel;
}

@property (nonatomic) _Bool observingBroadcast;
@property (nonatomic) _Bool hasSharedBroadcastWithAllFollowers;
@property (retain, nonatomic) NSTimer *fetchBroadcastTimer;
@property (retain, nonatomic) NSTimer *analyticsKeepAliveTimer;
@property (retain, nonatomic) PTVCopyrightViolation *copyrightViolation;
@property (retain, nonatomic) PTVAPIResponseErrorInfo *authErrorInfo;
@property (weak, nonatomic) id <PTVBroadcastControllerDelegate> delegate;
@property (readonly, nonatomic) PTVBroadcast *broadcast;
@property (readonly, nonatomic) double fetchBroadcastInterval;
@property (readonly, nonatomic) _Bool shouldFetchBroadcastRegularly;
@property (readonly, nonatomic) PTVMergeParticipantUser *broadcaster;
@property (readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (readonly, nonatomic) _Bool loggedInUserIsBroadcaster;
@property (readonly, nonatomic) _Bool isPublishing;
@property (readonly, nonatomic) _Bool canUserEditBroadcast;
@property (readonly, nonatomic) PTVPlaybackPoint *playbackPoint;
@property (readonly, nonatomic) PTVPlaybackPoint *previousPlaybackPoint;
@property (readonly, nonatomic) PTVVideoPosition *previousPlaybackPosition;
@property (readonly, nonatomic) double broadcastPlaybackStartTimeCode;
@property (readonly, nonatomic) double broadcastHighlightedTimeCode;
@property (readonly, nonatomic) double broadcastReplayStartTime;
@property (readonly, nonatomic) unsigned long long ntpForCurrentFrame;
@property (readonly, nonatomic) unsigned long long ntpForNow;
@property (readonly, nonatomic) NSDate *programDateTime;
@property (readonly, nonatomic) double broadcastTime;
@property (readonly, nonatomic) double currentReplayTimeInterval;
@property (readonly, nonatomic) double replayDuration;
@property (readonly, nonatomic) double estimatedVideoPosition;
@property (readonly, nonatomic) double maximumVideoPosition;
@property (readonly, nonatomic) double minimumVideoPosition;
@property (readonly, nonatomic) PTVChatController *chatController;
@property (readonly, nonatomic) _Bool shouldUseLiveChat;
@property (nonatomic) _Bool chatConnectionDisabled;
@property (nonatomic) _Bool theaterModeEnabled;
@property (nonatomic) _Bool isUserProfileSheetEnabled;
@property (readonly, nonatomic) unsigned long long chatRoomPermissionType;
@property (readonly, nonatomic) long long participantIndex;
@property (readonly, nonatomic) unsigned long long presentOccupancy;
@property (readonly, nonatomic) long long totalParticipantsCount;
@property (weak, nonatomic) id <PTVTwitterIntegrationDelegate> twitterIntegrationDelegate;
@property (retain, nonatomic) PTVTwitterAuthenticationModel *twitterAuthenticationModel;
@property (readonly, nonatomic) _Bool isVirtualGiftingEnabled;
@property (readonly, nonatomic) _Bool canAccessGiftHearts;
@property (readonly, nonatomic) _Bool canSendGiftHearts;
@property (nonatomic) _Bool hasRetweetedBroadcast;
@property (readonly, nonatomic) _Bool viewerSharingEnabled;
@property (readonly, nonatomic) _Bool canShareBroadcast;
@property (readonly, nonatomic) _Bool shouldShowRetweetButton;
@property (readonly, nonatomic) PTVBroadcastThumbnailManager *thumbnailManager;
@property (readonly, nonatomic) PTVGuestCallerController *guestCallerController;
@property (nonatomic) _Bool hasDisplayedThreeGuestLimitWarningToNewBroadcaster;
@property (nonatomic) _Bool hasDisplayedGuestBroadcastingOnboardingModal;
@property (nonatomic) double guestViewsMaxY;
@property (retain, nonatomic) PTVBroadcastAnalyticsManager *broadcastAnalyticsManager;
@property (readonly, nonatomic) _Bool canSimulateCopyrightViolation;
@property (readonly, nonatomic) _Bool canForceRefreshBroadcast;
@property (readonly, nonatomic) _Bool isIncognito;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)CalculateInitialPlaybackPointForBroadcast:(id)broadcast LoggedInUser:(id)user StartingPosition:(id)position IsPublishing:(_Bool)publishing TwitterIntegrationDelegate:(id)delegate;
+ (_Bool)IsLoggedInUser:(id)user BroadcasterOf:(id)of;

/* instance methods */
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)chatController:(id)controller didLogEvent:(id)event;
- (void)userModelController:(id)controller didLoadUser:(id)user withError:(id)error;
- (void)authErrorObserver:(id)observer didObserveAuthError:(id)error;
- (id)initWithDelegate:(id)delegate broadcast:(id)broadcast loggedInUser:(id)user twitterIntegrationDelegate:(id)delegate twitterAuthenticationModel:(id)model isPublishing:(_Bool)publishing startingPosition:(id)position;
- (void)addBroadcastControllerObserver:(id)observer;
- (void)removeBroadcastControllerObserver:(id)observer;
- (void)notifyWithBlock:(id /* block */)block;
- (void)startObservingAuthErrors;
- (void)stopObservingAuthErrors;
- (_Bool)isOriginalBroadcasterUserID:(id)id;
- (void)willChangeBroadcast;
- (void)didChangeBroadcast;
- (_Bool)_observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)startObservingBroadcast;
- (void)stopObservingBroadcast;
- (void)broadcastStateDidChange;
- (void)broadcastAvailableForReplayDidChange;
- (void)broadcastPreferredImageURLDidChange;
- (void)broadcastHeartThemesDidChange;
- (void)broadcastUserIDDidChange;
- (void)broadcastUserDisplayNameDidChange;
- (void)broadcastUserNameDidChange;
- (void)broadcastHasLocationDidChange;
- (void)broadcastLocationTitleDidChange;
- (void)broadcastBroadcastingTitleDidChange;
- (void)broadcastProfileImageURLDidChange;
- (void)broadcastAcceptGiftsDidChange;
- (void)broadcastNWatchingTotalDidChange;
- (void)broadcastNTotalWatchedDidChange;
- (void)broadcastBestEndDateDidChange;
- (void)broadcastShareDataDidChange;
- (void)broadcastViewerSharingEnabledDidChange;
- (void)broadcastAcceptGuestsDidChange;
- (void)broadcastIsPrivateDidChange;
- (void)broadcastCopyrightViolationInterstitialDidChange;
- (void)broadcastReplayTitleEditedDidChange;
- (void)broadcastHasModeratorsDidChange;
- (void)updateBroadcaster:(id)broadcaster;
- (void)loadBroadcasterIfNeeded;
- (id)deliveryDateForMessage:(id)message isForReplay:(_Bool)replay;
- (_Bool)didReceiveMessage:(id)message isForReplay:(_Bool)replay;
- (_Bool)connectChat;
- (_Bool)connectChatWithEstimatedLatency:(double)latency;
- (void)disconnectChat;
- (void)startChatDeliveryIfNeeded;
- (void)stopChatDelivery;
- (void)emptyChatDeliveryQueue;
- (void)sendUserIsTypingMessage;
- (void)openPremiumPaywall;
- (_Bool)isSubscribedToPremium;
- (void)logEvent:(id)event;
- (void)logEventWithFormat:(id)format;
- (void)seekToLive;
- (void)seekToPosition:(id)position;
- (void)seekToBeginningOfReplay;
- (id)playbackPointForBeginningOfReplay;
- (id)videoPositionForBeginningOfReplay;
- (id)playbackPointForSeekingToPosition:(id)position;
- (id)playbackPointForUpdatedBroadcastState;
- (void)updatePlaybackPoint:(id)point;
- (void)willUpdatePlaybackPointTo:(id)to;
- (void)didUpdatePlaybackPointFrom:(id)from;
- (void)didReachEndOfVideo;
- (void)shareBroadcastWithAllFollowersAtTimeCode:(double)code completion:(id /* block */)completion;
- (void)shareBroadcastWithSpecificFollowerIDs:(id)ids channelIDs:(id)ids invitationCount:(long long)count timeCode:(double)code completion:(id /* block */)completion;
- (void)shareBroadcastWithFollowerIDs:(id)ids channelIDs:(id)ids invitationCount:(long long)count timeCode:(double)code completion:(id /* block */)completion;
- (_Bool)isGuestBroadcastingSupported;
- (_Bool)hasCalledIn;
- (_Bool)isCallInsListDisabled;
- (_Bool)isGuestBroadcasting;
- (_Bool)shouldDisplayCallInOverflowMenuItem;
- (_Bool)isTemporarilyHidingCallInOverflowMenuItem;
- (_Bool)shouldHideOverflowMenu;
- (_Bool)shouldHidePostBroadcast;
- (void)loadAnalyticsManager;
- (void)didEnterScrollbackMode;
- (void)didLeaveScrollbackMode;
- (void)didTapMessage:(id)message atIndex:(unsigned long long)index inMessages:(id)messages isInScrollbackMode:(_Bool)mode;
- (void)didPresentChatMessageActionSheetIsInScrollbackMode:(_Bool)mode;
- (void)didCancelChatMessageActionSheetIsInScrollbackMode:(_Bool)mode;
- (void)didSelectReplyToMessage:(id)message isInScrollbackMode:(_Bool)mode;
- (void)didRequestToReportMessage:(id)message withReportType:(unsigned long long)type isInScrollbackMode:(_Bool)mode;
- (void)willBlockUserForMessage:(id)message isInScrollbackMode:(_Bool)mode;
- (void)willPresentUserModalFromMessage:(id)message isInScrollbackMode:(_Bool)mode;
- (_Bool)detectCopyrightViolationIfNeeded;
- (id)loadCopyrightViolation;
- (id)copyrightViolationLearnMoreURL;
- (void)simulateCopyrightViolationAllowListed:(_Bool)listed accepted:(_Bool)accepted;
- (void)performSimulateCopyrightViolationAllowListed:(_Bool)listed accepted:(_Bool)accepted;
- (void)respondToCopyrightViolationWithIsDisputed:(_Bool)disputed completion:(id /* block */)completion;
- (void)didCompleteCopyrightViolationDispute:(_Bool)dispute withSuccess:(_Bool)success error:(id)error;
- (void)forceRefreshBroadcast;
- (void)sendBlockMessageForMessage:(id)message;
- (void)sendBroadcasterBlockMessageForUsername:(id)username remoteUserID:(id)id;
- (_Bool)shouldShowBroadcasterSurveyPrompt;
- (_Bool)shouldShowBroadcasterSurveyOnBroadcastEnd;
- (id)broadcasterSurvey;
- (void)submitBroadcasterSurvey;
- (void)skipBroadcasterSurvey;
- (_Bool)isFetchingBroadcastRegularly;
- (void)startOrStopFetchingBroadcastRegularlyIfNeeded;
- (void)startFetchingBroadcastRegularly;
- (void)stopFetchingBroadcastRegularly;
- (void)fetchBroadcastWithCompletion:(id /* block */)completion;
- (void)uploadGuestBroadcastingPeriodicPublishingStats:(id)stats;
- (void)uploadGuestBroadcastingPeriodicPlaybackStats:(id)stats;
- (void)uploadGuestBroadcastingEndOfStreamStats:(id)stats;

@end

#endif /* PTVBroadcastController_h */

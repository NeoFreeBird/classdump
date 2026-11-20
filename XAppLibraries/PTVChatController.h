//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatController_h
#define PTVChatController_h
@import Foundation;

#include "PTVAmplifyProgram.h"
#include "PTVBroadcastController.h"
#include "PTVBroadcastControllerObserver-Protocol.h"
#include "PTVBroadcastOccupancyTracker.h"
#include "PTVBroadcastOccupancyTrackerDelegate-Protocol.h"
#include "PTVBroadcastViewersAndStats.h"
#include "PTVBroadcastViewersAndStatsLoader.h"
#include "PTVChatDeliveryQueue.h"
#include "PTVChatDeliveryQueueDelegate-Protocol.h"
#include "PTVChatReplayModel.h"
#include "PTVChatReplayModelDelegate-Protocol.h"
#include "PTVChatRoom.h"
#include "PTVChatRoomAccess-Protocol.h"
#include "PTVChatRoomDelegate-Protocol.h"
#include "PTVMessage.h"
#include "PTVMessageGenerator.h"
#include "PTVPaymanService.h"
#include "PTVVirtualGift.h"
#include "PTVWeakSet.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSTimer;

@interface PTVChatController : NSObject <PTVChatDeliveryQueueDelegate, PTVChatRoomDelegate, PTVChatReplayModelDelegate, PTVBroadcastOccupancyTrackerDelegate, PTVBroadcastControllerObserver> {
    /* instance variables */
    long long _countOfLiveNewUserJoins;
    _Bool _hasSentJoinMessage;
    _Bool _didSendShareWithFollowersMessage;
    _Bool _didSendShareOnTwitterMessage;
    _Bool _didSendRetweetOnTwitterMessage;
    _Bool _didSendShareOnFacebookMessages;
    NSDate *_chatRoomJoinDate;
    NSDate *_sendHeartRateLimitBeginDate;
    long long _nHeartsSentDuringRateLimit;
    NSDate *_sendIsTypingRateLimitBeginDate;
    NSMutableDictionary *_locallyReceivedLiveHearts;
    PTVBroadcastOccupancyTracker *_occupancyTracker;
    PTVWeakSet *_observers;
    PTVBroadcastViewersAndStatsLoader *_viewersAndStatsLoader;
    PTVChatController *_weakSelf;
    _Bool _hasSentOutOfMoneyMessageThisCycle;
    _Bool _hasLoggedInUserWatchedReplay;
}

@property (readonly, nonatomic) PTVChatDeliveryQueue *chatDeliveryQueue;
@property (readonly, nonatomic) NSMutableSet *sentChatMessageUUIDs;
@property (retain, nonatomic) NSString *lastSentMessage;
@property (retain, nonatomic) NSDate *lastSentShortMessageDate;
@property (retain, nonatomic) PTVMessageGenerator *messageGenerator;
@property (nonatomic) _Bool hasPromptedShareBroadcast;
@property (retain, nonatomic) NSTimer *moderationPunishmentTimer;
@property (weak, nonatomic) PTVBroadcastController *broadcastController;
@property (readonly, nonatomic) PTVChatRoom *chatRoom;
@property (readonly, nonatomic) unsigned long long numberOfDroppedMessages;
@property (readonly, nonatomic) unsigned long long numberOfLiveCommentsSent;
@property (nonatomic) _Bool shouldDropChatMessagesWithAbuseWarnings;
@property (readonly, nonatomic) NSDictionary *chatManStatistics;
@property (readonly, nonatomic) NSString *chatAccessToken;
@property (readonly, nonatomic) long long participantIndex;
@property (readonly, nonatomic) PTVChatReplayModel *chatReplayModel;
@property (readonly, nonatomic) PTVBroadcastViewersAndStats *viewersAndStats;
@property (readonly, nonatomic) _Bool loadingViewersAndStats;
@property (readonly, nonatomic) _Bool failedToLoadViewersAndStats;
@property (retain, nonatomic) id <PTVChatRoomAccess> chatRoomAccess;
@property (readonly, nonatomic) long long presentOccupancy;
@property (readonly, nonatomic) long long totalParticipantsCount;
@property (readonly, nonatomic) long long numberOfCommentsReceived;
@property (readonly, nonatomic) NSArray *occupancyMetrics;
@property (readonly, nonatomic) _Bool isBeingPunished;
@property (readonly, nonatomic) PTVMessage *moderationPunishmentMessage;
@property (readonly, nonatomic) NSDate *moderationPunishmentStartDate;
@property (readonly, nonatomic) NSArray *amplifyPrograms;
@property (readonly, nonatomic) PTVAmplifyProgram *selectedAmplifyProgram;
@property (readonly, nonatomic) NSString *selectedAmplifyProgramID;
@property (readonly, nonatomic) long long numberOfLiveHeartsSent;
@property (readonly, nonatomic) long long numberOfReplayHeartsSent;
@property (retain, nonatomic) PTVVirtualGift *currentGift;
@property (readonly, nonatomic) PTVPaymanService *paymanService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)broadcastControllerWillChangeBroadcast:(id)broadcast;
- (void)broadcastControllerDidChangeBroadcast:(id)broadcast;
- (void)broadcastControllerBroadcastStateDidChange:(id)change;
- (void)broadcastControllerDidUpdateTheaterModeEnabled:(id)enabled;
- (void)broadcastController:(id)controller didUpdatePlaybackPointFrom:(id)from;
- (void)broadcastStateDidChange;
- (void)chatRoomDidReceiveMessage:(id)message isForReplay:(_Bool)replay;
- (void)chatRoomDidReceivePresenceEvent:(id)event;
- (void)chatRoomConnectionDidFail;
- (void)chatRoomDidReceiveAuthenticationError:(id)error;
- (void)chatRoomDidLogEvent:(id)event;
- (void)chatRoomDidJoin;
- (void)chatRoom:(id)room didChangeState:(unsigned long long)state error:(id)error;
- (void)chatRoomOccupantDidJoin:(id)join isFollowing:(_Bool)following;
- (void)chatRoomOccupantDidLeave:(id)leave;
- (void)chatRoomDidSubscribeWithSuccess:(_Bool)success;
- (void)chatRoomDidReceiveBroadcastViewersAndStats:(id)stats;
- (void)chatRoomDidReceiveModerationSentenceType:(unsigned long long)type duration:(double)duration;
- (void)chatRoomDidReceiveBanType:(unsigned long long)type duration:(double)duration;
- (void)chatDeliveryQueueDidDeliverMessage:(id)message deliveryQueueSize:(unsigned long long)size;
- (_Bool)chatDeliveryQueueShouldDeliverMessage:(id)message;
- (_Bool)chatDeliveryQueueShouldImmediatelyUnloadBroadcastEndedMessage:(id)message;
- (void)chatDeliveryQueueDidDropMessage:(id)message;
- (_Bool)chatDeliveryQueueShouldIgnoreMessage:(id)message;
- (void)replayModelDidReceiveAuthenticationError:(id)error;
- (void)chatReplayModelMessageDeliveryTimerDidFire:(id)fire;
- (void)chatReplayModelDidReceiveFinalTranscriptions:(id)transcriptions;
- (id)deliveryDateForMessage:(id)message;
- (void)broadcastOccupancyTrackerDidUpdateOccupancyMetrics:(id)metrics;
- (id)initWithBroadcastController:(id)controller;
- (void)updateBroadcastViewersAndStatsIfNeeded;
- (unsigned long long)numberOfLiveHeartsReceivedWithUserID:(id)id;
- (void)logEvent:(id)event;
- (void)logEventWithFormat:(id)format;
- (unsigned long long)ntpForCurrentFrame;
- (unsigned long long)ntpForNow;
- (id)programDateTime;
- (void)addChatControllerObserver:(id)observer;
- (void)removeChatControllerObserver:(id)observer;
- (void)notifyWithBlock:(id /* block */)block;
- (id)loggedInUser;
- (_Bool)loggedInUserIsBroadcaster;
- (_Bool)loggedInUserIsModerator;
- (id)broadcast;
- (void)willChangeBroadcast;
- (void)didChangeBroadcast;
- (_Bool)isAudioRoomBroadcast;
- (_Bool)connectChatWithPermissionType:(unsigned long long)type estimatedLatency:(double)latency;
- (void)disconnectChat;
- (void)startChatDeliveryIfNeeded;
- (void)stopChatDelivery;
- (void)emptyChatDeliveryQueue;
- (_Bool)unloadBroadcastEndedMessageImmediatelyFromQueue;
- (void)didUpdatePlaybackPointFrom:(id)from;
- (void)didReceiveMessageFromChatDeliveryQueue:(id)queue deliveryQueueSize:(unsigned long long)size;
- (void)didReceiveBroadcastEndedMessage:(id)message;
- (_Bool)shouldDeliverQueuedMessage:(id)message;
- (_Bool)shouldImmediatelyUnloadBroadcastEndedMessage:(id)message;
- (id)deliveryDateForQueuedMessage:(id)message;
- (void)didDropMessage;
- (void)updateOccupancyAndParticipantsCountFromChatRoomPresenceEvent:(id)event;
- (void)updateOccupancyAndParticipantsCountFromChatRoomViewersAndStats;
- (void)didReceiveMessage:(id)message isForReplay:(_Bool)replay;
- (_Bool)shouldEnqueueMessage:(id)message isForReplay:(_Bool)replay;
- (void)ingestLiveChatMessage:(id)message;
- (void)loggedInUserBlockedByBroadcasterInMessage:(id)message;
- (void)didReceiveBlockMessage:(id)message;
- (void)didReceiveMuteMessage:(id)message;
- (void)didReceiveUnmuteMessage:(id)message;
- (void)wasSelectedForJuryDuty:(id)duty;
- (void)didReceiveJuryDutyVerdict:(id)verdict;
- (void)didReceiveJuryDutyTimeout:(id)timeout;
- (void)didReceiveJuryDutySentence:(id)sentence;
- (void)beginModerationPunishmentFromMessage:(id)message;
- (_Bool)hasPunishmentEnded;
- (void)endModerationPunishmentIfNeeded;
- (_Bool)isLoadingViewersAndStats;
- (void)requestViewersAndStats;
- (void)loadViewersAndStatsFromAPI;
- (void)didReceiveBroadcastViewersAndStats:(id)stats;
- (void)didSendMessage:(id)message;
- (id)sendChatMessage:(id)message keyboardLanguage:(id)language;
- (id)sendChatMessage:(id)message keyboardLanguage:(id)language replyingTo:(id)to;
- (void)sendBroadcasterBlockMessageForUsername:(id)username remoteUserID:(id)id;
- (void)sendBlockMessageForMessage:(id)message;
- (id)sendEmojiMessage:(id)message recipientUserID:(id)id;
- (id)sendHeartMessage;
- (id)sendDefaultHeartMessageWithBody:(id)body recipientUserID:(id)id;
- (void)sendUserIsTypingMessage;
- (void)sendAudiospaceSharingEventString:(id)string;
- (id)sendCurrentGiftHeart;
- (void)sendScreenshotHeartMessage;
- (void)sendLocationMessageWithLatitude:(double)latitude longitude:(double)longitude heading:(double)heading ntpForCurrentFrame:(unsigned long long)frame;
- (void)sendFollowRequest;
- (void)sendShareRequest;
- (void)sendTimestampMessageWithTimeInterval:(double)interval;
- (void)sendLocalBroadcastStartedMessage;
- (void)sendBroadcastEndedMessage;
- (void)sendSharedOnTwitterMessage;
- (void)sendRetweetedOnTwitterMessage;
- (void)sendSharedOnXMessage:(id)xmessage keyboardLanguage:(id)language;
- (void)sendSharedOnFacebookMessage;
- (void)sendJoinMessage;
- (void)sendInviteFollowersMessageWithInvitationCount:(long long)count;
- (void)storeRequestToCallInFromOtherViewer:(id)viewer;
- (void)viewerRequestToCallInWasAccepted:(id)accepted;
- (void)viewerVideoOrAudioFeedIsConnected:(id)connected;
- (void)audioRoomListenerDidCompleteTransitionToSpeakerFromMessage:(id)message;
- (void)viewerDidReceiveCancelCountdownMessageFromBroadcaster:(id)broadcaster;
- (void)viewerDidReceiveGuestWasRemovedMessage:(id)message;
- (void)viewerDidReceiveCallInsListEnabledDisabledMessage:(id)message;
- (void)viewerDidUpdateAudioOnlyViewDeviceMotionX:(double)x deviceMotionY:(double)y;
- (void)didReceiveGuestMotionData:(id)data;
- (void)broadcasterDidReceiveRequestFromViewerToCallIn:(id)in;
- (void)broadcasterDidReceiveCancellationOfRequestToCallIn:(id)in;
- (void)broadcasterDidReceiveCancelCountdownMessage:(id)message;
- (void)sendLocalCommentTipMessage;
- (void)sendLocalGenericChatPrompt:(id)prompt;
- (void)sendLocalGenericChatPrompt:(id)prompt withIcon:(id)icon;
- (void)sendLocalRequestToCallInPrompt;
- (void)sendLocalGuestBroadcastingEnabledPrompt;
- (void)sendLocalPromptToReportGuestUsername:(id)username guestUserID:(id)id;
- (void)sendLocalThanksForYourReportPrompt;
- (void)sendLocalFollowersHasBeenNotifiedPrompt;
- (void)sendLocalModerationSentenceChatMessageForSentence:(id)sentence;
- (void)sendLocalModerationConfirmationForMessage:(id)message;
- (void)sendLocalSentenceMessageWithSentenceType:(unsigned long long)type duration:(double)duration;
- (void)sendLocalBanMessageWithType:(unsigned long long)type duration:(double)duration;
- (void)sendLocalFollowBroadcasterMessage;
- (void)sendLocalModeratorWelcomeMessage;
- (void)sendLocalModerationAdvisoryMessage;
- (void)simulateBlockedByBroadcaster;
- (void)simulateModerationSentenceWithType:(unsigned long long)type;
- (void)executeShareBroadcastPrompt;
- (void)sendLocalShareBroadcastPrompt;
- (void)sendLocalShareScreenshotPrompt;
- (_Bool)shouldSimulateChatRoomTraffic;
- (double)simulateHeartInterval;
- (double)simulateChatInterval;
- (void)startSimulatingMessagesIfNeeded;
- (void)stopSimulatingMessages;
- (void)stopTrackingOccupancyMetrics;
- (id)blockedTwitterIDs;
- (void)selectAmplifyProgramWithID:(id)id completion:(id /* block */)completion;
- (_Bool)shouldLoadAmplifyPrograms;
- (void)loadAmplifyProgramsIfNeeded;
- (void)didCompleteLoadingAmplifyPrograms:(id)programs withError:(id)error;
- (void)loggedInUserDidBeginWatchingReplay;
- (_Bool)addLoggedInUserToReplayViewers;
- (void)didUpdateTheaterModeEnabled;

@end

#endif /* PTVChatController_h */

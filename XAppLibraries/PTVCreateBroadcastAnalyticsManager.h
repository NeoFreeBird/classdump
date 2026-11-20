//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVCreateBroadcastAnalyticsManager_h
#define PTVCreateBroadcastAnalyticsManager_h
@import Foundation;

#include "PTVBroadcastAnalyticsManager.h"
#include "PTVSignal.h"

@class NSDate, NSError, NSMutableDictionary, NSMutableSet, NSString;

@interface PTVCreateBroadcastAnalyticsManager : PTVBroadcastAnalyticsManager {
    /* instance variables */
    NSDate *_preBroadcastStartDate;
    double _initializingTime;
    _Bool _didTapChangeAudience;
    _Bool _didTypeTitle;
    _Bool _didTapCreateGroup;
    _Bool _didTapInviteFriends;
    _Bool _didTapLocation;
    _Bool _didTapTwitter;
    _Bool _didTapChatTypeButton;
    _Bool _didChangeCamera;
    _Bool _didReceivePhoneCall;
    _Bool _didViewBroadcastDetails;
    _Bool _didTapGiftHearts;
    _Bool _didTapGuests;
    NSMutableDictionary *_userContributorTotals;
    NSMutableDictionary *_heartsReceivedByStyle;
    NSMutableDictionary *_acceptGuestSources;
    long long _totalStarsReceived;
    long long _contributorListViews;
    unsigned long long _nGuestRequests;
    unsigned long long _nGuestsAccepted;
    unsigned long long _nGuestsBlocked;
    unsigned long long _nGuestsCountdownCompleted;
    unsigned long long _nGuestsCountdownCanceledByBroadcaster;
    unsigned long long _guestListViews;
    unsigned long long _nCommentsSent;
    NSMutableSet *_videoSources;
    PTVSignal *_step4SerialManager;
    NSError *_saveToCameraRollError;
    NSError *_broadcastDeletionError;
    _Bool _didSaveToCameraRoll;
    _Bool _didDeleteBroadcast;
    _Bool _didWatchReplay;
    NSMutableSet *_uniqueEventsManager;
    _Bool _didEnableSparkles;
}

@property (retain, nonatomic) NSString *previousScreenType;
@property (nonatomic) _Bool didPreviouslyGrantDevicePermissions;
@property (nonatomic) _Bool isGuestBroadcastingSelected;

/* instance methods */
- (id)init;
- (void)didViewCreateBroadcastScreen;
- (void)createBroadcastCompletedWithSuccess:(_Bool)success duration:(double)duration region:(id)region periscopeError:(id)error;
- (void)speedTestCompletedWithSuccess:(_Bool)success duration:(double)duration region:(id)region byteRateSeconds:(int)seconds periscopeError:(id)error;
- (void)cameraStartSuccessfulAfter:(double)after;
- (void)vidManConnectionCompletedAfterNInternalReconnects:(unsigned long long)reconnects isPublic:(_Bool)_public duration:(double)duration region:(id)region;
- (void)startBroadcastCompletedWithSuccess:(_Bool)success audienceReference:(id)reference didShareOnTwitter:(_Bool)twitter didDisablePublicChat:(_Bool)chat didEnableSparkles:(_Bool)sparkles didCancel:(_Bool)cancel typeAheadAnalytics:(id)analytics periscopeError:(id)error;
- (void)didTapChangeAudience;
- (void)didTypeTitle;
- (void)didTapCreateGroup;
- (void)didTapInviteFriends;
- (void)didTapLocationButton;
- (void)didTapTwitterButton;
- (void)didTapChatTypeButton;
- (void)didTapGuests;
- (void)didChangeCamera;
- (void)didDetectPeriscopeProducer;
- (void)didReceivePhoneCall;
- (void)didViewBroadcastDetails;
- (void)didTapGiftHearts;
- (void)didReceiveGift:(id)gift fromUserId:(id)id;
- (void)didOpenContributorList;
- (void)didReceiveGuestCallRequest;
- (void)didOpenGuestList;
- (void)didAcceptGuestBroadcasterFromScreen:(id)screen;
- (void)didCancelGuestBroadcaster;
- (void)didCompleteCountdownForGuestBroadcaster;
- (void)didBlockGuestBroadcaster;
- (void)didSendChatMessage;
- (void)stopBroadcastWithAudienceReference:(id)reference didShareOnTwitter:(_Bool)twitter didDisablePublicChat:(_Bool)chat didPressStopButton:(_Bool)button didSeeLowSpaceWarning:(_Bool)warning;
- (void)postBroadcastCompleted;
- (void)didSaveToCameraRoll;
- (void)didReceiveSaveToCameraRollError:(id)error;
- (void)didWatchReplay;
- (void)didDeleteBroadcastWithError:(id)error;
- (id)networkTypeForCurrentReachabilityStatus;
- (id)errorCodeStringFromError:(id)error;
- (id)audienceTypeFromAudienceReference:(id)reference;
- (void)addSparklesToAttributes:(id)attributes;
- (void)addGuestBroadcastingToAttributes:(id)attributes;

@end

#endif /* PTVCreateBroadcastAnalyticsManager_h */

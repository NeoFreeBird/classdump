//
#ifndef PTVBroadcastPublisher_h
#define PTVBroadcastPublisher_h
@import Foundation;

#include "PTVAccessBroadcaster.h"
#include "PTVAsyncLog.h"
#include "PTVBroadcastController.h"
#include "PTVBroadcasterSurvey.h"
#include "PTVChatRoomAccess-Protocol.h"
#include "PTVCreateBroadcastAnalyticsManager.h"

@class NSString, NSTimer;

@interface PTVBroadcastPublisher : PTVBroadcastController {
    /* instance variables */
    PTVBroadcastPublisher *_weakSelf;
    _Bool _hasUploadedBroadcastMetrics;
}

@property (retain, nonatomic) NSTimer *uploadLogsTimer;
@property (readonly, nonatomic) PTVAsyncLog *publishingLogs;
@property (nonatomic) _Bool shouldShowBroadcasterSurvey;
@property (retain, nonatomic) PTVBroadcasterSurvey *broadcasterSurvey;
@property (retain, nonatomic) PTVAccessBroadcaster *publishingAccess;
@property (retain, nonatomic) NSString *broadcastCreationAppComponent;
@property (retain, nonatomic) id <PTVChatRoomAccess> chatAccess;
@property (readonly, nonatomic) PTVCreateBroadcastAnalyticsManager *createBroadcastAnalyticsManager;
@property (nonatomic) _Bool canShowSurveys;

/* instance methods */
- (id)initWithLoggedInUser:(id)user;
- (id)initWithLoggedInUser:(id)user twitterIntegrationDelegate:(id)delegate;
- (void)dealloc;
- (id)publisherDelegate;
- (void)logEvent:(id)event;
- (_Bool)isOriginalBroadcasterUserID:(id)id;
- (void)setBroadcast:(id)broadcast;
- (void)sendLocalBroadcastStartedMessage;
- (void)createBroadcastSucceeded;
- (void)createBroadcastFailed:(id)failed withError:(id)error;
- (_Bool)createFailedDueToCopyrightBan;
- (id)loadCopyrightViolation;
- (unsigned long long)chatRoomPermissionType;
- (void)requestFollow;
- (void)requestShare;
- (void)startSimulatingMessagesIfNeeded;
- (void)stopSimulatingMessages;
- (void)uploadBroadcasterMetricsWithVidManStats:(id)stats;
- (void)didUploadBroadcastStatisticsWithSuccess:(_Bool)success error:(id)error;
- (void)startBatchedProcessesIfNeeded;
- (void)stopBatchedProcessesIfNeeded;
- (_Bool)shouldUploadBroadcasterLogs;
- (void)uploadBroadcasterLogsIfNeeded;
- (void)uploadBroadcasterLogsIfNeededWithCompletion:(id /* block */)completion;
- (void)didUploadBroadcastLogsWithSuccess:(_Bool)success broadcastProperties:(id)properties error:(id)error;
- (void)sendBlockMessageForMessage:(id)message;
- (void)sendBroadcasterBlockMessageForUsername:(id)username remoteUserID:(id)id;
- (void)didBlockGuestID:(id)id guestUsername:(id)username;
- (void)setHasDisplayedThreeGuestLimitWarningToNewBroadcaster:(_Bool)broadcaster;
- (_Bool)hasDisplayedThreeGuestLimitWarningToNewBroadcaster;
- (void)setHasDisplayedGuestBroadcastingOnboardingModal:(_Bool)modal;
- (_Bool)hasDisplayedGuestBroadcastingOnboardingModal;
- (void)sendLocalGuestBroadcastingEnabledPrompt;
- (void)associateTweetIDWithCurrentBroadcast:(id)broadcast amplifyProgramID:(id)id;
- (void)didAssociateTweetIDWithSuccess:(_Bool)success error:(id)error;
- (void)loadAnalyticsManager;
- (_Bool)shouldShowBroadcasterSurveyPrompt;
- (_Bool)shouldShowBroadcasterSurveyOnBroadcastEnd;
- (void)submitBroadcasterSurvey;
- (void)skipBroadcasterSurvey;
- (void)checkIfSelectedForBroadcasterSurvey;
- (void)_didReceiveBroadcasterSurvey:(id)survey;

@end

#endif /* PTVBroadcastPublisher_h */

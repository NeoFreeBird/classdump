//
#ifndef PTVBroadcastDetailsViewModel_h
#define PTVBroadcastDetailsViewModel_h
@import Foundation;

#include "PTVBroadcast.h"
#include "PTVBroadcastController.h"
#include "PTVBroadcastDetailsViewModelDelegate-Protocol.h"
#include "PTVBroadcastStats.h"
#include "PTVChatControllerObserver-Protocol.h"
#include "PTVWorkClientWithCompletion.h"

@class NSArray, NSDate, NSIndexPath, NSObject, NSString;

@interface PTVBroadcastDetailsViewModel : NSObject <PTVChatControllerObserver> {
    /* instance variables */
    PTVBroadcastDetailsViewModel *_weakSelf;
    _Bool _hasLoadedViewersAndStats;
    PTVWorkClientWithCompletion *_workClientModerationReportCount;
}

@property (readonly, nonatomic) PTVBroadcastController *broadcastController;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) long long totalStarsEarned;
@property (weak, nonatomic) id <PTVBroadcastDetailsViewModelDelegate> delegate;
@property (readonly, nonatomic) PTVBroadcast *broadcast;
@property (readonly, nonatomic) _Bool isLive;
@property (readonly, nonatomic) NSDate *broadcastStartDate;
@property (readonly, nonatomic) _Bool loggedInUserIsBroadcaster;
@property (readonly, nonatomic) _Bool isShowingPlaceholderData;
@property (readonly, nonatomic) _Bool hasViewersAndStatsData;
@property (readonly, nonatomic) _Bool loadingViewersAndStats;
@property (readonly, nonatomic) NSArray *occupancyMetrics;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSIndexPath *totalViewersIndexPath;
@property (readonly, nonatomic) long long indexOfTotalViewersSection;
@property (readonly, nonatomic) long long totalViewersCount;
@property (readonly, nonatomic) long long liveViewersCount;
@property (readonly, nonatomic) long long replayViewersCount;
@property (readonly, nonatomic) NSIndexPath *participantGraphIndexPath;
@property (readonly, nonatomic) long long indexOfParticipantGraphSection;
@property (readonly, nonatomic) long long presentOccupancy;
@property (readonly, nonatomic) NSIndexPath *statisticsIndexPath;
@property (readonly, nonatomic) long long indexOfStatisticsSection;
@property (readonly, nonatomic) PTVBroadcastStats *broadcastStats;
@property (readonly, nonatomic) long long numberOfCommentsReceived;
@property (readonly, nonatomic) _Bool shouldShowStars;
@property (readonly, nonatomic) _Bool shouldShowModerationActions;
@property (readonly, nonatomic) unsigned long long moderationCount;
@property (readonly, nonatomic) _Bool hasLoadedModerationCount;
@property (readonly, nonatomic) _Bool canShowModerationReport;
@property (readonly, nonatomic) long long numberOfTruncatedLiveViewers;
@property (readonly, nonatomic) NSString *titleForTruncatedLiveViewers;
@property (readonly, nonatomic) long long numberOfReplayHearts;
@property (readonly, nonatomic) long long numberOfTruncatedReplayViewers;
@property (readonly, nonatomic) NSString *titleForTruncatedReplayViewers;
@property (readonly, nonatomic) _Bool hasLoadedStarTotal;
@property (readonly, nonatomic) _Bool shouldShowFollowButtonsForContributors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)ShouldShowBroadcastDetailsWithBroadcastController:(id)controller;
+ (_Bool)CanLoadLiveViewersForBroadcastController:(id)controller;
+ (_Bool)CanLoadReplayViewersForBroadcastController:(id)controller;
+ (_Bool)CanLoadModerationActionCountForBroadcastController:(id)controller;
+ (_Bool)CanLoadMapForBroadcastController:(id)controller;

/* instance methods */
- (void)chatController:(id)controller didReceiveChatRoomPresenceEvent:(id)event;
- (void)chatController:(id)controller didReceiveBroadcastViewersAndStats:(id)stats;
- (void)chatController:(id)controller didReceiveQueuedMessage:(id)message deliveryQueueSize:(unsigned long long)size;
- (void)chatController:(id)controller didSendMessage:(id)message;
- (void)chatControllerDidUpdateOccupancyMetrics:(id)metrics;
- (id)initWithBroadcastController:(id)controller;
- (id)chatController;
- (id)loggedInUser;
- (_Bool)isLoggedInUser:(id)user;
- (_Bool)isLoggedInUserFollowingUserID:(id)id;
- (void)loadData;
- (void)loadDataIfNeeded;
- (_Bool)shouldLoadData;
- (id)viewersAndStats;
- (void)loadStarsEarned;
- (id)constructLeaderboard;
- (void)loadModerationCount;
- (void)processModerationReportCountResults:(id)results;
- (_Bool)isLoadingViewersAndStats;
- (_Bool)failedToLoadViewersAndStats;
- (void)didReceiveBroadcastViewersAndStats:(id)stats;
- (void)didRecalculateSections;
- (void)didReceiveMessage:(id)message;
- (void)didSendMessage:(id)message;
- (void)didUpdateViewerWithID:(id)id;
- (void)didUpdateOccupancyMetrics;
- (void)didUpdateNumberOfCommentsReceived;
- (long long)sectionTypeAtIndex:(long long)index;
- (long long)numberOfItemsInSectionAtIndex:(long long)index;
- (void)recalculateSections;
- (id)calculateSections;
- (long long)indexOfSectionOfType:(long long)type;
- (_Bool)containsSectionType:(long long)type;
- (_Bool)isLastIndexPathInSection:(id)section;
- (id)titleForSection:(long long)section;
- (_Bool)shouldShowMap;
- (_Bool)shouldShowViewerCounts;
- (void)didUpdateViewerCounts;
- (_Bool)shouldShowStatistics;
- (_Bool)shouldShowLiveViewers;
- (long long)indexOfLiveViewersSection;
- (long long)numberOfItemsInLiveViewersSection;
- (id)liveViewers;
- (id)liveViewerAtIndexPath:(id)path;
- (long long)indexOfLiveViewerWithRemoteID:(id)id;
- (id)indexPathOfLiveViewerWithID:(id)id;
- (_Bool)isIndexPathOfTruncatedLiveViewers:(id)viewers;
- (_Bool)isIndexPathOfLiveViewer:(id)viewer;
- (id)liveViewersSectionTitle;
- (long long)numberOfHeartsSentByLiveViewer:(id)viewer;
- (void)didUpdateLiveViewerWithID:(id)id;
- (_Bool)shouldShowReplayViewers;
- (long long)indexOfReplayViewersSection;
- (long long)numberOfItemsInReplayViewersSection;
- (id)replayViewers;
- (id)replayViewerAtIndexPath:(id)path;
- (long long)indexOfReplayViewerWithRemoteID:(id)id;
- (id)indexPathOfReplayViewerWithID:(id)id;
- (_Bool)isIndexPathOfTruncatedReplayViewers:(id)viewers;
- (_Bool)isIndexPathOfReplayViewer:(id)viewer;
- (id)replayViewersSectionTitle;
- (long long)numberOfHeartsSentByReplayViewer:(id)viewer;
- (void)didUpdateReplayViewerWithID:(id)id;

@end

#endif /* PTVBroadcastDetailsViewModel_h */

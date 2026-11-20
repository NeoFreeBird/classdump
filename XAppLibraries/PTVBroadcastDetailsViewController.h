//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastDetailsViewController_h
#define PTVBroadcastDetailsViewController_h
@import Foundation;

#include "PTVBroadcastDetailsSectionHeaderView.h"
#include "PTVBroadcastDetailsViewControllerDelegate-Protocol.h"
#include "PTVBroadcastDetailsViewModel.h"
#include "PTVBroadcastDetailsViewModelDelegate-Protocol.h"
#include "PTVBroadcastMapTableViewCellDelegate-Protocol.h"
#include "PTVBroadcastModerationReportViewControllerDelegate-Protocol.h"
#include "PTVBroadcastOverflowTableViewController.h"
#include "PTVGiftingContributorsTableViewControllerDelegate-Protocol.h"
#include "PTVTotalViewersTableViewCellDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSString;

@interface PTVBroadcastDetailsViewController : PTVBroadcastOverflowTableViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, PTVBroadcastDetailsViewModelDelegate, PTVBroadcastMapTableViewCellDelegate, PTVTotalViewersTableViewCellDelegate, PTVGiftingContributorsTableViewControllerDelegate, PTVBroadcastModerationReportViewControllerDelegate> {
    /* instance variables */
    PTVBroadcastDetailsViewModel *_viewModel;
    PTVBroadcastDetailsSectionHeaderView *_replayHeaderView;
    PTVBroadcastDetailsSectionHeaderView *_liveHeaderView;
    _Bool _hasExpandedStatsCell;
    _Bool _hasAppeared;
    _Bool _needsReloadOnViewDidAppear;
}

@property (nonatomic) long long currentBroadcastStatsDisplayState;
@property (nonatomic) _Bool isShowingPlaceholderData;
@property (weak, nonatomic) id <PTVBroadcastDetailsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)ShouldShowBroadcastDetailsWithBroadcastController:(id)controller;

/* instance methods */
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)scrollViewDidScroll:(id)scroll;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)broadcastDetailsViewModelDidReloadData:(id)data;
- (void)broadcastDetailsViewModelDidUpdateViewerCounts:(id)counts;
- (void)broadcastDetailsViewModelDidUpdateOccupancyMetrics:(id)metrics;
- (void)broadcastDetailsViewModelDidUpdateNumberOfCommentsReceived:(id)received;
- (void)broadcastDetailsViewModel:(id)model didUpdateLiveViewerWithID:(id)id atIndexPath:(id)path;
- (void)broadcastDetailsViewModel:(id)model didUpdateReplayViewerWithID:(id)id atIndexPath:(id)path;
- (void)didLongPressOnMapView;
- (void)totalViewersTableViewCellClickedOnLive:(id)live;
- (void)totalViewersTableViewCellClickedOnReplay:(id)replay;
- (void)giftingContributorsViewController:(id)controller didSelectContributor:(id)contributor;
- (_Bool)giftingContributorsViewControllerShouldShowFollowButtons:(id)buttons;
- (id)initWithBroadcastController:(id)controller delegate:(id)delegate;
- (void)doReloadTableView;
- (id)createHeaderViewWithLabel:(id)label;
- (id)mapCellForRowAtIndexPath:(id)path inTableView:(id)view;
- (id)viewerCountsCellForRowAtIndexPath:(id)path inTableView:(id)view;
- (void)configureTotalViewersCell:(id)cell;
- (void)updateTotalViewersCell;
- (id)statisticsCellForRowAtIndexPath:(id)path inTableView:(id)view;
- (void)expandStatisticsCell;
- (void)updateStatisticsCell;
- (void)updateStatisticsCell:(id)cell;
- (void)hideStatisticsTooltipIfVisible;
- (void)didSelectViewerAtIndexPath:(id)path;
- (id)liveViewersHeaderView;
- (id)cellAtLiveViewersIndexPath:(id)path inTableView:(id)view;
- (id)liveViewerCellAtIndexPath:(id)path inTableView:(id)view;
- (void)configureLiveViewerCell:(id)cell atIndexPath:(id)path;
- (id)truncatedLiveViewersCellAtIndexPath:(id)path inTableView:(id)view;
- (id)cellAtReplayViewersIndexPath:(id)path inTableView:(id)view;
- (id)configureReplayViewersParticipantCellForTableView:(id)view atIndexPath:(id)path;
- (void)configureReplayViewerCell:(id)cell atIndexPath:(id)path;
- (id)configureReplayViewersTruncationCellForTableView:(id)view atIndexPath:(id)path;
- (id)replayViewersHeaderView;
- (_Bool)shouldShowReplayHeartsInSectionHeader;
- (void)moderationReportViewController:(id)controller didSelectUser:(id)user;
- (_Bool)canPresentSettingsFromModerationReportViewController:(id)controller;
- (void)presentSettingsFromModerationReportViewController:(id)controller;
- (void)presentBlockedUsersFromModerationReportViewController:(id)controller;

@end

#endif /* PTVBroadcastDetailsViewController_h */

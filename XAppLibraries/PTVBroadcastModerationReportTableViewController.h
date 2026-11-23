//
#ifndef PTVBroadcastModerationReportTableViewController_h
#define PTVBroadcastModerationReportTableViewController_h
@import Foundation;

#include "PTVBroadcast.h"
#include "PTVBroadcastModerationReport.h"
#include "PTVBroadcastModerationReportTableViewControllerDelegate-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVTableViewController.h"
#include "PTVTitleAndActionTableHeaderView.h"

@class NSMutableDictionary, NSString;

@interface PTVBroadcastModerationReportTableViewController : PTVTableViewController {
    /* instance variables */
    PTVTitleAndActionTableHeaderView *_messageHeaderView;
}

@property (readonly, nonatomic) PTVBroadcast *broadcast;
@property (readonly, nonatomic) PTVBroadcastModerationReport *report;
@property (readonly, nonatomic) id <PTVLoggedInUserProtocol> loggedInUser;
@property (readonly, nonatomic) NSString *cursor;
@property (retain, nonatomic) NSMutableDictionary *cachedCellHeightsByWidth;
@property (weak, nonatomic) id <PTVBroadcastModerationReportTableViewControllerDelegate> delegate;
@property (nonatomic) _Bool useLargeChatFont;

/* instance methods */
- (id)initWithBroadcast:(id)broadcast loggedInUser:(id)user;
- (id)usersForSelectedIndexPaths;
- (unsigned long long)selectedUserCount;
- (void)refilter;
- (void)viewDidLoad;
- (void)load:(long long)load;
- (id)context;
- (void)error:(id)error context:(id)context;
- (void)setData:(id)data;
- (_Bool)shouldLoad;
- (void)stateChanged;
- (void)processModerationReportResults:(id)results;
- (void)handleUsersHydrated:(id)hydrated;
- (void)mainQueue_handleUsersHydrated:(id)hydrated;
- (id)userAtIndexPath:(id)path;
- (id)eventAtIndexPath:(id)path;
- (id)headerViewStringForSection:(long long)section;
- (unsigned long long)numberOfUnmutedEvents;
- (unsigned long long)numberOfEvents;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (long long)numberOfSectionsInTableView:(id)view;
- (double)heightForDataRowAtIndexPath:(id)path;
- (double)heightForMessageAtIndexPath:(id)path;
- (id)cachedCellHeightsForCurrentTableWidth;
- (long long)numberOfDataRowsInSection:(long long)section;
- (id)dataCellForRowAtIndexPath:(id)path;
- (void)didSelectDataRowAtIndexPath:(id)path;
- (void)tableView:(id)view didDeselectRowAtIndexPath:(id)path;
- (void)setSelectionStateForAllRowsForUserAtIndexPath:(id)path selected:(_Bool)selected;
- (void)addModeratorsButtonPressed:(id)pressed;
- (void)showBlockedButtonPressed:(id)pressed;
- (void)selectAllMutedRows;
- (void)deselectAllMutedRows;
- (void)_propagateSelectionChanges;

@end

#endif /* PTVBroadcastModerationReportTableViewController_h */

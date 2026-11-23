//
#ifndef PTVFollowersUserModalTableViewController_h
#define PTVFollowersUserModalTableViewController_h
@import Foundation;

#include "PTVEmptyTableView.h"
#include "PTVFollowersTableViewController.h"
#include "PTVFollowersUserModalTableViewControllerDelegate-Protocol.h"

@class NSMutableArray, UIView;

@interface PTVFollowersUserModalTableViewController : PTVFollowersTableViewController {
    /* instance variables */
    UIView *_followersTableHeader;
    NSMutableArray *_followers;
}

@property (retain, nonatomic) PTVEmptyTableView *emptyTableView;
@property (weak, nonatomic) id <PTVFollowersUserModalTableViewControllerDelegate> tableViewDelegate;
@property (nonatomic) _Bool useAdjustedContentAndScrollInsets;

/* instance methods */
- (id)initWithLoggedInUser:(id)user userId:(id)id style:(long long)style;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)change;
- (void)load:(long long)load;
- (_Bool)shouldLoad;
- (void)setData:(id)data;
- (id)dataCellForRowAtIndexPath:(id)path;
- (id)participantCellForIndexPath:(id)path;
- (void)stateChanged;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForFooterInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (void)didSelectDataRowAtIndexPath:(id)path;
- (void)scrollViewDidScroll:(id)scroll;
- (id)userAtIndexPath:(id)path;

@end

#endif /* PTVFollowersUserModalTableViewController_h */

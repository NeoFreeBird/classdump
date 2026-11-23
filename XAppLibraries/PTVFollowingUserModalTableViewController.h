//
#ifndef PTVFollowingUserModalTableViewController_h
#define PTVFollowingUserModalTableViewController_h
@import Foundation;

#include "PTVEmptyTableView.h"
#include "PTVFollowingTableViewController.h"
#include "PTVFollowingUserModalTableViewControllerDelegate-Protocol.h"

@interface PTVFollowingUserModalTableViewController : PTVFollowingTableViewController

@property (retain, nonatomic) PTVEmptyTableView *emptyTableView;
@property (weak, nonatomic) id <PTVFollowingUserModalTableViewControllerDelegate> tableViewDelegate;

/* instance methods */
- (id)initWithLoggedInUser:(id)user userId:(id)id style:(long long)style;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)change;
- (id)dataCellForRowAtIndexPath:(id)path;
- (_Bool)shouldLoad;
- (void)stateChanged;
- (void)didSelectDataRowAtIndexPath:(id)path;
- (void)scrollViewDidScroll:(id)scroll;

@end

#endif /* PTVFollowingUserModalTableViewController_h */

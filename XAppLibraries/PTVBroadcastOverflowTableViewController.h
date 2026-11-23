//
#ifndef PTVBroadcastOverflowTableViewController_h
#define PTVBroadcastOverflowTableViewController_h
@import Foundation;

#include "PTVBroadcastOverflowScrollViewController.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSString, UITableView;

@interface PTVBroadcastOverflowTableViewController : PTVBroadcastOverflowScrollViewController <UITableViewDelegate, UITableViewDataSource>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)scrollViewForContainerView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)scroll;
- (void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)path;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)updateSectionHeaderMasks;
- (id)visibleSectionHeaderViews;

@end

#endif /* PTVBroadcastOverflowTableViewController_h */

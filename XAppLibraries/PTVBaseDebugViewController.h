//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBaseDebugViewController_h
#define PTVBaseDebugViewController_h
@import Foundation;

@class NSArray, NSTimer, UITableViewController;

@interface PTVBaseDebugViewController : UITableViewController

@property (retain, nonatomic) NSTimer *refreshTimer;
@property (retain, nonatomic) NSArray *sections;
@property (copy, nonatomic) id /* block */ sectionsRefreshBlock;

/* instance methods */
- (void)viewDidLoad;
- (void)refreshSections;
- (void)pushWithTitle:(id)title sectionsRefreshBlock:(id /* block */)block;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;

@end

#endif /* PTVBaseDebugViewController_h */

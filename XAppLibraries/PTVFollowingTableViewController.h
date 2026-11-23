//
#ifndef PTVFollowingTableViewController_h
#define PTVFollowingTableViewController_h
@import Foundation;

#include "PTVFingFersTableViewController.h"

@interface PTVFollowingTableViewController : PTVFingFersTableViewController

/* instance methods */
- (void)load:(long long)load;
- (void)stateChanged;
- (id)initWithLoggedInUser:(id)user userId:(id)id style:(long long)style;

@end

#endif /* PTVFollowingTableViewController_h */

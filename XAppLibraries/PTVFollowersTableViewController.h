//
#ifndef PTVFollowersTableViewController_h
#define PTVFollowersTableViewController_h
@import Foundation;

#include "PTVFingFersTableViewController.h"

@interface PTVFollowersTableViewController : PTVFingFersTableViewController

/* instance methods */
- (void)load:(long long)load;
- (void)stateChanged;
- (id)initWithLoggedInUser:(id)user userId:(id)id style:(long long)style;

@end

#endif /* PTVFollowersTableViewController_h */

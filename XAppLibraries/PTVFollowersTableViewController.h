//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

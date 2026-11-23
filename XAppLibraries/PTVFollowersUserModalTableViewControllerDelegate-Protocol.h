//
#ifndef PTVFollowersUserModalTableViewControllerDelegate_Protocol_h
#define PTVFollowersUserModalTableViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVFollowersUserModalTableViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)followersUserModalTableView:(id)view didScrollToYContentOffset:(double)offset scrollDirectionUp:(_Bool)up;

@end

#endif /* PTVFollowersUserModalTableViewControllerDelegate_Protocol_h */

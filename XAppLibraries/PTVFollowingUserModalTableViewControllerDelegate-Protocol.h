//
#ifndef PTVFollowingUserModalTableViewControllerDelegate_Protocol_h
#define PTVFollowingUserModalTableViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVFollowingUserModalTableViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)followingUserModalTableView:(id)view didScrollToYContentOffset:(double)offset scrollDirectionUp:(_Bool)up;

@end

#endif /* PTVFollowingUserModalTableViewControllerDelegate_Protocol_h */

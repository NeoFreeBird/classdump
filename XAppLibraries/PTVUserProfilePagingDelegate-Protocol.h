//
#ifndef PTVUserProfilePagingDelegate_Protocol_h
#define PTVUserProfilePagingDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVUserProfilePagingDelegate <NSObject>

@required

/* required instance methods */
- (void)didTransitionPageToViewControllerAtIndex:(unsigned long long)index;

@optional

/* optional instance methods */
- (void)willTransitionPageToViewControllerAtIndex:(unsigned long long)index;
- (void)tableView:(id)view didScrollToYContentOffset:(double)offset scrollDirectionUp:(_Bool)up;

@end

#endif /* PTVUserProfilePagingDelegate_Protocol_h */

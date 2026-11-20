//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

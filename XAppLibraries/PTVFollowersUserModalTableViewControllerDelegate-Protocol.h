//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

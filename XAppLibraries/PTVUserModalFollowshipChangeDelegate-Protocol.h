//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVUserModalFollowshipChangeDelegate_Protocol_h
#define PTVUserModalFollowshipChangeDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVUserModalFollowshipChangeDelegate <NSObject>

@required

/* required instance methods */
- (void)followStatusDidChange:(id)change isNowFollowing:(_Bool)following;
- (void)didBlockUser:(id)user;
- (void)didUnblockUser:(id)user;

@optional

/* optional instance methods */
- (void)didToggleNotifications:(id)notifications;
- (void)didCancelSelection;

@end

#endif /* PTVUserModalFollowshipChangeDelegate_Protocol_h */

//
#ifndef PTVShareBroadcastCoordinatorDelegate_Protocol_h
#define PTVShareBroadcastCoordinatorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVShareBroadcastCoordinatorDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)shareBroadcastCoordinatorWillRetweetBroadcast:(id)broadcast;
- (void)shareBroadcastCoordinatorDidRetweetBroadcast:(id)broadcast withSuccess:(_Bool)success error:(id)error canRetry:(_Bool)retry;
- (void)shareBroadcastCoordinatorDidShareWithAllFollowers:(id)followers;
- (void)shareBroadcastCoordinator:(id)coordinator didShareWithSpecificFollowerIDs:(id)ids channelIDs:(id)ids;
- (void)shareBroadcastCoordinatorDidShareBroadcastURL:(id)url withActivityType:(id)type;
- (void)shareBroadcastCoordinatorDidComposeTweet:(id)tweet;
- (void)shareBroadcastCoordinatorDidComposeDirectMessage:(id)message;

@end

#endif /* PTVShareBroadcastCoordinatorDelegate_Protocol_h */

//
#ifndef PTVHistoryUserModalTableViewControllerDelegate_Protocol_h
#define PTVHistoryUserModalTableViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVHistoryUserModalTableViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)didFetchLiveBroadcasts:(int)broadcasts withHistoryBroadcast:(int)broadcast;
- (_Bool)isBlocked;

@optional

/* optional instance methods */
- (void)broadcastHistoryCellDidSelectHashtag:(id)hashtag;
- (void)broadcastHistoryTableView:(id)view didScrollToYContentOffset:(double)offset scrollDirectionUp:(_Bool)up;

@end

#endif /* PTVHistoryUserModalTableViewControllerDelegate_Protocol_h */

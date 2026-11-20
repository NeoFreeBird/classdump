//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastDetailsViewModelDelegate_Protocol_h
#define PTVBroadcastDetailsViewModelDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastDetailsViewModelDelegate <NSObject>

@required

/* required instance methods */
- (void)broadcastDetailsViewModelDidReloadData:(id)data;

@optional

/* optional instance methods */
- (void)broadcastDetailsViewModelDidUpdateViewerCounts:(id)counts;
- (void)broadcastDetailsViewModelDidUpdateOccupancyMetrics:(id)metrics;
- (void)broadcastDetailsViewModelDidUpdateNumberOfCommentsReceived:(id)received;
- (void)broadcastDetailsViewModel:(id)model didUpdateLiveViewerWithID:(id)id atIndexPath:(id)path;
- (void)broadcastDetailsViewModel:(id)model didUpdateReplayViewerWithID:(id)id atIndexPath:(id)path;

@end

#endif /* PTVBroadcastDetailsViewModelDelegate_Protocol_h */

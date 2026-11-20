//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWatchVideoLifecycleDelegate_Protocol_h
#define PTVWatchVideoLifecycleDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVWatchVideoLifecycleDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)lifecycleWillStartWatchingRemotely:(id)remotely;
- (void)lifecycleDidCompleteStartWatchingRemotely:(id)remotely withError:(id)error;
- (void)lifecycleWillPingWatchingRemotely:(id)remotely;
- (void)lifecycleDidCompletePingWatchingRemotely:(id)remotely withBroadcastData:(id)data error:(id)error;
- (void)lifecycleDidDelayStopWatchingRemotely:(id)remotely;
- (void)lifecycleWillStopWatchingRemotely:(id)remotely;
- (void)lifecycleDidCompleteStopWatchingRemotely:(id)remotely withError:(id)error;

@end

#endif /* PTVWatchVideoLifecycleDelegate_Protocol_h */

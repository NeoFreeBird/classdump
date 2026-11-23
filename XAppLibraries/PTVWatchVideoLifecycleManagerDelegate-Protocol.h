//
#ifndef PTVWatchVideoLifecycleManagerDelegate_Protocol_h
#define PTVWatchVideoLifecycleManagerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVWatchVideoLifecycleManagerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)watchVideoLifecycleManagerMetaDataForLiveBroadcast:(id)broadcast;
- (id)watchVideoLifecycleManagerMetaDataForReplay:(id)replay;
- (id)watchVideoLifecycleManagerStopWatchingMetaData:(id)data;
- (void)watchVideoLifecycleManagerDidCompletePingWatchingRemotely:(id)remotely withBroadcastData:(id)data error:(id)error;
- (_Bool)watchVideoLifecycleManagerShouldLog:(id)log;

@end

#endif /* PTVWatchVideoLifecycleManagerDelegate_Protocol_h */

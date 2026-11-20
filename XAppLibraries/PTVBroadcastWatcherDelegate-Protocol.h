//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastWatcherDelegate_Protocol_h
#define PTVBroadcastWatcherDelegate_Protocol_h
@import Foundation;

#include "PTVBroadcastControllerDelegate-Protocol.h"
#include "PTVBroadcastWatcherObserver-Protocol.h"

@protocol PTVBroadcastWatcherDelegate <PTVBroadcastControllerDelegate, PTVBroadcastWatcherObserver>

@required

@optional

/* optional instance methods */
- (id)broadcastWatcherStopWatchingMetaData:(id)data;
- (_Bool)broadcastWatcherShouldLog:(id)log;

@end

#endif /* PTVBroadcastWatcherDelegate_Protocol_h */

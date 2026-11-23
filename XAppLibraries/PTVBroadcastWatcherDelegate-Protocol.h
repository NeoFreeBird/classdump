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

//
#ifndef PTVBroadcastWatcherObserver_Protocol_h
#define PTVBroadcastWatcherObserver_Protocol_h
@import Foundation;

#include "PTVBroadcastControllerObserver-Protocol.h"

@protocol PTVBroadcastWatcherObserver <PTVBroadcastControllerObserver>

@required

@optional

/* optional instance methods */
- (void)broadcastWatcher:(id)watcher didUpdateVideoAccess:(id)access previousVideoAccess:(id)access;
- (void)broadcastWatcher:(id)watcher didFailToFetchVideoAccessWithError:(id)error;
- (void)broadcastWatcher:(id)watcher didFetchChatAccess:(id)access;
- (void)broadcastWatcher:(id)watcher willTransitionToWatchBroadcastState:(long long)state;
- (void)broadcastWatcher:(id)watcher didTransitionFromWatchBroadcastState:(long long)state;
- (void)broadcastWatcherDidChangeIsVideoBuffering:(id)buffering;

@end

#endif /* PTVBroadcastWatcherObserver_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWatchBroadcastLifecycleManager_h
#define PTVWatchBroadcastLifecycleManager_h
@import Foundation;

#include "PTVAccessChat.h"
#include "PTVAccessVideo.h"
#include "PTVBroadcast.h"
#include "PTVWatchVideoLifecycleManager.h"

@interface PTVWatchBroadcastLifecycleManager : PTVWatchVideoLifecycleManager {
    /* instance variables */
    PTVWatchBroadcastLifecycleManager *_weakSelf;
    PTVBroadcast *_broadcast;
}

@property (retain, nonatomic) PTVAccessVideo *videoAccess;
@property (retain, nonatomic) PTVAccessChat *chatAccess;

/* instance methods */
- (id)initWithDelegate:(id)delegate lifecycleToken:(id)token isLive:(_Bool)live isAutoPlayingOnFeed:(_Bool)feed loggedInUser:(id)user watchContext:(id)context;
- (_Bool)shouldSendLifecycleLogData;
- (_Bool)isLive;
- (_Bool)shouldStartWatching;
- (_Bool)shouldStopWatching;
- (id)initWithBroadcast:(id)broadcast delegate:(id)delegate loggedInUser:(id)user watchContext:(id)context videoAccess:(id)access chatAccess:(id)access;
- (_Bool)stopWatching;
- (id)lifecycleToken;
- (void)reloadLifecycle;
- (_Bool)hasAnythingToWatch;
- (void)didChangeUserPermissionForLoggedOutChat;

@end

#endif /* PTVWatchBroadcastLifecycleManager_h */

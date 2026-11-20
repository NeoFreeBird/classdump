//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWatchVideoLifecycleManager_h
#define PTVWatchVideoLifecycleManager_h
@import Foundation;

#include "PTVAsyncLog.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVTwitterIntegrationDelegate-Protocol.h"
#include "PTVWatchContext.h"
#include "PTVWatchVideoLifecycleDelegate-Protocol.h"
#include "PTVWatchVideoLifecycleManagerDelegate-Protocol.h"

@class NSMutableArray, NSObject, NSString, NSTimer;

@interface PTVWatchVideoLifecycleManager : NSObject <PTVWatchVideoLifecycleDelegate> {
    /* instance variables */
    PTVWatchVideoLifecycleManager *_weakSelf;
    NSMutableArray *_lifecyclesArray;
}

@property (retain, nonatomic) NSTimer *pingBroadcastTimer;
@property (readonly, nonatomic) PTVAsyncLog *viewerLogs;
@property (weak, nonatomic) id <PTVWatchVideoLifecycleManagerDelegate> delegate;
@property (weak, nonatomic) id <PTVTwitterIntegrationDelegate> twitterIntegrationDelegate;
@property (readonly, nonatomic) NSString *lifecycleToken;
@property (readonly, nonatomic) _Bool isLive;
@property (readonly, nonatomic) _Bool isAutoPlayingOnFeed;
@property (readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (readonly, nonatomic) PTVWatchContext *watchContext;
@property (readonly, nonatomic) NSString *session;
@property (readonly, nonatomic) _Bool isWatching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)lifecycleMetaDataForLifecycle:(id)lifecycle;
- (id)startWatchingMetaDataForLifecycle:(id)lifecycle;
- (void)lifecycleWillStartWatchingRemotely:(id)remotely;
- (void)lifecycleDidCompleteStartWatchingRemotely:(id)remotely withError:(id)error;
- (void)lifecycleWillPingWatchingRemotely:(id)remotely;
- (void)lifecycleDidCompletePingWatchingRemotely:(id)remotely withBroadcastData:(id)data error:(id)error;
- (void)lifecycleDidDelayStopWatchingRemotely:(id)remotely;
- (void)lifecycleWillStopWatchingRemotely:(id)remotely;
- (void)lifecycleDidCompleteStopWatchingRemotely:(id)remotely withError:(id)error;
- (id)initWithDelegate:(id)delegate lifecycleToken:(id)token isLive:(_Bool)live isAutoPlayingOnFeed:(_Bool)feed loggedInUser:(id)user watchContext:(id)context;
- (id)lifecycle;
- (void)appendLifecycle;
- (_Bool)shouldSendLifecycleLogData;
- (void)logEvent:(id)event;
- (void)logEventWithFormat:(id)format;
- (void)clearLogs;
- (_Bool)shouldStartWatching;
- (_Bool)startWatchingWithPreviewTimeInterval:(double)interval;
- (void)willStartWatching;
- (void)didStartWatching;
- (void)startPingBroadcastTimer;
- (void)pingWatching;
- (void)willPingWatching;
- (void)didPingWatching;
- (_Bool)stopWatchingWithMetaData:(id)data;
- (_Bool)shouldStopWatching;
- (void)willStopWatching;
- (void)didStopWatching;

@end

#endif /* PTVWatchVideoLifecycleManager_h */

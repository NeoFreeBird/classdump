//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWatchVideoLifecycle_h
#define PTVWatchVideoLifecycle_h
@import Foundation;

#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVWatchContext.h"
#include "PTVWatchVideoLifecycleDelegate-Protocol.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSData, NSDate, NSDictionary, NSObject, NSString;

@interface PTVWatchVideoLifecycle : NSObject <PTVWorkClientDelegate> {
    /* instance variables */
    PTVWatchVideoLifecycle *_weakSelf;
    PTVWorkClient *_workClient;
    NSDate *_stopWatchingDate;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    PTVWatchContext *_watchContext;
    _Bool _needsStopWatching;
    NSDictionary *_stopWatchingMetaDataOverride;
    id /* block */ _startWatchingCallback;
    long long _cachePolicy;
}

@property (weak, nonatomic) id <PTVWatchVideoLifecycleDelegate> delegate;
@property (readonly, nonatomic) _Bool isWatching;
@property (readonly, nonatomic) NSString *session;
@property (readonly, nonatomic) NSString *lifecycleToken;
@property (readonly, nonatomic) _Bool isLive;
@property (readonly, nonatomic) _Bool isAutoPlay;
@property (readonly, nonatomic) double previewTimeInterval;
@property (retain, nonatomic) NSDictionary *startWatchingMetaData;
@property (retain, nonatomic) NSDictionary *lifecycleMetaData;
@property (retain, nonatomic) NSData *lifecycleLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (id)context;
- (id)initWithDelegate:(id)delegate lifecycleToken:(id)token isLive:(_Bool)live isAutoPlay:(_Bool)play loggedInUser:(id)user watchContext:(id)context;
- (void)startWatchingWithPreviewTimeInterval:(double)interval;
- (void)startWatchingRemotelyWithCachePolicy:(long long)policy;
- (void)lifecycleWillStartWatchingRemotely;
- (void)lifecycleDidCompleteStartWatchingRemotelyWithError:(id)error;
- (void)pingWatching;
- (void)pingWatchingRemotely;
- (void)lifecycleWillPingRemotely;
- (void)lifecycleDidCompletePingWatchingRemotelyWithError:(id)error broadcastData:(id)data;
- (void)stopWatchingWithMetaData:(id)data;
- (void)stopWatchingRemotelyWithMetaData:(id)data;
- (void)lifecycleDidDelayStopWatching;
- (void)lifecycleWillStopWatchingRemotely;
- (void)lifecycleDidCompleteStopWatchingRemotelyWithError:(id)error;
- (void)reconnectWatchingRemotely;

@end

#endif /* PTVWatchVideoLifecycle_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1GetBroadcastManager_h
#define T1GetBroadcastManager_h
@import Foundation;

@class NSMutableDictionary, NSObject, TFSTimer;
@protocol OS_dispatch_queue;

@interface T1GetBroadcastManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ongoingRequestsQueue;
@property (retain, nonatomic) NSMutableDictionary *ongoingRequestsForBroadcastIdentifier;
@property (retain, nonatomic) NSMutableDictionary *broadcastRequestObserversForBroadcastIdentifier;
@property (retain, nonatomic) TFSTimer *timer;
@property (nonatomic) unsigned long long elapsedTicks;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_tfn_cancelAllRequests;
- (id)registerForPeriodicUpdatesForInterval:(double)interval broadcastID:(id)id account:(id)account fireImmediately:(_Bool)immediately;
- (void)unregisterForPeriodicUpdatesForIdentifier:(id)identifier;
- (void)getBroadcastForBroadcastIDOrShareToken:(id)token accountID:(id)id completion:(id /* block */)completion;
- (void)_tfn_refreshRequests:(id)requests;
- (void)_tfn_dispatchPeriodicRequestForBroadcastID:(id)id accountID:(id)id;
- (void)_tfn_requestUpdateWithBroadcastID:(id)id accountID:(id)id completion:(id /* block */)completion;
- (id)_tfn_fetchWithBroadcastID:(id)id accountID:(id)id completion:(id /* block */)completion;
- (void)_tfn_didReceiveResponse:(id)response broadcastID:(id)id error:(id)error;
- (void)_tfn_createAndScheduleTimerIfNil;
- (void)_tfn_disposeTimer;
- (void)_tfn_activeAccountDidChange;

@end

#endif /* T1GetBroadcastManager_h */

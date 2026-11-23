//
#ifndef T1CardAPIManager_h
#define T1CardAPIManager_h
@import Foundation;

#include "T1CardAPIManager-Protocol.h"
#include "TFSTwitterAPICommandLoader-Protocol.h"

@class NSMutableDictionary, NSObject, TFSTimer;
@protocol OS_dispatch_queue;

@interface T1CardAPIManager : NSObject <T1CardAPIManager>

@property (readonly, nonatomic) id <TFSTwitterAPICommandLoader> apiCommandLoader;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ongoingRequestsQueue;
@property (retain, nonatomic) NSMutableDictionary *ongoingRequestsForCardIdentifier;
@property (retain, nonatomic) NSMutableDictionary *observersForCardIdentifier;
@property (retain, nonatomic) TFSTimer *timer;
@property (nonatomic) unsigned long long elapsedTicks;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)initWithAPICommandLoader:(id)loader;
- (void)dealloc;
- (void)_tfn_cancelAllRequests;
- (void)registerForPeriodicReadsFromCapiURL:(id)url atInterval:(double)interval requestData:(id)data accountID:(id)id forCardIdentifier:(id)identifier fireImmediately:(_Bool)immediately;
- (void)unregisterForPeriodicReadsForCardIdentifier:(id)identifier;
- (void)_tfn_fire;
- (id)_tfn_ongoingRequests;
- (void)_tfn_sendRequestToCapiURL:(id)url method:(long long)method periodicRequest:(id)request completion:(id /* block */)completion;
- (void)_tfn_refreshRegisteredCards:(id)cards;
- (void)_tfn_dispatchPeriodicRequest:(id)request;
- (void)_tfn_didReceiveResponse:(id)response error:(id)error forCardIdentifier:(id)identifier;
- (void)_tfn_createAndScheduleTimerIfNil;
- (void)_tfn_activeAccountDidChange;
- (void)_tfn_appDidEnterBackground:(id)background;
- (void)_tfn_appWillEnterForeground:(id)foreground;

@end

#endif /* T1CardAPIManager_h */

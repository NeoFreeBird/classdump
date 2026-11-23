//
#ifndef TTDDraftSyncEngine_h
#define TTDDraftSyncEngine_h
@import Foundation;

#include "TNLCommunicationAgentObserver-Protocol.h"

@class NSObject;

@interface TTDDraftSyncEngine : NSObject <TNLCommunicationAgentObserver> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 account;
    @40@0:8:16@24@32 authenticateRequestHandler;
    @40@0:8:16@24@32 dataService;
    @40@0:8:16@24@32 deletionStore;
    @40@0:8:16@24@32 queuedChains;
    @40@0:8:16@24@32 chainGenerations;
    @40@0:8:16@24@32 chainTasks;
    @40@0:8:16@24@32 backgroundTaskHandles;
    @40@0:8:16@24@32 deletionsInFlight;
}

@property (nonatomic, readonly) _Bool isEnabled;

/* class methods */
+ (id)engineForAccount:(id)account authenticateRequestHandler:(id /* block */)handler;
+ (_Bool)keepsCompositionsOnDevice:(id)device;

/* instance methods */
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)enqueueCompositions:(id)compositions;
- (void)deleteDraftForCompositions:(id)compositions;
- (void)resume;
- (void)applicationDidBecomeActive;
- (id)init;

@end

#endif /* TTDDraftSyncEngine_h */

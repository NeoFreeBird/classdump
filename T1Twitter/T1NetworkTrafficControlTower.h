//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1NetworkTrafficControlTower_h
#define T1NetworkTrafficControlTower_h
@import Foundation;

#include "T1NetworkTrafficMappingServiceDelegate-Protocol.h"
#include "TNLHostSanitizer-Protocol.h"
#include "TNUTLSTrustEvaluatorDelegate-Protocol.h"
#include "XApiHostMapping-Protocol.h"

@class NSDictionary, NSObject, NSSet, NSString, T1NetworkTrafficMappingService, TFSObjectCache;
@protocol OS_dispatch_queue;

@interface T1NetworkTrafficControlTower : NSObject <TNLHostSanitizer, TNUTLSTrustEvaluatorDelegate, T1NetworkTrafficMappingServiceDelegate, XApiHostMapping> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSSet *_defaultPinnableRootHosts;
    NSDictionary *_hostMap;
    NSDictionary *_reverseHostMap;
    NSSet *_unmappablePaths;
    NSObject<OS_dispatch_queue> *_isIPAddressQueue;
    TFSObjectCache *_isIPAddressCache;
}

@property (readonly, nonatomic) T1NetworkTrafficMappingService *trafficMappingService;
@property (nonatomic) _Bool suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (void)clearMappingPersistenceSynchronously;

/* instance methods */
- (id)initInternal;
- (id)init;
- (void)_resume;
- (void)_suspend;
- (void)_updateStateWithAccount:(id)account;
- (void)_t1_accountDidBecomeActiveNotification:(id)notification;
- (void)_t1_featureSwitchesDidUpdateNotification:(id)notification;
- (void)_t1_didUpdateAccount:(id)account;
- (id)TLSTrustEvaluator:(id)evaluator unmappedHostForHost:(id)host;
- (id)_unmappedHostForHost:(id)host;
- (_Bool)TLSTrustEvaluator:(id)evaluator isPinnableHost:(id)host;
- (id)TLSTrustEvaluator:(id)evaluator hostForEvaluationHost:(id)host unmappedHost:(id)host trustHost:(id)host unmappedTrustHost:(id)host;
- (_Bool)isHostAnIPAddress:(id)ipaddress;
- (void)tnl_host:(id)tnl_host wasEncounteredForURLRequest:(id)urlrequest asRedirect:(_Bool)redirect completion:(id /* block */)completion;
- (void)_state_host:(id)_state_host wasEncounteredForURLRequest:(id)urlrequest asRedirect:(_Bool)redirect justUseConfig:(_Bool)config completion:(id /* block */)completion;
- (void)mapHostForRequest:(id)request completion:(id /* block */)completion;
- (id)unmappedHostForHost:(id)host;
- (void)didCompleteRequestToURL:(id)url statusCode:(long long)code error:(id)error;
- (void)_scribeTrafficMappingServiceAction:(id)action;
- (void)trafficMappingServiceDidApplyTrafficMap:(id)map;
- (void)trafficMappingServiceDidClearTrafficMap:(id)map;
- (void)trafficMappingServiceDidPurgeTrafficMap:(id)map;
- (void)trafficMappingServiceDidDiscardTrafficMap:(id)map;
- (void)trafficMappingServiceDidEncounterInvalidTrafficMap:(id)map;
- (void)trafficMappingService:(id)service didCaptureProbeMetrics:(id)metrics hostToContextDic:(id)dic;
- (void)trafficMappingServiceDidThrottleProbe;
- (void)trafficMappingServiceDidEncounterCorrectPrediction:(id)prediction;
- (void)trafficMappingServiceDidEncounterIncorrectPrediction:(id)prediction;
- (void)trafficMappingServiceDidEncounterPredictionMeasurementFailed:(id)failed;
- (double)trafficMappingService:(id)service normalizedRequestDuration:(id)duration;
- (_Bool)isSuspended;

@end

#endif /* T1NetworkTrafficControlTower_h */

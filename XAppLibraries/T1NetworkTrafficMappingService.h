//
#ifndef T1NetworkTrafficMappingService_h
#define T1NetworkTrafficMappingService_h
@import Foundation;

#include "T1NetworkTrafficMappingServicePollingTask-Protocol.h"
#include "T1NetworkTrafficMappingServicePollingTaskDelegate-Protocol.h"
#include "T1NetworkTrafficRecommendationValidator.h"
#include "T1NetworkTrafficRecommendationValidatorDelegate-Protocol.h"
#include "TFSTwitterAPICommandContext-Protocol.h"
#include "TFSTwitterAPICommandLoader-Protocol.h"
#include "TNLHostSanitizer-Protocol.h"
#include "TNLNetworkObserver-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSObject, NSSet, NSString, TFSTimer, TFSTwitterRecurringTaskService, TFSTwitterTrafficRecommendationsModel, TNUTransactionMetrics;
@protocol OS_dispatch_queue, T1NetworkTrafficMappingServiceDelegate, TFSTwitterAPICommandCancellable;

@interface T1NetworkTrafficMappingService : NSObject <TNLNetworkObserver, T1NetworkTrafficMappingServicePollingTaskDelegate, T1NetworkTrafficRecommendationValidatorDelegate, TNLHostSanitizer> {
    /* instance variables */
    _Bool _didRegisterPollingTask;
    NSString *_accountID;
    NSString *_configurationKey;
    NSString *_configurationValue;
    TFSTimer *_pollingTimer;
    TFSTwitterTrafficRecommendationsModel *_currentRecommendations;
    NSDictionary *_activeHostMap;
    NSDictionary *_latestReverseHostMap;
    _Bool _valid;
    unsigned long long _timeoutsSeen;
    id <T1NetworkTrafficMappingServicePollingTask> _pollingTask;
    NSMutableArray *_probingOperations;
    NSMutableArray *_validationOperations;
    TNUTransactionMetrics *_probingCNOE;
    id <TFSTwitterAPICommandCancellable> _requestBeaconListOperation;
    struct { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; struct atomic_flag { _Atomic _Bool _Value; } predicate; } _lastProbingDateUserDefaultsLoadingToken;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSString *probingRandomizationString;
@property (readonly, nonatomic) id <TFSTwitterAPICommandLoader> commandLoader;
@property (readonly, nonatomic) id <TFSTwitterAPICommandContext> commandContext;
@property (readonly, nonatomic) TFSTwitterRecurringTaskService *recurringTaskService;
@property (readonly, nonatomic) T1NetworkTrafficRecommendationValidator *recommendationValidator;
@property (retain, nonatomic) NSDate *queue_lastProbingDate;
@property (weak) id <T1NetworkTrafficMappingServiceDelegate> delegate;
@property (readonly) _Bool suspended;
@property (copy) NSString *persistenceIdentifier;
@property (copy) NSSet *unmappablePaths;
@property unsigned long long maxTimeoutsForTrafficMapping;
@property unsigned long long maxProbesPerSession;
@property double probeThrottleTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)clearPersistenceSynchronouslyWithIdentifier:(id)identifier;

/* instance methods */
- (id)_queue_lastProbingDate;
- (void)_queue_setLastProbingDate:(id)date;
- (id)_t1_createPollingTask;
- (void)dealloc;
- (void)_t1_queue_cancelRunningOperations;
- (id)initWithDelegate:(id)delegate probingRandomizationString:(id)string apiCommandLoader:(id)loader apiCommandContext:(id)context recurringTaskService:(id)service;
- (id)init;
- (id)initWithDelegate:(id)delegate;
- (void)suspend;
- (void)updateWithConfigurationKey:(id)key configurationValue:(id)value accountID:(id)id;
- (_Bool)isSuspended;
- (void)_t1_queue_resumeWithConfigurationKey:(id)key configurationValue:(id)value accountID:(id)id;
- (void)_t1_queue_suspend:(_Bool)_t1_queue_suspend;
- (void)_t1_queue_registerRecurringTaskIfNecessary;
- (void)_t1_queue_resetPollingWithNextPollingDate:(id)date;
- (void)_t1_queue_tearDownPolling;
- (void)_t1_queue_firePolling;
- (void)queue_completePollingWithRecommendationResult:(id)result error:(id)error fromPersistence:(_Bool)persistence;
- (void)resetLastProbingDate;
- (void)_t1_queue_requestBeaconList;
- (void)_t1_queue_completeRequestBeaconList:(id)list error:(id)error;
- (void)_t1_queue_fireProbesWithURLStrings:(id)urlstrings;
- (_Bool)_t1_queue_isProbeThrottled;
- (void)_t1_queue_fireProbes;
- (void)_t1_queue_probingOperation:(id)operation didCompleteWithResponse:(id)response;
- (void)_t1_queue_capturedProbeMetrics:(id)metrics hostToContextDic:(id)dic;
- (void)_t1_queue_throttleProbe;
- (_Bool)_t1_queue_wasMappedHost:(id)host;
- (id)unmappedHostForHost:(id)host;
- (void)_t1_queue_tearDownRemapping;
- (_Bool)_t1_queue_isHostRewrittenExpired;
- (void)_t1_queue_updateRecommendations:(id)recommendations shouldValidate:(_Bool)validate;
- (void)_t1_queue_handleServerError:(long long)error forURL:(id)url;
- (void)_t1_queue_handleOperationError:(id)error forURL:(id)url;
- (void)_t1_queue_failbackWithError:(id)error forURL:(id)url;
- (void)clearPersistence;
- (void)clearPersistenceWithIdentifier:(id)identifier;
- (id)_t1_queue_loadModelFromPersistenceAsClass:(Class)_class;
- (_Bool)_t1_queue_tryResumingRecommendationsFromPersistenceWithConfigurationKey:(id)key configurationValue:(id)value;
- (void)_t1_queue_persistResultDictionaryValue:(id)value;
- (void)_t1_queue_persistRecommendations;
- (void)tnl_host:(id)tnl_host wasEncounteredForURLRequest:(id)urlrequest asRedirect:(_Bool)redirect completion:(id /* block */)completion;
- (_Bool)_t1_shouldRewrite:(id)rewrite;
- (void)_t1_queue_updateNetworkObserver:(_Bool)observer;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;
- (void)handleCompletedRequestToURL:(id)url statusCode:(long long)code error:(id)error;
- (void)_t1_queue_applyHit;
- (void)_t1_queue_clearHit;
- (void)_t1_queue_purgeHit;
- (void)_t1_queue_discardHit;
- (void)_t1_queue_invalidHit;
- (void)_t1_queue_predictionCorrectHit;
- (void)_t1_queue_predictionIncorrectHit;
- (void)_t1_queue_predictionValidationFailedHit;
- (void)pollingTask:(id)task didPollWithRecommendationsResult:(id)result error:(id)error;
- (_Bool)pollingTaskShouldBeginNewPoll:(id)poll;
- (void)validator:(id)validator didValidateTrafficMap:(id)map withRecommendationEmpty:(_Bool)empty;
- (void)validator:(id)validator didCaptureProbeMetrics:(id)metrics hostToContextDic:(id)dic;
- (void)validator:(id)validator didReportPredictionValidationEvent:(long long)event;
- (double)validator:(id)validator normalizedRequestDuration:(id)duration;

@end

#endif /* T1NetworkTrafficMappingService_h */

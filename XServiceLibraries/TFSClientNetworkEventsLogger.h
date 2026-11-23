//
#ifndef TFSClientNetworkEventsLogger_h
#define TFSClientNetworkEventsLogger_h
@import Foundation;

#include "TFSTwitterAuthenticatedScribeDelegate-Protocol.h"

@class NSObject;

@interface TFSClientNetworkEventsLogger : NSObject {
    /* instance variables */
    id <TFSTwitterAuthenticatedScribeDelegate> _scribe;
}

/* class methods */
+ (id)clientNetworkEventsCESEndpointEnabledFeatureSwitch;
+ (void)setClientNetworkEventsCESEndpointEnabledBlock:(id /* block */)block;
+ (_Bool)clientNetworkEventsCESEndpointEnabled;
+ (void)configureInvalidNetworkEventsReporter:(id)reporter;
+ (void)configureCESNetworkOperationEventHandler:(id /* block */)handler;
+ (void)configureCESNetworkRequestEventHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithScribeLogMethods:(id)methods;
- (id)versionedCommonHeader;
- (void)logNetworkTransactionMetrics:(id)metrics;
- (void)logNetworkTransactionMetrics:(id)metrics hostToContextDic:(id)dic;
- (void)logNetworkTransactionMetrics:(id)metrics mediaUploadDetails:(id)details;
- (void)_logNetworkTransactionMetrics:(id)metrics mediaUploadDetails:(id)details hostToContextDic:(id)dic;
- (void)_logDroppedClientNetworkOperationEvent;
- (void)_logClientNetworkOperationEvent:(id)event;
- (void)logNetworkOperationWithType:(long long)type status:(long long)status duration:(double)duration retryCount:(unsigned long long)count attempts:(id)attempts;
- (void)_logClientNetworkRequestMetricsForTNLResponse:(id)tnlresponse eventType:(id)type eventSource:(id)source;
- (void)logAPIRequestForTNLResponse:(id)tnlresponse eventSource:(id)source;
- (void)logAPIAttemptForTNLResponse:(id)tnlresponse eventSource:(id)source;
- (void)logAPIErrorForTNLResponse:(id)tnlresponse eventSource:(id)source;
- (void)logNetworkMonitorTLNResponse:(id)tlnresponse eventType:(id)type;
- (void)_logClientNetworkRequestForAttempt:(id)attempt eventType:(id)type eventSource:(id)source;
- (void)logAPIRequestForAttempt:(id)attempt eventSource:(id)source;
- (void)logAPIAttemptForAttempt:(id)attempt eventSource:(id)source;
- (void)logAPIErrorForAttempt:(id)attempt eventSource:(id)source;

@end

#endif /* TFSClientNetworkEventsLogger_h */

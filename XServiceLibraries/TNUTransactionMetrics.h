//
#ifndef TNUTransactionMetrics_h
#define TNUTransactionMetrics_h
@import Foundation;

#include "TFSStopwatch.h"

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TNUTransactionMetrics : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) TFSStopwatch *stopwatch;
@property (nonatomic) double duration;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSMutableArray *attemptMetrics;
@property (nonatomic) unsigned long long retryCount;
@property (readonly, nonatomic) long long operationId;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *retryPolicyId;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, nonatomic) TNUTransactionMetrics *enclosingNetworkTransactionMetrics;
@property (readonly, nonatomic) _Bool started;
@property (readonly, nonatomic) _Bool hasRequests;

/* class methods */
+ (id)transactionMetricsWithType:(long long)type httpRequestConfiguration:(id)configuration;
+ (id)transactionMetricsWithType:(long long)type completedOperation:(id)operation;

/* instance methods */
- (id)clientNetworkOperationEventWithMediaUploadDetails:(id)details hostToContextDic:(id)dic;
- (id)clientNetworkOperationEventWithCommonHeader:(id)header mediaUploadDetails:(id)details hostToContextDic:(id)dic;
- (id)_tfs_clientNetworkOperationEventWithCommonHeader:(id)header mediaUploadDetails:(id)details hostToContextDic:(id)dic;
- (id)init;
- (id)initWithType:(long long)type retryPolicyId:(id)id context:(id)context enclosingNetworkTransactionMetrics:(id)metrics;
- (_Bool)isStarted;
- (void)start;
- (void)addAttemptMetrics:(id)metrics;
- (void)endWithStatus:(long long)status;
- (void)endWithStatus:(long long)status duration:(double)duration;
- (void)endWithStatus:(long long)status context:(id)context;
- (id)synchronizedProperties;

@end

#endif /* TNUTransactionMetrics_h */

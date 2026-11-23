//
#ifndef TNUServiceHTTPConfiguration_h
#define TNUServiceHTTPConfiguration_h
@import Foundation;

#include "TNLRequestRetryPolicyProvider-Protocol.h"

@class NSObject, NSString;

@interface TNUServiceHTTPConfiguration : NSObject

@property (readonly, nonatomic) _Bool isRetryEnabled;
@property (readonly, nonatomic) unsigned long long totalPermittedRetryCount;
@property (readonly, nonatomic) unsigned long long serviceFailurePermittedRetryCount;
@property (readonly, nonatomic) double networkFailureMinRetryDelay;
@property (readonly, nonatomic) double networkFailureMaxRetryDelay;
@property (readonly, nonatomic) double totalTimeout;
@property (readonly, nonatomic) double minIdleTimeout;
@property (readonly, nonatomic) double maxIdleTimeout;
@property (readonly, nonatomic) id <TNLRequestRetryPolicyProvider> retryPolicyProvider;
@property (readonly, nonatomic) double initialIdleTimeout;
@property (readonly, nonatomic) NSString *retryPolicyId;

/* class methods */
+ (id)configurationForForegroundRetriableRequestWithTotalPermittedRetryCount:(unsigned long long)count totalTimeout:(double)timeout;
+ (id)configurationForForegroundRetriableRequestWithTotalPermittedRetryCount:(unsigned long long)count;
+ (id)configurationForForegroundRetriableRequestWithTotalTimeout:(double)timeout;
+ (id)configurationForForegroundRetriableRequest;
+ (id)configurationForBackgroundRetriableRequestWithTotalTimeout:(double)timeout;
+ (id)configurationForBackgroundRetriableRequest;

/* instance methods */
- (id)initWithIsRetryEnabled:(_Bool)enabled totalPermittedRetryCount:(unsigned long long)count serviceFailurePermittedRetryCount:(unsigned long long)count networkFailureMinRetryDelay:(double)delay networkFailureMaxRetryDelay:(double)delay totalTimeout:(double)timeout minIdleTimeout:(double)timeout maxIdleTimeout:(double)timeout;
- (id)initWithRetryDisabledAndTotalTimeout:(double)timeout;
- (id)initWithRetryDisabled;
- (id)initWithTotalPermittedRetryCount:(unsigned long long)count serviceFailurePermittedRetryCount:(unsigned long long)count networkFailureMinRetryDelay:(double)delay networkFailureMaxRetryDelay:(double)delay totalTimeout:(double)timeout minIdleTimeout:(double)timeout maxIdleTimeout:(double)timeout;
- (id)initWithServiceFailurePermittedRetryCount:(unsigned long long)count networkFailureMinRetryDelay:(double)delay networkFailureMaxRetryDelay:(double)delay totalTimeout:(double)timeout minIdleTimeout:(double)timeout maxIdleTimeout:(double)timeout;

@end

#endif /* TNUServiceHTTPConfiguration_h */

//
#ifndef TNLMutableRequestConfiguration_h
#define TNLMutableRequestConfiguration_h
@import Foundation;

#include "TNLContentEncoder-Protocol.h"
#include "TNLRequestConfiguration.h"
#include "TNLRequestRetryPolicyProvider-Protocol.h"

@class NSArray, NSHTTPCookieStorage, NSString, NSURLCache, NSURLCredentialStorage;

@interface TNLMutableRequestConfiguration : TNLRequestConfiguration

@property (nonatomic) _Bool contributeToExecutingNetworkConnectionsCount;
@property (nonatomic) _Bool skipHostSanitization;
@property (nonatomic) _Bool attestRequestPayload;
@property (nonatomic) long long executionMode;
@property (nonatomic) long long redirectPolicy;
@property (nonatomic) long long responseDataConsumptionMode;
@property (nonatomic) long long protocolOptions;
@property (nonatomic) long long connectivityOptions;
@property (nonatomic) long long responseComputeHashAlgorithm;
@property (retain, nonatomic) id <TNLRequestRetryPolicyProvider> retryPolicyProvider;
@property (retain, nonatomic) id <TNLContentEncoder> contentEncoder;
@property (copy, nonatomic) NSArray *additionalContentDecoders;
@property (nonatomic) double idleTimeout;
@property (nonatomic) double attemptTimeout;
@property (nonatomic) double operationTimeout;
@property (nonatomic) double deferrableInterval;
@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) unsigned long long networkServiceType;
@property (nonatomic) unsigned long long cookieAcceptPolicy;
@property (nonatomic) _Bool shouldSetCookies;
@property (nonatomic) _Bool allowsCellularAccess;
@property (nonatomic) _Bool discretionary;
@property (copy, nonatomic) NSString *sharedContainerIdentifier;
@property (nonatomic) _Bool shouldLaunchAppForBackgroundEvents;
@property (retain, nonatomic) NSURLCredentialStorage *URLCredentialStorage;
@property (retain, nonatomic) NSURLCache *URLCache;
@property (retain, nonatomic) NSHTTPCookieStorage *cookieStorage;
@property (nonatomic) long long multipathServiceType;
@property (nonatomic) _Bool shouldUseExtendedBackgroundIdleMode;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)configureAsLowPriority;

@end

#endif /* TNLMutableRequestConfiguration_h */

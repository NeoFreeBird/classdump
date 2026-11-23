//
#ifndef TNLRequestConfiguration_h
#define TNLRequestConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "TNLContentEncoder-Protocol.h"
#include "TNLRequestRetryPolicyProvider-Protocol.h"

@class NSArray, NSHTTPCookieStorage, NSObject, NSString, NSURLCache, NSURLCredentialStorage;

@interface TNLRequestConfiguration : NSObject <NSCopying, NSMutableCopying> {
    /* instance variables */
    struct { unsigned int executionMode:8; unsigned int redirectPolicy:8; unsigned int responseDataConsumptionMode:8; unsigned int protocolOptions:8; unsigned int connectivityOptions:8; long long responseComputeHashAlgorithm; double idleTimeout; double attemptTimeout; double operationTimeout; double deferrableInterval; unsigned int cachePolicy:8; unsigned int networkServiceType:8; unsigned int cookieAcceptPolicy:4; unsigned int multipathServiceType:4; unsigned int contributeToExecutingNetworkConnectionsCount:1; unsigned int skipHostSanitization:1; unsigned int attestRequestPayload:1; unsigned int allowsCellularAccess:1; unsigned int discretionary:1; unsigned int shouldLaunchAppForBackgroundEvents:1; unsigned int shouldSetCookies:1; unsigned int shouldUseExtendedBackgroundIdleMode:1; } _ivars;
}

@property (readonly, nonatomic) long long executionMode;
@property (readonly, nonatomic) long long redirectPolicy;
@property (readonly, nonatomic) long long responseDataConsumptionMode;
@property (readonly, nonatomic) long long protocolOptions;
@property (readonly, nonatomic) long long connectivityOptions;
@property (readonly, nonatomic) _Bool contributeToExecutingNetworkConnectionsCount;
@property (readonly, nonatomic) _Bool skipHostSanitization;
@property (readonly, nonatomic) _Bool attestRequestPayload;
@property (readonly, nonatomic) long long responseComputeHashAlgorithm;
@property (readonly, nonatomic) id <TNLRequestRetryPolicyProvider> retryPolicyProvider;
@property (readonly, nonatomic) id <TNLContentEncoder> contentEncoder;
@property (readonly, copy, nonatomic) NSArray *additionalContentDecoders;
@property (readonly, nonatomic) double idleTimeout;
@property (readonly, nonatomic) double attemptTimeout;
@property (readonly, nonatomic) double operationTimeout;
@property (readonly, nonatomic) double deferrableInterval;
@property (readonly, nonatomic) unsigned long long cachePolicy;
@property (readonly, nonatomic) unsigned long long networkServiceType;
@property (readonly, nonatomic) unsigned long long cookieAcceptPolicy;
@property (readonly, nonatomic) _Bool shouldSetCookies;
@property (readonly, nonatomic) _Bool allowsCellularAccess;
@property (readonly, nonatomic) _Bool discretionary;
@property (readonly, copy, nonatomic) NSString *sharedContainerIdentifier;
@property (readonly, nonatomic) _Bool shouldLaunchAppForBackgroundEvents;
@property (readonly, nonatomic) NSURLCredentialStorage *URLCredentialStorage;
@property (readonly, nonatomic) NSURLCache *URLCache;
@property (readonly, nonatomic) NSHTTPCookieStorage *cookieStorage;
@property (readonly, nonatomic) long long multipathServiceType;
@property (readonly, nonatomic) _Bool shouldUseExtendedBackgroundIdleMode;

/* class methods */
+ (id)configurationWithServiceHTTPConfiguration:(id)httpconfiguration;
+ (id)configurationForForegroundRetriableRequestWithTotalPermittedRetryCount:(unsigned long long)count totalTimeout:(double)timeout;
+ (id)configurationForForegroundRetriableRequestWithTotalPermittedRetryCount:(unsigned long long)count;
+ (id)configurationForForegroundRetriableRequestWithTotalTimeout:(double)timeout;
+ (id)configurationForForegroundRetriableRequest;
+ (id)configurationForBackgroundRetriableRequestWithTotalTimeout:(double)timeout;
+ (id)configurationForBackgroundRetriableRequest;
+ (id)configurationWithSessionConfiguration:(id)configuration;
+ (id)configurationFromParameters:(id)parameters executionMode:(long long)mode version:(id)version;
+ (id)defaultConfiguration;
+ (id)configurationWithExpectedAnatomy:(long long)anatomy;

/* instance methods */
- (id)updatedConfigurationWithHTTPRequestConfiguration:(id)configuration;
- (id)initWithSessionConfiguration:(id)configuration;
- (id)generateCanonicalSessionConfiguration;
- (id)generateCanonicalSessionConfigurationForBackgroundModeWithIdentifier:(id)identifier;
- (id)generateCanonicalSessionConfigurationWithExecutionMode:(long long)mode;
- (id)generateCanonicalSessionConfigurationWithExecutionMode:(long long)mode identifier:(id)identifier;
- (id)generateCanonicalSessionConfigurationWithExecutionMode:(long long)mode identifier:(id)identifier canonicalURLCache:(id)urlcache canonicalURLCredentialStorage:(id)storage canonicalCookieStorage:(id)storage;
- (void)applySettingsToSessionConfiguration:(id)configuration;
- (_Bool)isDiscretionary;
- (id)initWithConfiguration:(id)configuration;
- (id)init;
- (id)initWithIdleTimeout:(double)timeout attemptTimeout:(double)timeout operationTimeout:(double)timeout;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TNLRequestConfiguration_h */

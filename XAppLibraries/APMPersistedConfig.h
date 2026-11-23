//
#ifndef APMPersistedConfig_h
#define APMPersistedConfig_h
@import Foundation;

#include "APMConfigStore-Protocol.h"

@class NSData, NSDictionary, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface APMPersistedConfig : NSObject {
    /* instance variables */
    NSString *_name;
    id <APMConfigStore> _userDefaults;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id /* block */ _synchronizeBlock;
    struct _opaque_pthread_mutex_t { long long __sig; signed char __opaque[56]; } _lock;
}

@property (nonatomic) double lastDeleteStaleBundlesTimestamp;
@property (copy, nonatomic) NSNumber *searchAdCampaignValue;
@property (nonatomic) double lastSearchAdLookUpTimestamp;
@property (nonatomic) long long searchAdRetryCount;
@property (copy, nonatomic) NSString *appInstanceID;
@property (copy, nonatomic) NSString *appIDFromGMP;
@property (copy, nonatomic) NSString *appIDFromAdMob;
@property (copy, nonatomic) NSString *hashedResettableDeviceID;
@property (copy, nonatomic) NSString *diversionKey;
@property (copy, nonatomic) NSString *configServerLastModifiedString;
@property (copy, nonatomic) NSString *configServerETag;
@property (nonatomic) long long configGMPVersion;
@property (nonatomic) long long measurementEnabledState;
@property (nonatomic) double lastBackoffTimestamp;
@property (nonatomic) double lastSuccessfulUploadTimestamp;
@property (nonatomic) double lastFailedUploadTimestamp;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) double midnightOffset;
@property (nonatomic) double lastMonitorDataSampledTimestamp;
@property (nonatomic) long long firstOpenTimestampMilliseconds;
@property (copy, nonatomic) NSNumber *loadTimestampValue;
@property (copy, nonatomic) NSNumber *deferredDeepLinkRetrievalComplete;
@property (nonatomic) long long deferredDeepLinkRetryCount;
@property (copy, nonatomic) NSNumber *allowPersonalizedAds;
@property (copy, nonatomic) NSString *firebaseFeatureRollouts;
@property (nonatomic) _Bool shouldSetLastAdvertisingIDResetUserProperty;
@property (nonatomic) _Bool unmatchedFirstOpenWithoutIDFA;
@property (copy, nonatomic) NSNumber *previousFirstOpenCount;
@property (copy, nonatomic) NSString *previousBundledConsentSignals;
@property (copy, nonatomic) NSData *adCampaignInfoBuffer;
@property (nonatomic) double lastSessionActivityClockTime;
@property (nonatomic) long long sessionNumber;
@property (copy, nonatomic) NSNumber *sessionTimeoutValue;
@property (copy, nonatomic) NSDictionary *defaultEventParameters;
@property (nonatomic) long long lastUploadedEventTimestampMillis;
@property (nonatomic) long long SKANEvaluationEventTimeMillis;
@property (nonatomic) long long SKANEvaluationUpdateBackoffMillis;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithSuiteName:(id)name;
- (void)dealloc;
- (void)clearValues;
- (void)setOSVersion:(id)osversion;
- (_Bool)boolForKey:(id)key;
- (long long)int64ForKey:(id)key;
- (long long)int64ForKey:(id)key userDefault:(id)_default;
- (double)doubleForKey:(id)key;
- (id)stringForKey:(id)key;
- (id)dictionaryForKey:(id)key;
- (id)numberForKey:(id)key;
- (void)setBool:(_Bool)_bool forKey:(id)key;
- (void)setInt64:(long long)int64 forKey:(id)key;
- (void)setDouble:(double)_double forKey:(id)key;
- (void)setString:(id)string forKey:(id)key;
- (void)setDictionary:(id)dictionary forKey:(id)key;
- (void)setNumber:(id)number forKey:(id)key;
- (void)cancelScheduledSynchronize;
- (void)scheduleSynchronizeToDisk;
- (void)synchronizeToDisk;

@end

#endif /* APMPersistedConfig_h */

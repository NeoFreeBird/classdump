//
#ifndef APMIdentity_h
#define APMIdentity_h
@import Foundation;

#include "APMPersistedConfig.h"

@class NSDate, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface APMIdentity : NSObject {
    /* instance variables */
    NSDate *_lastAppInstanceIDUpdateTimestamp;
    NSString *_identifierForVendorString;
    APMPersistedConfig *_persistedConfig;
    NSNumber *_isIDFVCollectionEnabledNumber;
    NSString *_sessionStitchingToken;
    long long _lastSessionNumber;
    _Bool _lastIsSessionExpired;
    NSDate *_sessionStitchingTokenExpirationTime;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) NSNumber *appVersionMajor;
@property (readonly, nonatomic) NSNumber *appVersionMinor;
@property (readonly, nonatomic) NSNumber *appVersionRelease;
@property (readonly, nonatomic) NSString *appInstanceID;
@property (readonly, nonatomic) unsigned long long appleConsentStatus;
@property (readonly, nonatomic) _Bool iOS14OrAbove;
@property (readonly, nonatomic) NSString *resettableDeviceID;
@property (readonly, nonatomic) _Bool hasLimitedAdTracking;
@property (readonly, nonatomic) _Bool limitedAdTracking;
@property (readonly, nonatomic) NSString *appIDFromGMP;
@property (readonly, nonatomic) _Bool fromAppStore;
@property (readonly, nonatomic) NSString *identifierForVendor;
@property (readonly, nonatomic) long long devCertHash;
@property (copy) NSString *firebaseInstallationID;
@property (nonatomic) _Bool shouldSetLastAdvertisingIDResetUserProperty;
@property (readonly, nonatomic) NSString *diversionKey;
@property (readonly, nonatomic) NSString *ephemeralAppInstanceID;

/* class methods */
+ (id)sharedInstance;
+ (long long)appMeasurementLibraryVersion;
+ (id)numericFieldsFromAppVersionNumeric:(id)numeric;

/* instance methods */
- (id)initWithPersistedConfig:(id)config;
- (id)hashedResettableDeviceID;
- (_Bool)isFromAppStore;
- (void)updateIdentifiers;
- (void)updateIdentifiersAndWait;
- (id)randomAppInstanceID;
- (id)sessionStitchingTokenWithSessionNumber:(long long)number sessionExpired:(_Bool)expired userIDAvailable:(_Bool)idavailable;
- (void)resetSessionStitchingTokenOnWorkerQueue;
- (void)resetSessionStitchingToken;
- (void)resetEphemeralAppInstanceIDOnWorkerQueue;
- (void)resetEphemeralAppInstanceID;

@end

#endif /* APMIdentity_h */

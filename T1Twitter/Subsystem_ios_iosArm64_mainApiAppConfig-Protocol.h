//
#ifndef Subsystem_ios_iosArm64_mainApiAppConfig_Protocol_h
#define Subsystem_ios_iosArm64_mainApiAppConfig_Protocol_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainApiAppConfigBuildType-Protocol.h"

@class NSString, Subsystem_ios_iosArm64_mainApiAppStorageKeys;

@protocol Subsystem_ios_iosArm64_mainApiAppConfig <Subsystem_ios_iosArm64_mainApiAppConfigBuildType>

@required

@property (nonatomic, readonly) _Bool isEmulator;
@property (nonatomic, readonly) NSString *notificationTokenType;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainApiAppStorageKeys *storageKeys;

/* required instance methods */
- (id)getApplicationId;
- (id)getBuildName;
- (int)getBuildNumber;
- (long long)getClientAppId;
- (id)getClientName;
- (int)getDebugEnvId;
- (id)getDeviceInfo;
- (id)getFullBuildInfo;
- (id)getGitHash;
- (id)getMinVersionFeatureKey;
- (int)getReleaseEnvId;
- (id)getShortVersionName;
- (id)getSourceNameForCrashlytics;
- (id)getStorageDirectoryName;
- (id)getVersionName;
- (_Bool)isLocalBuild;
- (long long)releaseTimeMillis;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainApiAppConfig_Protocol_h */

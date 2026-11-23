//
#ifndef _TtC10ChatKotlin16ChatApiAppConfig_h
#define _TtC10ChatKotlin16ChatApiAppConfig_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainApiAppConfig-Protocol.h"

@class NSString, Subsystem_ios_iosArm64_mainApiAppStorageKeys, _TtCs12_SwiftObject;

@interface ChatKotlin.ChatApiAppConfig : Swift._SwiftObject <Subsystem_ios_iosArm64_mainApiAppConfig> // (Swift)

@property (nonatomic, readonly) _Bool isEmulator;
@property (nonatomic, readonly) NSString *notificationTokenType;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainApiAppStorageKeys *storageKeys;

/* instance methods */
- (_Bool)isAlpha;
- (_Bool)isBeta;
- (_Bool)isDebug;
- (_Bool)isDogfood;
- (_Bool)isRelease;
- (_Bool)notRelease;
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

@end

#endif /* _TtC10ChatKotlin16ChatApiAppConfig_h */

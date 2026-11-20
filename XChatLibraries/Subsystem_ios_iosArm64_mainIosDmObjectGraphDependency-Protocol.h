//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainIosDmObjectGraphDependency_Protocol_h
#define Subsystem_ios_iosArm64_mainIosDmObjectGraphDependency_Protocol_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainDarwinChallengeHandler-Protocol.h"
#include "Subsystem_ios_iosArm64_mainJuiceboxApi-Protocol.h"
#include "Subsystem_ios_iosArm64_mainLocalizedStringProvider-Protocol.h"
#include "Subsystem_ios_iosArm64_mainPremiumSubscriptionTierProvider-Protocol.h"

@class Subsystem_ios_iosArm64_mainEntityParser, Subsystem_ios_iosArm64_mainIosAppLifecycle, Subsystem_ios_iosArm64_mainUserUserIdentifier;
@protocol Subsystem_ios_iosArm64_mainAudioWaveformExtractor;

@protocol Subsystem_ios_iosArm64_mainIosDmObjectGraphDependency

@required

@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainIosAppLifecycle *appLifecycle;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainAudioWaveformExtractor> audioWaveformExtractor;
@property (nonatomic, readonly) _Bool contactsSyncNeeded;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainDarwinChallengeHandler> darwinChallengeHandler;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainEntityParser *entityParser;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainJuiceboxApi> juiceboxApi;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainLocalizedStringProvider> localizedStringProvider;
@property (nonatomic, readonly) id /* block */ minimalGraphBuilder;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainUserUserIdentifier *owner;
@property (nonatomic, readonly) id <Subsystem_ios_iosArm64_mainPremiumSubscriptionTierProvider> premiumSubscriptionTierProvider;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainIosDmObjectGraphDependency_Protocol_h */

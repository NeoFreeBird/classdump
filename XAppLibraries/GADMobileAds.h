//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMobileAds_h
#define GADMobileAds_h
@import Foundation;

#include "GADAudioVideoManager.h"
#include "GADInitializationStatus.h"
#include "GADRequestConfiguration.h"

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GADMobileAds : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _shouldInitializeMediation;
    _Bool _eventLoggerReady;
    NSMutableSet *_publicAPIUsageLogBuffer;
}

@property (readonly, copy, nonatomic) NSString *googleMobileAdsAppID;
@property (copy, nonatomic) NSString *plugin;
@property (readonly, nonatomic) struct GADVersionNumber { long long x0; long long x1; long long x2; } versionNumber;
@property (nonatomic) float applicationVolume;
@property (nonatomic) _Bool applicationMuted;
@property (readonly, nonatomic) GADAudioVideoManager *audioVideoManager;
@property (readonly, nonatomic) GADRequestConfiguration *requestConfiguration;
@property (readonly, nonatomic) GADInitializationStatus *initializationStatus;

/* class methods */
+ (void)generateSignal:(id)signal completionHandler:(id /* block */)handler;
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (_Bool)isSDKVersionAtLeastMajor:(long long)major minor:(long long)minor patch:(long long)patch;
- (id)googleMobileAdsAppIDInternal;
- (void)startWithCompletionHandler:(id /* block */)handler;
- (void)disableSDKCrashReporting;
- (void)disableMediationInitialization;
- (void)setEventLoggerReady;
- (void)logPublicAPIUsage:(id)apiusage;
- (void)flushPublicAPIUsageLogBuffer;
- (void)presentAdInspectorFromViewController:(id)controller completionHandler:(id /* block */)handler;
- (void)registerWebView:(id)view;
- (void)preloadWithConfigurations:(id)configurations delegate:(id)delegate;

@end

#endif /* GADMobileAds_h */

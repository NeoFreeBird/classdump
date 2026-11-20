//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADApplication_h
#define GADApplication_h
@import Foundation;

#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"
#include "GADObserverCollection.h"
#include "GADPerformanceMetrics.h"
#include "GADScheduler.h"

@class NSMutableData, NSNumber, NSObject, NSString;

@interface GADApplication : NSObject <GADEventContextSource> {
    /* instance variables */
    struct atomic_flag { _Atomic _Bool _Value; } _hasRunEarlyActivities;
    struct atomic_flag { _Atomic _Bool _Value; } _hasRunMainThreadEarlyActivities;
    struct atomic_flag { _Atomic _Bool _Value; } _hasRunPublisherInitiatedEarlyActivities;
    _Atomic _Bool _hasCalledPublisherInitiatedEarlyActivities;
    _Atomic _Bool _hasCalledMainThreadEarlyActivities;
    GADObserverCollection *_observers;
    GADPerformanceMetrics *_performanceMetrics;
    GADScheduler *_metricsCollectionScheduler;
    NSMutableData *_dataBuffer;
    GADScheduler *_mainThreadScheduler;
}

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *buildNumber;
@property (readonly, copy, nonatomic) NSString *mainBundleIdentifier;
@property (readonly, nonatomic) _Bool appSwitched;
@property (readonly, nonatomic) _Bool publisherlessIntegration;
@property (readonly, nonatomic) _Bool nativeAdValidatorAllowedByPublisher;
@property _Bool troubleShootingEnabled;
@property _Bool debugDeviceIsLinked;
@property (readonly, nonatomic) struct GADTestMode { _Bool x0; _Bool x1; } testMode;
@property (copy) NSString *inAppPreviewCreativeToken;
@property (readonly, nonatomic) _Bool supportsMultipleScenes;
@property (readonly, nonatomic) _Bool useSceneBasedMainWindow;
@property (readonly, nonatomic) _Bool publisherInitiatedEarlyActivitiesCalled;
@property (readonly, nonatomic) _Bool mainThreadEarlyActivitiesCalled;
@property (readonly, nonatomic) _Bool enableSSLVerification;
@property (nonatomic) long long consentFormActionIdentifier;
@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)load;
+ (_Bool)shouldResetPersistentStateWithSettings:(id)settings;
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)handleAppForegrounded;
- (void)handleAppBackgrounded;
- (void)updateMutableRootEventContext;
- (void)runBackgroundEarlyActivitiesWithCompletionHandler:(id /* block */)handler;
- (void)runEarlyActivities;
- (void)runMainThreadEarlyActivities;
- (void)runPublisherInitiatedEarlyActivities;
- (void)startPerformanceMetricsCollection;
- (void)initializePerformanceAnalysis;
- (void)link;
- (struct GADTestMode { _Bool x0; _Bool x1; })testModeWithDeviceIdentifier:(id)identifier;
- (void)setAppLevelTestMode:(_Bool)mode;
- (_Bool)enableSSLVerificationInternal;

@end

#endif /* GADApplication_h */

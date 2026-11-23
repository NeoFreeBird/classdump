//
#ifndef T1AppShutdownServicesManager_h
#define T1AppShutdownServicesManager_h
@import Foundation;

#include "T1AppServicesManagerUtils.h"
#include "T1AppServicesManaging-Protocol.h"
#include "T1Canary.h"

@class NSObject, NSString;

@interface T1AppShutdownServicesManager : NSObject <T1AppServicesManaging>

@property (retain, nonatomic) T1AppServicesManagerUtils *servicesManagerUtils;
@property (retain, nonatomic) T1Canary *canary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setUpAppServicesWithCoreServicesConfiguration:(id)configuration;
- (void)_t1_startFeatureSwitches;
- (void)_t1_updateUserLoggingConfig;
- (void)_t1_handleDeviceFeatureSwitchesDidUpdate:(id)update;
- (void)_t1_setupNetworkingServicesWithDeviceFeatureSwitches:(id)switches;
- (void)startCrashlytics;
- (void)startSentinelManagerWithDidCrashDuringPreviousExecution:(_Bool)execution;

@end

#endif /* T1AppShutdownServicesManager_h */

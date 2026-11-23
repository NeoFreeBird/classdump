//
#ifndef T1AppShutdownManager_h
#define T1AppShutdownManager_h
@import Foundation;

#include "T1AppShutdownConfiguration.h"
#include "T1UserGeneratedContentDeletionManager.h"

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface T1AppShutdownManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateDispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *defaultsDispatchQueue;
@property (nonatomic) _Bool shutdownApp;
@property (nonatomic) unsigned long long stateChange;
@property (retain, nonatomic) T1AppShutdownConfiguration *configuration;
@property (copy, nonatomic) NSString *currentAppVersion;
@property (copy, nonatomic) NSString *lastAppVersion;
@property (copy, nonatomic) id /* block */ scribeProvider;
@property (retain, nonatomic) T1UserGeneratedContentDeletionManager *UGCDeletionManager;
@property (readonly, nonatomic) _Bool shouldShutdownApp;
@property (readonly, nonatomic) unsigned long long shutdownStateChange;
@property (readonly, copy, nonatomic) NSArray *APIEndpointAllowList;

/* instance methods */
- (id)initWithScribeProvider:(id /* block */)provider;
- (id)initWithScribeProvider:(id /* block */)provider appState:(long long)state;
- (void)dealloc;
- (id)scribe;
- (void)processAppShutdown;
- (void)_t1_stateQueue_processAppShutdown;
- (void)_t1_stateQueue_processShutdownStateChange;
- (_Bool)_t1_stateQueue_pendingAppShutdownWithConfiguration:(id)configuration;
- (void)_t1_stateQueue_shutdown;
- (void)_t1_stateQueue_update;
- (void)_t1_stateQueue_resurrect;
- (void)_t1_deviceFeatureSwitchesDidUpdate;
- (void)_t1_updateShutdownFeatureSwitchesInGroupUserDefaults;
- (void)deleteUserGeneratedContent;
- (void)_t1_applicationDidEnterBackground;
- (void)_t1_applicationWillTerminate;
- (void)_t1_stateQueue_saveConfigurationInGroupUserDefaults:(id)defaults;
- (id)APIEndpointAllowListByAddingDefaultEndpoints:(id)endpoints toEndpointList:(id)list;

@end

#endif /* T1AppShutdownManager_h */

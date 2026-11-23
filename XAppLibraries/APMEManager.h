//
#ifndef APMEManager_h
#define APMEManager_h
@import Foundation;

#include "APMETaskManager.h"

@class GULMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface APMEManager : NSObject {
    /* instance variables */
    GULMutableDictionary *_activatedSnapshotsBySDKName;
    GULMutableDictionary *_pendingSnapshotsBySDKName;
    GULMutableDictionary *_launchedSnapshotsBySDKName;
    APMETaskManager *_taskManager;
    GULMutableDictionary *_registeredClientsBySDKName;
    GULMutableDictionary *_defaultFlagsBySDKName;
    NSObject<OS_dispatch_queue> *_queue;
}

/* class methods */
+ (id)sharedInstance;
+ (id)monitor;
+ (long long)version;

/* instance methods */
- (id)init;
- (id)initWithTaskManager:(id)manager;
- (id)registerSDKProperty:(id)sdkproperty defaultFlags:(id)flags;
- (id)clientForSDKName:(id)sdkname;
- (id)experimentIDs;
- (id)flagValueForFlagName:(id)name SDKName:(id)sdkname;
- (_Bool)activateSnapshotOfSDK:(id)sdk error:(id *)error;
- (long long)activatedSnapshotStatusOfSDKName:(id)sdkname;
- (void)resetToDefaultsOfSDKName:(id)sdkname;
- (void)reset;
- (void)clearAndDelete;
- (_Bool)taskManagerShouldFetchExperiments:(id)experiments;
- (void)taskManager:(id)manager didStartWithActivatedSnapshots:(id)snapshots pendingSnapshots:(id)snapshots launchedSnapshots:(id)snapshots;
- (void)taskManager:(id)manager didFinishFetchingExperimentSnapshots:(id)snapshots withErrors:(id)errors;
- (void)taskManager:(id)manager didUpsertPendingSnapshots:(id)snapshots;
- (void)dispatchAsyncOnSerialQueue:(id /* block */)queue;
- (void)dispatchSyncOnSerialQueue:(id /* block */)queue;

@end

#endif /* APMEManager_h */

//
#ifndef APMETaskManager_h
#define APMETaskManager_h
@import Foundation;

#include "APMAlarm.h"
#include "APMEDatabase.h"
#include "APMUserDefaults.h"

@class GULNetwork, NSObject, NSString;
@protocol APMETaskManagerDelegate, OS_dispatch_queue;

@interface APMETaskManager : NSObject {
    /* instance variables */
    APMAlarm *_alarm;
    GULNetwork *_network;
    APMUserDefaults *_persistedStorage;
    NSObject<OS_dispatch_queue> *_workerQueue;
    APMEDatabase *_database;
    NSString *_databasePath;
}

@property (nonatomic) _Bool hasMadeInitialFetch;
@property (nonatomic) double initializationTimestamp;
@property (weak, nonatomic) id <APMETaskManagerDelegate> delegate;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue alarm:(id)alarm network:(id)network persistedStorage:(id)storage databasePath:(id)path initTimestamp:(double)timestamp;
- (double)fetchTimeFromLastSuccessfulTimestamp:(double)timestamp lastFailedTimestamp:(double)timestamp;
- (void)scheduleFetchingExperimentsOnWorkerQueue;
- (void)postponeFetchExperiments;
- (void)fetchExperiments;
- (void)handleFetchingExperimentsResponse:(id)response data:(id)data error:(id)error;
- (void)startTaskManager;
- (void)startTaskManagerOnWorkerQueue;
- (void)fetchAllSnapshotsOnWorkerQueue;
- (void)activatePendingSnapshot:(id)snapshot timestamp:(double)timestamp;
- (void)resetToDefaultsForSDKName:(id)sdkname;
- (void)upsertPendingSnapshots:(id)snapshots;
- (void)reset;
- (void)clearAndDelete;
- (id)experimentSnapshotsFromExperimentResponse:(id)response;
- (id)errorsFromExperimentResponse:(id)response;
- (id)experimentSnapshotsFromData:(id)data;
- (void)dispatchAsyncOnWorkerQueue:(id /* block */)queue;
- (void)dispatchSyncOnWorkerQueue:(id /* block */)queue;

@end

#endif /* APMETaskManager_h */

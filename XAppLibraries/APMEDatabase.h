//
#ifndef APMEDatabase_h
#define APMEDatabase_h
@import Foundation;

#include "APMSqliteStore.h"

@class NSObject;

@interface APMEDatabase : NSObject {
    /* instance variables */
    APMSqliteStore *_sqliteStore;
}

/* instance methods */
- (id)initWithPath:(id)path;
- (_Bool)initializeDatabaseResourcesWithContext:(id)context databasePath:(id)path;
- (_Bool)ensureAllTables;
- (void)closeAndDelete;
- (void)reset;
- (_Bool)performTransaction:(id /* block */)transaction;
- (id)fetchAllActivatedSnapshots:(id *)snapshots;
- (_Bool)activateSnapshot:(id)snapshot timestamp:(double)timestamp error:(id *)error;
- (_Bool)deleteActivatedExperimentsOfSDKName:(id)sdkname error:(id *)error;
- (_Bool)deleteStaleActivatedSnapshots:(id *)snapshots;
- (id)fetchAllPendingSnapshots:(id *)snapshots;
- (_Bool)upsertPendingExperimentSnapshots:(id)snapshots error:(id *)error;
- (_Bool)deletePendingExperimentsOfSDKName:(id)sdkname error:(id *)error;
- (_Bool)activatePendingSnapshotsAutomatically:(id *)automatically;
- (id)fetchAllLaunchedSnapshots:(id *)snapshots;
- (_Bool)deleteLaunchedExperimentSDKName:(id)sdkname error:(id *)error;
- (_Bool)upsertSnapshot:(id)snapshot intoTableName:(id)name timestamp:(double)timestamp manuallyActivated:(id)activated error:(id *)error;
- (id)allDataTypesFromTableWithName:(id)name tableLimit:(long long)limit error:(id *)error;
- (_Bool)deleteExperimentsOfSDKName:(id)sdkname fromTableName:(id)name error:(id *)error;

@end

#endif /* APMEDatabase_h */

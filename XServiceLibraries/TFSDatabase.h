//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSDatabase_h
#define TFSDatabase_h
@import Foundation;

#include "TFSDatabaseAutoAnalyzer.h"
#include "TFSDatabaseIncrementalVacuumer.h"
#include "TFSDatabaseStateQueue.h"
#include "TFSDatabaseTransactionRetryer.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface TFSDatabase : NSObject

@property (readonly, nonatomic) TFSDatabaseTransactionRetryer *retryer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionCreationQueue;
@property (readonly, nonatomic) TFSDatabaseStateQueue *stateQueue;
@property (readonly, nonatomic) TFSDatabaseAutoAnalyzer *autoAnalyzer;
@property (readonly, nonatomic) TFSDatabaseIncrementalVacuumer *incrementalVacuumer;
@property (nonatomic) _Bool usesPreparedStatementCache;

/* class methods */
+ (id)statistics;

/* instance methods */
- (id)initWithPath:(id)path applicationLink:(id)link diskSyncMode:(long long)mode journalSizeLimit:(id)limit;
- (id)initWithPath:(id)path applicationLink:(id)link diskSyncMode:(long long)mode;
- (id)initWithPath:(id)path applicationLink:(id)link;
- (id)initInMemory;
- (id)initWithState:(id)state;
- (_Bool)performTransactionWithLog:(id)log block:(id /* block */)block;
- (void)enqueueWriteTransactionWithLog:(id)log block:(id /* block */)block completion:(id /* block */)completion;
- (void)enqueueIncrementalVacuumAndCheckpointWithLog:(id)log completion:(id /* block */)completion;
- (void)flush;
- (void)close;
- (_Bool)backupDatabaseToPath:(id)path log:(id)log;

@end

#endif /* TFSDatabase_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSDatabaseOnDisk_h
#define TFSDatabaseOnDisk_h
@import Foundation;

#include "TFSDatabase.h"
#include "TFSDatabaseConnection.h"
#include "TFSDatabaseStateQueue.h"
#include "TFSDatabaseUIApplicationLink.h"

@class NSNumber, NSOperationQueue, NSString;
@protocol TFSDatabaseExpiringActivityManager;

@interface TFSDatabaseOnDisk : TFSDatabase

@property (readonly, nonatomic) TFSDatabaseStateQueue *stateQueue;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) NSOperationQueue *writeOperationQueue;
@property (retain, nonatomic) TFSDatabaseUIApplicationLink *applicationLink;
@property (retain, nonatomic) id <TFSDatabaseExpiringActivityManager> expiringActivityManager;
@property (nonatomic) long long diskSyncMode;
@property (readonly, nonatomic) NSNumber *journalSizeLimit;
@property (retain, nonatomic) TFSDatabaseConnection *writeConnection;

/* class methods */
+ (id)statistics;
+ (id)_tfs_underlyingWriteQueue;

/* instance methods */
- (id)initWithPath:(id)path applicationLink:(id)link diskSyncMode:(long long)mode journalSizeLimit:(id)limit;
- (void)dealloc;
- (void)_tfs_applicationDidBecomeActive:(id)active;
- (void)_tfs_applicationWillResignActive:(id)active;
- (_Bool)performTransactionWithLog:(id)log block:(id /* block */)block;
- (void)enqueueWriteTransactionWithLog:(id)log block:(id /* block */)block completion:(id /* block */)completion;
- (void)enqueueIncrementalVacuumAndCheckpointWithLog:(id)log completion:(id /* block */)completion;
- (void)flush;
- (void)close;
- (id)_tfs_enqueuedOperationWithState:(id)state transactionBlock:(id /* block */)block;

@end

#endif /* TFSDatabaseOnDisk_h */

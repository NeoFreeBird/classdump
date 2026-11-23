//
#ifndef TFSDatabaseInMemory_h
#define TFSDatabaseInMemory_h
@import Foundation;

#include "TFSDatabase.h"
#include "TFSDatabaseConnection.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface TFSDatabaseInMemory : TFSDatabase

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue;
@property (readonly, nonatomic) TFSDatabaseConnection *connection;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (_Bool)performTransactionWithLog:(id)log block:(id /* block */)block;
- (void)enqueueWriteTransactionWithLog:(id)log block:(id /* block */)block completion:(id /* block */)completion;
- (void)enqueueIncrementalVacuumAndCheckpointWithLog:(id)log completion:(id /* block */)completion;
- (void)flush;
- (void)close;

@end

#endif /* TFSDatabaseInMemory_h */

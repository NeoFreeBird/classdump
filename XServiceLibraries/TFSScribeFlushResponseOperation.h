//
#ifndef TFSScribeFlushResponseOperation_h
#define TFSScribeFlushResponseOperation_h
@import Foundation;

#include "TFSScribeOperation.h"

@class NSArray, NSMutableSet;

@interface TFSScribeFlushResponseOperation : TFSScribeOperation

@property (readonly, nonatomic) NSMutableSet *thisFlushEventKeysAwaitingResponse;
@property (readonly, nonatomic) NSMutableSet *allFlushedEventKeysAwaitingResponse;
@property (readonly, copy, nonatomic) NSArray *eventKeysFlushedThisBatch;
@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly, copy, nonatomic) id /* block */ didFlushBatch;
@property (readonly, copy, nonatomic) id /* block */ didFlushAllBatches;
@property (readonly, nonatomic) NSArray *eventsFlushedThisBatchSoLongAsThisIsStillNecessary;
@property (readonly, nonatomic) NSArray *eventsToRetry;
@property (readonly, weak, nonatomic) id notificationObject;

/* instance methods */
- (id)initWithApplicationLink:(id)link databaseProvider:(id)provider thisFlushEventKeysAwaitingResponse:(id)response allFlushedEventKeysAwaitingResponse:(id)response eventKeysFlushedThisBatch:(id)batch completionBehavior:(unsigned long long)behavior eventsToRetry:(id)retry didFlushBatch:(id /* block */)batch didFlushAllBatches:(id /* block */)batches eventsFlushedThisBatch:(id)batch;
- (void)main;

@end

#endif /* TFSScribeFlushResponseOperation_h */

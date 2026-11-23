//
#ifndef TFSScribeFlushOperation_h
#define TFSScribeFlushOperation_h
@import Foundation;

#include "TFSScribeOperation.h"
#include "TFSScribeOutgoingEventsHandler-Protocol.h"

@class NSArray, NSMutableSet, NSOperationQueue;
@protocol TFSScribeOutgoingImpressionsHandler;

@interface TFSScribeFlushOperation : TFSScribeOperation

@property (readonly, nonatomic) NSMutableSet *allFlushedEventKeysAwaitingResponse;
@property (readonly, copy, nonatomic) NSArray *groups;
@property (readonly, nonatomic) double shelfLife;
@property (readonly, nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) id <TFSScribeOutgoingImpressionsHandler> impressionsHandler;
@property (readonly, copy, nonatomic) id /* block */ didEnqueueEvent;
@property (readonly, nonatomic) id <TFSScribeOutgoingEventsHandler> eventsHandler;
@property (readonly, weak, nonatomic) NSOperationQueue *eventsHandlerQueue;
@property (readonly, weak, nonatomic) NSOperationQueue *flushResponseQueue;
@property (readonly, copy, nonatomic) id /* block */ didFlushBatch;
@property (readonly, copy, nonatomic) id /* block */ didFlushAllBatches;
@property (readonly, weak, nonatomic) id notificationObject;

/* instance methods */
- (id)initWithApplicationLink:(id)link databaseProvider:(id)provider flushedEventKeysAwaitingResponse:(id)response groups:(id)groups shelfLife:(double)life fetchLimit:(unsigned long long)limit batchSize:(unsigned long long)size impressionsHandler:(id)handler didEnqueueEvent:(id /* block */)event eventsHandler:(id)handler eventsHandlerQueue:(id)queue flushResponseQueue:(id)queue didFlushBatch:(id /* block */)batch didFlushAllBatches:(id /* block */)batches;
- (void)main;
- (_Bool)_tfsscribe_deleteStaleImpressionsWithConnection:(id)connection groupPersistence:(id)persistence;
- (_Bool)_tfsscribe_enqueueEventsForImpressionsWithConnection:(id)connection groupPersistence:(id)persistence;
- (_Bool)_tfsscribe_updateGroupSequenceNumbersForSerializerIfNecessaryWithConnection:(id)connection groupPersistence:(id)persistence;
- (_Bool)_tfsscribe_deleteStaleEventsWithConnection:(id)connection groupPersistence:(id)persistence;
- (id)_tfsscribe_eventsToFlushWithConnection:(id)connection groupPersistence:(id)persistence;
- (void)_tfsscribe_sendRequestWithEvents:(id)events thisFlushEventKeysAwaitingResponse:(id)response;

@end

#endif /* TFSScribeFlushOperation_h */

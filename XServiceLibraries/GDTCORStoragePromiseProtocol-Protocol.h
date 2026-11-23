//
#ifndef GDTCORStoragePromiseProtocol_Protocol_h
#define GDTCORStoragePromiseProtocol_Protocol_h
@import Foundation;

#include "GDTCORStorageProtocol-Protocol.h"

@protocol GDTCORStoragePromiseProtocol <GDTCORStorageProtocol>

@required

/* required instance methods */
- (id)batchIDsForTarget:(long long)target;
- (id)removeBatchWithID:(id)id deleteEvents:(_Bool)events;
- (id)removeBatchesWithIDs:(id)ids deleteEvents:(_Bool)events;
- (id)removeAllBatchesForTarget:(long long)target deleteEvents:(_Bool)events;
- (id)fetchAndUpdateMetricsWithHandler:(id /* block */)handler;
- (id)fetchStorageMetadata;
- (id)hasEventsForTarget:(long long)target;
- (id)batchWithEventSelector:(id)selector batchExpiration:(id)expiration;

@optional

@end

#endif /* GDTCORStoragePromiseProtocol_Protocol_h */

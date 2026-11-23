//
#ifndef GDTCORStorageProtocol_Protocol_h
#define GDTCORStorageProtocol_Protocol_h
@import Foundation;

#include "GDTCORLifecycleProtocol-Protocol.h"
#include "GDTCORStorageDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@protocol GDTCORStorageProtocol <NSObject, GDTCORLifecycleProtocol>

@required

@property (weak, nonatomic) id <GDTCORStorageDelegate> delegate;

/* required instance methods */
- (void)storeEvent:(id)event onComplete:(id /* block */)complete;
- (void)hasEventsForTarget:(long long)target onComplete:(id /* block */)complete;
- (void)batchWithEventSelector:(id)selector batchExpiration:(id)expiration onComplete:(id /* block */)complete;
- (void)removeBatchWithID:(id)id deleteEvents:(_Bool)events onComplete:(id /* block */)complete;
- (void)batchIDsForTarget:(long long)target onComplete:(id /* block */)complete;
- (void)checkForExpirations;
- (void)storeLibraryData:(id)data forKey:(id)key onComplete:(id /* block */)complete;
- (void)libraryDataForKey:(id)key onFetchComplete:(id /* block */)complete setNewValue:(id /* block */)value;
- (void)removeLibraryDataForKey:(id)key onComplete:(id /* block */)complete;
- (void)storageSizeWithCallback:(id /* block */)callback;

@optional

@end

#endif /* GDTCORStorageProtocol_Protocol_h */

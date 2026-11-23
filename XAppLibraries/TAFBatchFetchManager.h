//
#ifndef TAFBatchFetchManager_h
#define TAFBatchFetchManager_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet, NSObject;

@interface TAFBatchFetchManager : NSObject

@property (readonly, nonatomic) NSMutableSet *keysForPendingItems;
@property (readonly, nonatomic) NSMutableSet *keysForFetchFailedItems;
@property (readonly, nonatomic) NSMutableDictionary *itemMap;

/* instance methods */
- (id)init;
- (void)removeAllItems;
- (void)fetchItemsForKeys:(id)keys maxCount:(unsigned long long)count fetchBlock:(id /* block */)block;
- (id)itemForKey:(id)key;
- (_Bool)isItemWithKeyPending:(id)pending;
- (_Bool)isFetchFailedForKey:(id)key;
- (_Bool)isFetchNeededForKey:(id)key;
- (void)removeItemForKey:(id)key;
- (void)_tfn_addItemsToItemMap:(id)map;
- (void)_tfn_performFetchBlock:(id /* block */)block withKeys:(id)keys;
- (void)_tfn_didFetchItems:(id)items forKeys:(id)keys error:(id)error;
- (void)_tfn_addPendingItemsWithKeys:(id)keys;
- (void)_tfn_removePendingItemsWithKeys:(id)keys;
- (void)_tfn_addFailedRequestsWithKeys:(id)keys;
- (void)_tfn_removeFailedRequestsWithKeys:(id)keys;

@end

#endif /* TAFBatchFetchManager_h */

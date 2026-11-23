//
#ifndef UICollectionViewDataSourcePrefetching_Protocol_h
#define UICollectionViewDataSourcePrefetching_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UICollectionViewDataSourcePrefetching <NSObject>

@required

/* required instance methods */
- (void)collectionView:(id)view prefetchItemsAtIndexPaths:(id)paths;
- (void)collectionView:(id)view prefetchItemsAtIndexPaths:(id)paths;

@optional

/* optional instance methods */
- (void)collectionView:(id)view cancelPrefetchingForItemsAtIndexPaths:(id)paths;
- (void)collectionView:(id)view cancelPrefetchingForItemsAtIndexPaths:(id)paths;

@end

#endif /* UICollectionViewDataSourcePrefetching_Protocol_h */

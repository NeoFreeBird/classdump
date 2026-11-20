//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

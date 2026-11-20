//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UICollectionViewDataSource_Protocol_h
#define UICollectionViewDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UICollectionViewDataSource <NSObject>

@required

/* required instance methods */
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;

@optional

/* optional instance methods */
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (_Bool)collectionView:(id)view canMoveItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view canMoveItemAtIndexPath:(id)path;
- (void)collectionView:(id)view moveItemAtIndexPath:(id)path toIndexPath:(id)path;
- (void)collectionView:(id)view moveItemAtIndexPath:(id)path toIndexPath:(id)path;
- (id)indexTitlesForCollectionView:(id)view;
- (id)indexTitlesForCollectionView:(id)view;
- (id)collectionView:(id)view indexPathForIndexTitle:(id)title atIndex:(long long)index;
- (id)collectionView:(id)view indexPathForIndexTitle:(id)title atIndex:(long long)index;

@end

#endif /* UICollectionViewDataSource_Protocol_h */

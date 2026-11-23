//
#ifndef UICollectionViewDelegateFlowLayout_Protocol_h
#define UICollectionViewDelegateFlowLayout_Protocol_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"

@protocol UICollectionViewDelegateFlowLayout <UICollectionViewDelegate>

@required

@optional

/* optional instance methods */
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(long long)index;
- (double)collectionView:(id)view layout:(id)layout minimumLineSpacingForSectionAtIndex:(long long)index;
- (double)collectionView:(id)view layout:(id)layout minimumInteritemSpacingForSectionAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout referenceSizeForHeaderInSection:(long long)section;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout referenceSizeForFooterInSection:(long long)section;

@end

#endif /* UICollectionViewDelegateFlowLayout_Protocol_h */

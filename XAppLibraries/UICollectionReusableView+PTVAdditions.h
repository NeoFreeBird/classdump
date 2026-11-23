//
#ifndef UICollectionReusableView_PTVAdditions_h
#define UICollectionReusableView_PTVAdditions_h
@import Foundation;

@interface UICollectionReusableView (PTVAdditions)

/* class methods */
+ (id)ptv_dequeueReusableSupplementaryViewOfKind:(id)kind forIndexPath:(id)path inCollectionView:(id)view;

@end

#endif /* UICollectionReusableView_PTVAdditions_h */

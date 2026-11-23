//
#ifndef UICollectionViewCell_PTVAdditions_h
#define UICollectionViewCell_PTVAdditions_h
@import Foundation;

@interface UICollectionViewCell (PTVAdditions)

/* class methods */
+ (id)ptv_dequeueReusableCellForRowAtIndexPath:(id)path inCollectionView:(id)view;

@end

#endif /* UICollectionViewCell_PTVAdditions_h */

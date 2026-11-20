//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UICollectionReusableView_PTVAdditions_h
#define UICollectionReusableView_PTVAdditions_h
@import Foundation;

@interface UICollectionReusableView (PTVAdditions)

/* class methods */
+ (id)ptv_dequeueReusableSupplementaryViewOfKind:(id)kind forIndexPath:(id)path inCollectionView:(id)view;

@end

#endif /* UICollectionReusableView_PTVAdditions_h */

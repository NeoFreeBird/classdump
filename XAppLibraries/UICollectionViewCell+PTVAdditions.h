//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UICollectionViewCell_PTVAdditions_h
#define UICollectionViewCell_PTVAdditions_h
@import Foundation;

@interface UICollectionViewCell (PTVAdditions)

/* class methods */
+ (id)ptv_dequeueReusableCellForRowAtIndexPath:(id)path inCollectionView:(id)view;

@end

#endif /* UICollectionViewCell_PTVAdditions_h */

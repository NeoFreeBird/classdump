//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UICollectionView_PTVAdditions_h
#define UICollectionView_PTVAdditions_h
@import Foundation;

@interface UICollectionView (PTVAdditions)

/* instance methods */
- (void)ptv_registerCellClasses:(id)classes;
- (void)ptv_registerClass:(Class)_class forSupplementaryViewOfKind:(id)kind;

@end

#endif /* UICollectionView_PTVAdditions_h */

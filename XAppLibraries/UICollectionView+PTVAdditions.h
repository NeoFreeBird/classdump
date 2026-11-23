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

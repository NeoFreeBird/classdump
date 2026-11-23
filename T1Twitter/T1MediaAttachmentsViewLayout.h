//
#ifndef T1MediaAttachmentsViewLayout_h
#define T1MediaAttachmentsViewLayout_h
@import Foundation;

@class NSArray, TFSObjectCache, UICollectionViewFlowLayout;

@interface T1MediaAttachmentsViewLayout : UICollectionViewFlowLayout

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } oldBounds;
@property (retain, nonatomic) NSArray *reloadingItems;
@property (retain, nonatomic) NSArray *insertingItems;
@property (retain, nonatomic) NSArray *deletingItems;
@property (retain, nonatomic) TFSObjectCache *attributesCache;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } cellMarginInsets;

/* instance methods */
- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)_t1_alignLayoutAttributesForItemToTop:(id)top;
- (_Bool)_t1_isInsertingForIndexPath:(id)path;
- (_Bool)_t1_isDeletingForIndexPath:(id)path;
- (_Bool)_t1_isReloadingForIndexPath:(id)path;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForCollectionViewUpdates:(id)updates;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)path;
- (void)finalizeCollectionViewUpdates;
- (void)invalidateLayout;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;

@end

#endif /* T1MediaAttachmentsViewLayout_h */

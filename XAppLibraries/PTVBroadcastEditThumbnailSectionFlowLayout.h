//
#ifndef PTVBroadcastEditThumbnailSectionFlowLayout_h
#define PTVBroadcastEditThumbnailSectionFlowLayout_h
@import Foundation;

@class UICollectionViewFlowLayout;

@interface PTVBroadcastEditThumbnailSectionFlowLayout : UICollectionViewFlowLayout

/* class methods */
+ (struct CGSize { double x0; double x1; })defaultFocusedThumbnailSize;
+ (double)focusedToUnfocusedThumbnailSizeRatio;
+ (double)thumbnailSpacing;

/* instance methods */
- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset withScrollingVelocity:(struct CGPoint { double x0; double x1; })velocity;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;

@end

#endif /* PTVBroadcastEditThumbnailSectionFlowLayout_h */

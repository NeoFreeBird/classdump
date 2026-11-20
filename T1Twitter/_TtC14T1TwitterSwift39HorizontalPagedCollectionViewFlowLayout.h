//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift39HorizontalPagedCollectionViewFlowLayout_h
#define _TtC14T1TwitterSwift39HorizontalPagedCollectionViewFlowLayout_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.HorizontalPagedCollectionViewLayoutDelegate ?, _$s10TFNUISwift34HorizontalRowsCollectionViewLayoutCN, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSi;

@interface T1TwitterSwift.HorizontalPagedCollectionViewFlowLayout : type metadata for TFNUISwift.HorizontalRowsCollectionViewLayout { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat ? itemWidth;
    T1TwitterSwift.HorizontalPagedCollectionViewLayoutDelegate ? pagedDelegate;
    Swift.Int backwardsScrollPageLimit;
    nominal type descriptor for CoreGraphics.CGFloat previousHeight;
    Swift.Bool isInvalid;
}

/* instance methods */
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset withScrollingVelocity:(struct CGPoint { double x0; double x1; })velocity;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)invalidateLayout;
- (id)init;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift39HorizontalPagedCollectionViewFlowLayout_h */

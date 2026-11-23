//
#ifndef _TtC10JetfuelSDK24GridCollectionViewLayout_h
#define _TtC10JetfuelSDK24GridCollectionViewLayout_h
@import Foundation;

@class Swift.Bool, UICollectionViewLayout, _$s12CoreGraphics7CGFloatVMn, _$sSa -> JetfuelSDK.GridRowModel, _$sSa -> _$s12CoreGraphics7CGFloatVMn, _$sSaySo32UICollectionViewLayoutAttributesCG, _$sSi, __C.CGSize;

@interface JetfuelSDK.GridCollectionViewLayout : UICollectionViewLayout { // (Swift)
    /* instance variables */
    [__C.UICollectionViewLayoutAttributes] cachedAttributes;
    __C.CGSize contentSize;
    Swift.Array -> JetfuelSDK.GridRowModel rows;
    Swift.Array -> nominal type descriptor for CoreGraphics.CGFloat columnWidths;
    Swift.Int frozenCols;
    Swift.Bool hasFrozenCols;
    nominal type descriptor for CoreGraphics.CGFloat gapH;
    nominal type descriptor for CoreGraphics.CGFloat gapV;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

/* instance methods */
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)init;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10JetfuelSDK24GridCollectionViewLayout_h */

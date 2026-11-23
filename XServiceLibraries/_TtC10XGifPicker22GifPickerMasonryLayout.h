//
#ifndef _TtC10XGifPicker22GifPickerMasonryLayout_h
#define _TtC10XGifPicker22GifPickerMasonryLayout_h
@import Foundation;

@class UICollectionViewLayout, XGifPicker.GifPickerMasonryLayoutConfiguration, _$s12CoreGraphics7CGFloatVMn, _$sSa -> _$s12CoreGraphics7CGFloatVMn, _$sSaySo32UICollectionViewLayoutAttributesCG, _$sSo32UICollectionViewLayoutAttributesCSg;

@interface XGifPicker.GifPickerMasonryLayout : UICollectionViewLayout { // (Swift)
    /* instance variables */
    Swift.Array -> nominal type descriptor for CoreGraphics.CGFloat aspectRatios;
    nominal type descriptor for CoreGraphics.CGFloat headerHeight;
    [__C.UICollectionViewLayoutAttributes] cachedAttributes;
    __C.UICollectionViewLayoutAttributes? headerAttributes;
    XGifPicker.GifPickerMasonryLayoutConfiguration configuration;
    nominal type descriptor for CoreGraphics.CGFloat contentHeight;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)init;

@end

#endif /* _TtC10XGifPicker22GifPickerMasonryLayout_h */

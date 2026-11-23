//
#ifndef _TtC10TFNUISwift34HorizontalRowsCollectionViewLayout_h
#define _TtC10TFNUISwift34HorizontalRowsCollectionViewLayout_h
@import Foundation;

@class TFNUISwift.HorizontalRowsCollectionViewLayoutDelegate ?, UICollectionViewLayout, _$s12CoreGraphics7CGFloatVMn, _$sSD -> _$s10Foundation9IndexPathVMn _$sSo32UICollectionViewLayoutAttributesCGSg, _$sSi, __C.CGSize ?;

@interface TFNUISwift.HorizontalRowsCollectionViewLayout : UICollectionViewLayout { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat itemSpacing;
    Swift.Int numberOfRows;
    TFNUISwift.HorizontalRowsCollectionViewLayoutDelegate ? delegate;
    Swift.Dictionary -> nominal type descriptor for Foundation.IndexPath _$sSo32UICollectionViewLayoutAttributesCGSg attributes;
    __C.CGSize ? contentSize;
}

@property (nonatomic, readonly) long long developmentLayoutDirection;
@property (nonatomic, readonly) _Bool flipsHorizontallyInOppositeLayoutDirection;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

/* instance methods */
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (void)invalidateLayout;
- (id)init;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10TFNUISwift34HorizontalRowsCollectionViewLayout_h */

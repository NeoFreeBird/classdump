//
#ifndef _TtC10TFNUISwift27LegacySegmentedTabBarLayout_h
#define _TtC10TFNUISwift27LegacySegmentedTabBarLayout_h
@import Foundation;

@class TFNUISwift.LegacySegmentedTabBarStyle, TFNUISwift.LegacyTabDescriptor _$sSicSg, UICollectionViewLayout, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSa -> _$s12CoreGraphics7CGFloatVMn ?, _$sSaySo32UICollectionViewLayoutAttributesCG, _$sSi, _$sSiSg;

@interface TFNUISwift.LegacySegmentedTabBarLayout : UICollectionViewLayout { // (Swift)
    /* instance variables */
    TFNUISwift.LegacyTabDescriptor _$sSicSg tabDescriptorProvider;
    Swift.Int tabCount;
    Swift.Int selectedIndex;
    nominal type descriptor for CoreGraphics.CGFloat ? fractionalSelectedIndex;
    TFNUISwift.LegacySegmentedTabBarStyle style;
    nominal type descriptor for CoreGraphics.CGFloat trailingAccessoryWidth;
    Swift.Int? animationSourceIndex;
    Swift.Int? animationDestinationIndex;
    [__C.UICollectionViewLayoutAttributes] cachedAttributes;
    nominal type descriptor for CoreGraphics.CGFloat cachedContentWidth;
    Swift.Array -> nominal type descriptor for CoreGraphics.CGFloat ? cachedSelectedWidths;
    Swift.Array -> nominal type descriptor for CoreGraphics.CGFloat ? cachedDeselectedWidths;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;

@end

#endif /* _TtC10TFNUISwift27LegacySegmentedTabBarLayout_h */

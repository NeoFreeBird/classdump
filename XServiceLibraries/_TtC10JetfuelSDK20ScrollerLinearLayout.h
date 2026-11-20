//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK20ScrollerLinearLayout_h
#define _TtC10JetfuelSDK20ScrollerLinearLayout_h
@import Foundation;

@class JetfuelSDK.ScrollerLinearLayout.Axis, JetfuelSDK.ScrollerProps.CrossAlignment, UICollectionViewLayout, _$s12CoreGraphics7CGFloatVMn, _$sSaySo32UICollectionViewLayoutAttributesCG, __C.CGSize, __C.CGSize _$s10Foundation9IndexPathVMn _$scSg;

@interface JetfuelSDK.ScrollerLinearLayout : UICollectionViewLayout { // (Swift)
    /* instance variables */
    JetfuelSDK.ScrollerLinearLayout.Axis axis;
    nominal type descriptor for CoreGraphics.CGFloat gap;
    __C.CGSize nominal type descriptor for Foundation.IndexPath _$scSg itemSizeProvider;
    JetfuelSDK.ScrollerProps.CrossAlignment crossAlignment;
    [__C.UICollectionViewLayoutAttributes] cachedAttributes;
    __C.CGSize contentSize;
}

@property (nonatomic, readonly) _Bool flipsHorizontallyInOppositeLayoutDirection;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

/* class methods */
+ (Class)layoutAttributesClass;
+ (Class)invalidationContextClass;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)init;

@end

#endif /* _TtC10JetfuelSDK20ScrollerLinearLayout_h */

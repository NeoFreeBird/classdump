//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat31AVChatParticipantGridFlowLayout_h
#define _TtC6AVChat31AVChatParticipantGridFlowLayout_h
@import Foundation;

@class UICollectionViewLayout, _$s12CoreGraphics7CGFloatVMn, _$sSaySo32UICollectionViewLayoutAttributesCG, _$sSi, __C.CGRect;

@interface AVChat.AVChatParticipantGridFlowLayout : UICollectionViewLayout { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat minimumInteritemSpacing;
    nominal type descriptor for CoreGraphics.CGFloat minimumLineSpacing;
    Swift.Int numberOfPages;
    __C.CGRect _collectionViewBounds;
    [__C.UICollectionViewLayoutAttributes] _cachedAttributes;
    Swift.Int _itemsOnPage;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

/* class methods */
+ (Class)layoutAttributesClass;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)init;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;

@end

#endif /* _TtC6AVChat31AVChatParticipantGridFlowLayout_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer21ComposerStackedLayout_h
#define _TtC19ChatMessageComposer21ComposerStackedLayout_h
@import Foundation;

@class ChatMessageComposer.ComposerStackedLayout.Alignment, UICollectionViewLayout, _$sSD -> _$s10Foundation9IndexPathVMn _$sSo32UICollectionViewLayoutAttributesC, __C.CGSize;

@interface ChatMessageComposer.ComposerStackedLayout : UICollectionViewLayout { // (Swift)
    /* instance variables */
    ChatMessageComposer.ComposerStackedLayout.Alignment alignment;
    __C.CGSize itemSize;
    Swift.Dictionary -> nominal type descriptor for Foundation.IndexPath __C.UICollectionViewLayoutAttributes cachedAttributes;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;
@property (nonatomic, readonly) _Bool flipsHorizontallyInOppositeLayoutDirection;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)init;

@end

#endif /* _TtC19ChatMessageComposer21ComposerStackedLayout_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TimelinesCarouselCollectionViewLayout_h
#define T1TimelinesCarouselCollectionViewLayout_h
@import Foundation;

#include "T1TimelinesCarouselCollectionViewItemSizeProvider-Protocol.h"
#include "T1TimelinesCarouselCollectionViewLayoutMetricsProvider-Protocol.h"
#include "T1TimelinesLayoutMetricsSource-Protocol.h"

@class NSMutableDictionary, NSString, TFNLayoutMetrics, UICollectionViewLayout;

@interface T1TimelinesCarouselCollectionViewLayout : UICollectionViewLayout <T1TimelinesLayoutMetricsSource> {
    /* instance variables */
    TFNLayoutMetrics *_layoutMetricsForContentEdgeInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentEdgeInsetsForTransition;
    double _leadingBleed;
    NSMutableDictionary *_layoutAttributesByIndexPath;
    struct CGSize { double width; double height; } _collectionViewContentSize;
    id <T1TimelinesCarouselCollectionViewItemSizeProvider> _retainedItemSizeProvider;
}

@property (nonatomic) struct CGSize { double x0; double x1; } itemSize;
@property (nonatomic) _Bool includesTopInset;
@property (nonatomic) _Bool includesBottomInset;
@property (nonatomic) double minimumLineSpacing;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } horizontalBleedInsets;
@property (nonatomic) _Bool disableSnapping;
@property (weak, nonatomic) id <T1TimelinesCarouselCollectionViewLayoutMetricsProvider> layoutMetricsProvider;
@property (readonly, weak, nonatomic) id <T1TimelinesCarouselCollectionViewItemSizeProvider> itemSizeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setItemSizeProvider:(id)provider retain:(_Bool)retain;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)context;
- (void)invalidateLayout;
- (void)prepareLayout;
- (void)_t1_invalidateItemAttributes;
- (void)_t1_updateItemAttributesIfNeeded;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset withScrollingVelocity:(struct CGPoint { double x0; double x1; })velocity;
- (double)focusContentOffset;
- (double)contentOffsetForCellAtIndexPath:(id)path;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)layoutMetricsForEnvironment:(id)environment layoutMetrics:(id)metrics;
- (id)_t1_itemLayoutMetricsForBaseLayoutMetrics:(id)metrics;
- (id)layoutMetricsForEnvironment:(id)environment layoutMetrics:(id)metrics forItemAtIndexPath:(id)path;
- (_Bool)_t1_updateItemHeightIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_absoluteRectForItemAtIndexPath:(id)path;
- (double)_t1_leadingBleed;
- (id)_t1_providedLayoutMetrics;
- (double)_t1_contentOffsetOfLastCell;

@end

#endif /* T1TimelinesCarouselCollectionViewLayout_h */

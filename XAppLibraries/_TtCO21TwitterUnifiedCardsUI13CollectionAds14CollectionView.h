//
#ifndef _TtCO21TwitterUnifiedCardsUI13CollectionAds14CollectionView_h
#define _TtCO21TwitterUnifiedCardsUI13CollectionAds14CollectionView_h
@import Foundation;

#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class Swift.Bool, TFNLayoutableView, TwitterUnifiedCardsUI.CollectionAdsCollectionViewDataSource ?, TwitterUnifiedCardsUI.CollectionAdsCollectionViewDelegate ?, _$s12CoreGraphics7CGFloatVMn, _$sSS, _$sSaySo6UIViewCSgGSg, _$sSo16UICollectionViewC, __C.CGSize;

@interface TwitterUnifiedCardsUI.CollectionAds.CollectionView : TFNLayoutableView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> { // (Swift)
    /* instance variables */
    __C.CGSize itemSize;
    nominal type descriptor for CoreGraphics.CGFloat itemSpacing;
    Swift.String collectionViewReusableItemIdentifier;
    __C.UICollectionView collectionView;
    Swift.String uniqueID;
    TwitterUnifiedCardsUI.CollectionAdsCollectionViewDataSource ? dataSource;
    TwitterUnifiedCardsUI.CollectionAdsCollectionViewDelegate ? delegate;
    Swift.Bool allowsSelection;
    [__C.UIView?]? $__lazy_storage_$_cachedComponentViews;
}

/* instance methods */
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (double)collectionView:(id)view layout:(id)layout minimumLineSpacingForSectionAtIndex:(long long)index;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)handleIndexUpdate:(id)update;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCO21TwitterUnifiedCardsUI13CollectionAds14CollectionView_h */

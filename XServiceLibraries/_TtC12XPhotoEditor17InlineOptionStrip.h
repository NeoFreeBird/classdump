//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor17InlineOptionStrip_h
#define _TtC12XPhotoEditor17InlineOptionStrip_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"

@class UIView, XDesignSystem.Blur, XPhotoEditor.InlineOptionStripConfiguration, XPhotoEditor.InlineOptionStripDataSource ?, _$s5UIKit34UICollectionViewDiffableDataSourceCMn XPhotoEditor.InlineOptionStrip.StripSection XPhotoEditor.InlineOptionStrip.StripItem ?, _$sSiSg, _$sSo15CAGradientLayerC, _$sSo16UICollectionViewCSg, _$sSo6UIViewCSg;

@interface XPhotoEditor.InlineOptionStrip : UIView <UICollectionViewDelegate> { // (Swift)
    /* instance variables */
    XPhotoEditor.InlineOptionStripDataSource ? dataSource;
    Swift.Int? selectedIndex;
    __C.UICollectionView? collectionView;
    XPhotoEditor.InlineOptionStripConfiguration configuration;
    nominal type descriptor for UIKit.UICollectionViewDiffableDataSource XPhotoEditor.InlineOptionStrip.StripSection XPhotoEditor.InlineOptionStrip.StripItem ? diffableDataSource;
    __C.UIView? trailingAccessoryView;
    XDesignSystem.Blur blurView;
    __C.CAGradientLayer edgeFadeMaskLayer;
}

/* instance methods */
- (void)keyboardStateChanged;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor17InlineOptionStrip_h */

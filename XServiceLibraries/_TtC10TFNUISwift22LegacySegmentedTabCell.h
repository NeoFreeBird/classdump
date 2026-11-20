//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift22LegacySegmentedTabCell_h
#define _TtC10TFNUISwift22LegacySegmentedTabCell_h
@import Foundation;

@class Swift.Bool, TFNUISwift.LegacySegmentedLiveIndicatorView ?, TFNUISwift.LegacySegmentedTabBarStyle ?, TFNUISwift.LegacyTabDescriptor ?, UICollectionViewCell, _$s12CoreGraphics7CGFloatVMn, _$sSa -> TFNUISwift.LegacySegmentedSlotTransition, _$sSa -> TFNUISwift.LegacySegmentedTabCell.ActiveSlot, _$sSaySo11UIImageViewCG, _$sSaySo22TIPImageFetchOperationCG, _$sSi, _$sSo7UILabelCSg;

@interface TFNUISwift.LegacySegmentedTabCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.UILabel? $__lazy_storage_$_labelView;
    [__C.UIImageView] iconViews;
    TFNUISwift.LegacySegmentedLiveIndicatorView ? liveIndicatorView;
    [__C.TIPImageFetchOperation] imageFetchOperations;
    Swift.Bool isTabSelected;
    TFNUISwift.LegacyTabDescriptor ? currentDescriptor;
    TFNUISwift.LegacySegmentedTabBarStyle ? currentStyle;
    Swift.Array -> TFNUISwift.LegacySegmentedTabCell.ActiveSlot activeSlots;
    nominal type descriptor for CoreGraphics.CGFloat currentProgress;
    Swift.Array -> TFNUISwift.LegacySegmentedSlotTransition slotTransitions;
    Swift.Int nextIconViewIndex;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

#endif /* _TtC10TFNUISwift22LegacySegmentedTabCell_h */

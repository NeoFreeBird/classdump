//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift31LegacySegmentedHighlightBarView_h
#define _TtC10TFNUISwift31LegacySegmentedHighlightBarView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn _$sSicSg, _$sSi, _$sSo12UIScrollViewCSgXw, _$sSo16UICollectionViewCSgXw, _$sSo18NSLayoutConstraintCSg, _$sSo7UIColorC;

@interface TFNUISwift.LegacySegmentedHighlightBarView : UIView { // (Swift)
    /* instance variables */
    __C.UIColor color;
    nominal type descriptor for CoreGraphics.CGFloat barHeight;
    nominal type descriptor for CoreGraphics.CGFloat _$sSicSg contentWidthProvider;
    weak __C.UICollectionView? referenceCollectionView;
    weak __C.UIScrollView? pagingScrollView;
    __C.NSLayoutConstraint? leftConstraint;
    __C.NSLayoutConstraint? widthConstraint;
    __C.NSLayoutConstraint? heightConstraintStored;
    Swift.Int currentSelectedIndex;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10TFNUISwift31LegacySegmentedHighlightBarView_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ShareSheet24ShareTrayActionStripView_h
#define _TtC10ShareSheet24ShareTrayActionStripView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class ShareSheet.ActionStripScrollView, ShareSheet.ShareSheetActionItem _$scSg ->, ShareSheet.ShareTrayActionStripView.EdgeFade ?, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> ShareSheet.ShareSheetActionItem, _$sSa -> _$s10Foundation21NSKeyValueObservationCMn, _$sSi, _$sSo11UIStackViewC, _$sSo15CAGradientLayerC, _$sSo18NSLayoutConstraintCSg, _$sySicSg, _$syycSg;

@interface ShareSheet.ShareTrayActionStripView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    ShareSheet.ShareSheetActionItem _$scSg -> didTapAction;
    ((Swift.Int) -> ())? didRevealTiles;
    (() -> ())? didBeginUserScroll;
    ShareSheet.ActionStripScrollView scrollView;
    __C.UIStackView stackView;
    __C.CAGradientLayer maskGradientLayer;
    __C.NSLayoutConstraint? $__lazy_storage_$_stackLeadingConstraint;
    __C.NSLayoutConstraint? $__lazy_storage_$_stackTrailingConstraint;
    Swift.Array -> nominal type descriptor for Foundation.NSKeyValueObservation observations;
    Swift.Array -> ShareSheet.ShareSheetActionItem configuredActions;
    Swift.Int maxRevealedTileIndex;
    Swift.Bool needsLeadingEdgeReset;
    nominal type descriptor for CoreGraphics.CGFloat resolvedItemWidth;
    ShareSheet.ShareTrayActionStripView.EdgeFade ? appliedEdgeFade;
    Swift.Bool raisesCircles;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)scrollViewWillBeginDragging:(id)dragging;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;

@end

#endif /* _TtC10ShareSheet24ShareTrayActionStripView_h */

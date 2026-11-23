//
#ifndef _TtC7XSports20SegmentedControlView_h
#define _TtC7XSports20SegmentedControlView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$sSa -> XSports.SegmentControl, _$sSaySSG, _$sSaySo7UILabelCG, _$sSi, _$sSo12CAShapeLayerC, _$sSo6UIViewC, _$sySicSg;

@interface XSports.SegmentedControlView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    ((Swift.Int) -> ())? onSelect;
    [Swift.String] titles;
    nominal type descriptor for CoreGraphics.CGFloat horizontalMargin;
    Swift.Int activeIndex;
    Swift.Bool isSelectionAnimating;
    __C.UIView containerView;
    __C.UIView selectionView;
    Swift.Array -> XSports.SegmentControl segmentControls;
    __C.UIView selectedTitleContainer;
    [__C.UILabel] selectedTitleLabels;
    __C.CAShapeLayer selectionTextMask;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)segmentTapped:(id)tapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports20SegmentedControlView_h */

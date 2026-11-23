//
#ifndef _TtC10XElections25ElectionsSegmentedControl_h
#define _TtC10XElections25ElectionsSegmentedControl_h
@import Foundation;

@class Swift.Bool, UIView, _$sSa -> XElections.ElectionsSegmentControl, _$sSaySo7UILabelCG, _$sSi, _$sSo12CAShapeLayerC, _$sSo6UIViewC, _$sySicSg;

@interface XElections.ElectionsSegmentedControl : UIView { // (Swift)
    /* instance variables */
    ((Swift.Int) -> ())? onSelect;
    Swift.Int activeIndex;
    Swift.Bool isSelectionAnimating;
    __C.UIView containerView;
    __C.UIView selectionView;
    Swift.Array -> XElections.ElectionsSegmentControl segmentControls;
    __C.UIView selectedTitleContainer;
    [__C.UILabel] selectedTitleLabels;
    __C.CAShapeLayer selectionTextMask;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)segmentTapped:(id)tapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10XElections25ElectionsSegmentedControl_h */

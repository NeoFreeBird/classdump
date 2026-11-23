//
#ifndef _TtC10XElections22ElectionsSeatChartView_h
#define _TtC10XElections22ElectionsSeatChartView_h
@import Foundation;

@class UIView, XElections.ElectionsChamberSummary ?, _$sSD -> XElections.ElectionsSeatStyle _$sSo12CAShapeLayerC, _$sSaySo7UILabelCG, _$sSo22UITapGestureRecognizerCSg, _$sySScSg;

@interface XElections.ElectionsSeatChartView : UIView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onSelectRace;
    XElections.ElectionsChamberSummary ? summary;
    Swift.Dictionary -> XElections.ElectionsSeatStyle __C.CAShapeLayer layersByStyle;
    [__C.UILabel] seatLabels;
    __C.UITapGestureRecognizer? $__lazy_storage_$_tapRecognizer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didTap:(id)tap;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC10XElections22ElectionsSeatChartView_h */

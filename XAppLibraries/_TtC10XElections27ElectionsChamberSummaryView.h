//
#ifndef _TtC10XElections27ElectionsChamberSummaryView_h
#define _TtC10XElections27ElectionsChamberSummaryView_h
@import Foundation;

@class Swift.Bool, UIView, XElections.ElectionsChamberSummary ?, XElections.ElectionsDecisionDeskView, XElections.ElectionsSeatBarView, XElections.ElectionsSeatChartView, _$sSa -> XElections.ElectionsChamberSummaryView.LegendRow, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo8UIButtonC, _$syycSg;

@interface XElections.ElectionsChamberSummaryView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel democraticSeatsLabel;
    __C.UILabel republicanSeatsLabel;
    __C.UILabel captionLabel;
    __C.UIView chartBand;
    XElections.ElectionsSeatChartView chartView;
    XElections.ElectionsSeatBarView barView;
    __C.UIView majorityMarker;
    __C.UIImageView infoIconView;
    __C.UIButton controlButton;
    __C.UIView legendBand;
    Swift.Array -> XElections.ElectionsChamberSummaryView.LegendRow legendRows;
    __C.UILabel chanceLabel;
    __C.UILabel democraticChanceLabel;
    __C.UILabel republicanChanceLabel;
    XElections.ElectionsDecisionDeskView decisionDeskView;
    XElections.ElectionsChamberSummary ? summary;
    Swift.Bool isLegendExpanded;
    (() -> ())? onToggleLegend;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)toggleLegend;

@end

#endif /* _TtC10XElections27ElectionsChamberSummaryView_h */

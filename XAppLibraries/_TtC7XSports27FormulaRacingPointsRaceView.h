//
#ifndef _TtC7XSports27FormulaRacingPointsRaceView_h
#define _TtC7XSports27FormulaRacingPointsRaceView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.FormulaRacingPointsRaceView.Content ?, XSports.SportsLineChartView, _$sSa -> XSports.FormulaRacingPointsRaceView.LeaderCell, _$sSiSg, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo8UIButtonC, _$sySbcSg;

@interface XSports.FormulaRacingPointsRaceView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    ((Swift.Bool) -> ())? onSetExpanded;
    Swift.Bool isExpanded;
    XSports.SportsLineChartView chartView;
    __C.UIButton headerButton;
    __C.UIImageView chevronView;
    __C.UILabel headingLabel;
    __C.UIView divider;
    Swift.Array -> XSports.FormulaRacingPointsRaceView.LeaderCell cells;
    XSports.FormulaRacingPointsRaceView.Content ? content;
    Swift.Int? selectedIndex;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapHeader;

@end

#endif /* _TtC7XSports27FormulaRacingPointsRaceView_h */

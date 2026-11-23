//
#ifndef _TtC7XSports33FormulaRacingSessionGroupCardView_h
#define _TtC7XSports33FormulaRacingSessionGroupCardView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.FormulaRacingSessionGroupCard ?, _$sSa -> XSports.FormulaRacingSessionGroupCardView.LineControl, _$sSo7UILabelC, _$sySScSg;

@interface XSports.FormulaRacingSessionGroupCardView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onSelectSession;
    __C.UILabel titleLabel;
    Swift.Array -> XSports.FormulaRacingSessionGroupCardView.LineControl lines;
    XSports.FormulaRacingSessionGroupCard ? card;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapLine:(id)line;

@end

#endif /* _TtC7XSports33FormulaRacingSessionGroupCardView_h */

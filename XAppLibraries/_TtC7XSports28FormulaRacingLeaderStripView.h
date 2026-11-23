//
#ifndef _TtC7XSports28FormulaRacingLeaderStripView_h
#define _TtC7XSports28FormulaRacingLeaderStripView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.FormulaRacingLeaderStripView.Content ?, _$sSaySo6UIViewCG, _$sSaySo7UILabelCG, _$sSd, _$sSiSg, _$sSo28UISelectionFeedbackGeneratorC, _$sSo6UIViewC, _$sSo7UILabelC, _$sySicSg, _$syycSg;

@interface XSports.FormulaRacingLeaderStripView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    ((Swift.Int) -> ())? onSelectIndex;
    (() -> ())? onCommitSelection;
    Swift.Bool didScrubSelection;
    __C.UILabel lapLabel;
    __C.UIView playheadView;
    __C.UIView trackView;
    __C.UIView fadeView;
    [__C.UIView] segmentViews;
    [__C.UILabel] codeLabels;
    [__C.UIView] tickViews;
    [__C.UILabel] tickLabels;
    XSports.FormulaRacingLeaderStripView.Content ? content;
    [__C.UILabel] magnifierLabels;
    Swift.Int? magnifierFocus;
    Swift.Double lastMagnifierChange;
    __C.UISelectionFeedbackGenerator feedback;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)traitCollectionDidChange:(id)change;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)didTap:(id)tap;
- (void)didPan:(id)pan;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC7XSports28FormulaRacingLeaderStripView_h */

//
#ifndef _TtC7XSports24SportsAthleteResultsView_h
#define _TtC7XSports24SportsAthleteResultsView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class _$sSa -> XSports.SportsAthleteResultsView.ResultColumn, _$sSo12UIScrollViewC;

@interface XSports.SportsAthleteResultsView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.UIScrollView scrollView;
    Swift.Array -> XSports.SportsAthleteResultsView.ResultColumn columns;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports24SportsAthleteResultsView_h */

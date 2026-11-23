//
#ifndef _TtC7XSports21BaseballPitchListView_h
#define _TtC7XSports21BaseballPitchListView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class _$sSa -> XSports.SportsGamePlayDetailRow, _$sSa -> XSports.SportsGamePlayDetailRowView;

@interface XSports.BaseballPitchListView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    Swift.Array -> XSports.SportsGamePlayDetailRowView rowViews;
    Swift.Array -> XSports.SportsGamePlayDetailRow rows;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC7XSports21BaseballPitchListView_h */
